#include "Version.hpp"

#include "ISystemInformation.hpp"
#include "pal/SystemInformationImpl.hpp"

#include <sys/utsname.h>
#include "sysinfo_sources.hpp"
#include <string>

namespace Microsoft {
    namespace Applications {
        namespace Telemetry {
            namespace PAL
            {

                SystemInformationImpl::SystemInformationImpl()
                    : m_info_helper()
                {
                    // FIXME
                    m_user_timezone = "UTC";

                    m_app_id = aria_hwinfo.get("appId");

                    m_os_name = aria_hwinfo.get("osName");

                    m_os_major_version = aria_hwinfo.get("osVer");

                    m_os_full_version = aria_hwinfo.get("osRel");
                }

                SystemInformationImpl::~SystemInformationImpl()
                {
                }

                int SystemInformationImpl::RegisterInformationChangedCallback(IPropertyChangedCallback* pCallback)
                {
                    return m_info_helper.RegisterInformationChangedCallback(pCallback);
                }

                void SystemInformationImpl::UnRegisterInformationChangedCallback(int callbackToken)
                {
                    m_info_helper.UnRegisterInformationChangedCallback(callbackToken);
                }

				ISystemInformation* SystemInformationImpl::Create()
                {
                    return  new SystemInformationImpl();
                }
            }
        }
    }
}
