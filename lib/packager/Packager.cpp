// Copyright (c) Microsoft. All rights reserved.

#include "Packager.hpp"
#include "ILogManager.hpp"
#include "utils/Utils.hpp"
#include <algorithm>

namespace ARIASDK_NS_BEGIN {

    Packager::Packager(IRuntimeConfig& runtimeConfig)
        : m_config(runtimeConfig)
    {
        const char *forcedTenantToken = runtimeConfig["forcedTenantToken"];
        if (forcedTenantToken != nullptr)
        {
            m_forcedTenantToken = forcedTenantToken;
        }
    }

    Packager::~Packager()
    {
    }

    void Packager::handleAddEventToPackage(EventsUploadContextPtr const& ctx, StorageRecord const& record, bool& wantMore)
    {
        if (ctx->maxUploadSize == 0) {
            ctx->maxUploadSize = m_config.GetMaximumUploadSizeBytes();
        }
        if (ctx->splicer.getSizeEstimate() + record.blob.size() > ctx->maxUploadSize) {
            wantMore = false;
            if (!ctx->recordIdsAndTenantIds.empty()) {
                LOG_TRACE("Maximum upload size %u bytes exceeded, not adding the next event (ID %s, size %u bytes)",
                    ctx->maxUploadSize, record.id.c_str(), static_cast<unsigned>(record.blob.size()));
                return;
            }
            else {
                LOG_INFO("Maximum upload size %u bytes exceeded by the first event",
                    ctx->maxUploadSize);
            }
        }

        if (ctx->latency == EventLatency_Unspecified) {
            ctx->latency = record.latency;
            LOG_TRACE("The highest latency found was %d (%s)",
                ctx->latency, latencyToStr(ctx->latency));
        }

        LOG_TRACE("Adding event %s:%s, size %u bytes",
            tenantTokenToId(record.tenantToken).c_str(), record.id.c_str(), static_cast<unsigned>(record.blob.size()));

        std::string const& tenantToken = m_forcedTenantToken.empty() ? record.tenantToken : m_forcedTenantToken;
        auto it = ctx->packageIds.lower_bound(tenantToken);
        if (it == ctx->packageIds.end() || it->first != tenantToken)
        {
            DataPackage package;
            package.Type = "Client";
            package.Source = "act_default_source"; // from ReferenceSDK
            package.Version = BUILD_VERSION_STR;
            package.DataPackageId = PAL::generateUuidString();
            package.Timestamp = PAL::getUtcSystemTimeMs();
            it = ctx->packageIds.insert(it, { tenantToken, ctx->splicer.addDataPackage(tenantToken, package) });
        }

        ctx->splicer.addRecord(it->second, record.blob);

        ctx->recordIdsAndTenantIds[record.id] = record.tenantToken;
        ctx->recordTimestamps.push_back(record.timestamp);
        ctx->maxRetryCountSeen = std::max<int>(ctx->maxRetryCountSeen, record.retryCount);
    }

    void Packager::handleFinalizePackage(EventsUploadContextPtr const& ctx)
    {
        if (ctx->packageIds.empty()) {
            emptyPackage(ctx);
            return;
        }

        ctx->body = ctx->splicer.splice();
        ctx->splicer.clear();

        packagedEvents(ctx);
    }


} ARIASDK_NS_END
