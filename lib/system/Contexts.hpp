// Copyright (c) Microsoft. All rights reserved.

#pragma once
#include <IHttpClient.hpp>
#include <IOfflineStorage.hpp>
#include "packager/BondSplicer.hpp"
#include "pal/PAL.hpp"
#include "utils/Utils.hpp"
#include <map>
#include <memory>
#include <vector>
#include <atomic>


namespace ARIASDK_NS_BEGIN {


class IncomingEventContext : public PAL::RefCountedImpl<IncomingEventContext> {
  public:
    ::AriaProtocol::CsEvent* source;
    StorageRecord            record;
    std::uint64_t            policyBitFlags;

  public:
    IncomingEventContext()
    {
    }

    IncomingEventContext(std::string const& id, std::string const& tenantToken, EventLatency latency, EventPersistence persistence, ::AriaProtocol::CsEvent* source)
      : source(source),
        record{id, tenantToken, latency, persistence}
    {
    }

    virtual ~IncomingEventContext()
    {
    }
};

using IncomingEventContextPtr = PAL::RefCountedPtr<IncomingEventContext>;

//---

class EventsUploadContext : public PAL::RefCountedImpl<EventsUploadContext> {

    private:
#ifdef CRT_DEBUG_LEAKS
        // Track # of outstanding EventUploadContext objects remaining
        long objCount(long delta)
        {
            static std::atomic<long> seq(0);
            seq += delta;
            return seq;
        }
#endif
    /**
    * Release unmanaged pointers associated with EventsUploadContext
    */
    void clear()
    {
#ifndef _WIN32  /* FIXME: [MG] - debug this memory leak on Windows!!! */
        if (httpRequest != nullptr) {
            delete httpRequest;
            httpRequest = nullptr;
        }
        /* Note that httpResponse is released by httpRequest destructor */
#else
        //httpRequest gets deleted in the SendRequestAsync of WinInt and WinRt
        if (httpResponse != nullptr) {
            delete httpResponse;
            httpResponse = nullptr;
        }

#endif
    }
  public:
    // Retrieving
    EventLatency                         requestedMinLatency = EventLatency_Unspecified;
    unsigned                             requestedMaxCount = 0;

    // Packaging
    BondSplicer                          splicer;
    unsigned                             maxUploadSize = 0;
    EventLatency                         latency = EventLatency_Unspecified;
    std::map<std::string, size_t>        packageIds;
    std::map<std::string, std::string>   recordIdsAndTenantIds;
    std::vector<int64_t>                 recordTimestamps;
    unsigned                             maxRetryCountSeen = 0;

    // Encoding
    std::vector<uint8_t>                 body;
    bool                                 compressed = false;

    // Sending
    IHttpRequest*                        httpRequest;
    std::string                          httpRequestId;

    // Receiving
    IHttpResponse*                       httpResponse;
    int                                  durationMs = -1;
    bool                                 fromMemory;

    EventsUploadContext() :
        httpRequest(nullptr),
        httpResponse(nullptr)
    {
#ifdef CRT_DEBUG_LEAKS
        printf("[new]EventsUploadContext=%p [%ld]\n", this, objCount(1));
#endif

    }

    virtual ~EventsUploadContext()
    {
#ifdef CRT_DEBUG_LEAKS
        printf("[del]EventsUploadContext=%p [%ld]\n", this, objCount(-1));
#endif
        clear();
    }
};

using EventsUploadContextPtr = PAL::RefCountedPtr<EventsUploadContext>;

//---

struct StorageNotificationContext {
    std::string str;
    std::map<std::string, size_t> countonTenant;
};


} ARIASDK_NS_END
