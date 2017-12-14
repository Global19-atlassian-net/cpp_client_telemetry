#pragma once
#include "PlatformHelpers.h"
#include "SchemaStub.hpp"
#include "ISemanticContext.hpp"

namespace MAT = Microsoft::Applications::Events ;

namespace Microsoft {
    namespace Applications {
        namespace Events  {
            namespace Windows
            {
                public interface class ISemanticContext
                {
                    property String^ AppId
                    {
                        virtual void set(String^ appId) = 0;
                    }

                    property String^ AppVersion
                    {
                        virtual void set(String^ appVersion) = 0;
                    }

                    property String^ UserId
                    {
                        virtual void set(String^ userId) = 0;
                    }

                    property String^ UserMsaId
                    {
                        virtual void set(String^ userMsaId) = 0;
                    }

                    property String^ UserANID
                    {
                        virtual void set(String^ userANID) = 0;
                    }

                    property String^ UserAdvertisingId
                    {
                        virtual void set(String^ userAdvertisingId) = 0;
                    }

                    property String^ UserLanguage
                    {
                        virtual void set(String^ UserLanguage) = 0;
                    }
               
                    property String^ UserTimeZone
                    {
                        virtual void set(String^ userTimeZone) = 0;
                    }

                    virtual void SetUserId(String^ userId, PiiKind piiKind) = 0;
                };

                /// @cond INTERNAL_DOCS
                /// Excluded from public docs
                ref class SemanticContextImpl sealed : ISemanticContext
                {
                public:

                    // Inherited via ISemanticContext
                    property String^ AppId
                    {
                        virtual void set(String^ appId);
                    }

                    property String^ AppVersion
                    {
                        virtual void set(String^ appVersion);
                    }

                    property String^ UserId
                    {
                        virtual void set(String^ userId);
                    }

                    property String^ UserMsaId
                    {
                        virtual void set(String^ userMsaId);
                    }

                    property String^ UserANID
                    {
                        virtual void set(String^ userANID);
                    }

                    property String^ UserAdvertisingId
                    {
                        virtual void set(String^ userAdvertisingId);
                    }

                    property String^ UserLanguage
                    {
                        virtual void set(String^ userLanguage);
                    }

                    property String^ UserTimeZone
                    {
                        virtual void set(String^ userTimeZone);
                    }

                    virtual void SetUserId(String^ userId, PiiKind piiKind);

                    property String^ AppExperimentETag
                    {
                        virtual void set(String^ appExperimentETag);
                    }
                    
                    property String^ AppExperimentIds
                    {
                        virtual void set(String^ appExperimentIds);
                    }
                                        
                    virtual void SetEventExperimentIds(String^ eventName, String^ experimentIds);					

                internal:
                    SemanticContextImpl(MAT::ISemanticContext* semanticContextCore);

                private:
                    MAT::ISemanticContext* m_semanticContextCore;

                };
                /// @endcond
            }
        }
    }
}
