// Copyright (c) Microsoft. All rights reserved.

#pragma once
#include "api/IRuntimeConfig.hpp"

#include "system/Route.hpp"
#include "system/Contexts.hpp"

namespace ARIASDK_NS_BEGIN {

    class AIPackager {
    public:
        AIPackager(IRuntimeConfig& runtimeConfig);

    protected:
        void handleAddEventToPackage(EventsUploadContextPtr const& ctx, StorageRecord const& record, bool& wantMore);
        void handleFinalizePackage(EventsUploadContextPtr const& ctx);

    protected:
        IRuntimeConfig & m_config;
        std::string      m_forcedTenantToken;

    public:
        RouteSink<AIPackager, EventsUploadContextPtr const&, StorageRecord const&, bool&> addEventToPackage{ this, &AIPackager::handleAddEventToPackage };
        // RouteSink<AIPackager, EventsUploadContextPtr const&>                              finalizePackage{ this, &AIPackager::handleFinalizePackage };

        RouteSource<EventsUploadContextPtr const&>                                      emptyPackage;
        RouteSource<EventsUploadContextPtr const&>                                      packagedEvents;
    };


} ARIASDK_NS_END
