///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2020 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
///////////////////////////////////////////////////////////////////////////////
#ifndef LOGSESSIONDATA_HPP
#define LOGSESSIONDATA_HPP

#include "Version.hpp"

#include <string>
#include <cstdint>

namespace MAT_NS_BEGIN
{
    class LogSessionData
    {
    public:

        LogSessionData(
            uint64_t sessionFirstTimeLaunch,
            std::string sessionSDKUid)
            :
            m_sessionFirstTimeLaunch(sessionFirstTimeLaunch),
            m_sessionSDKUid(sessionSDKUid)
        {
        }

        /// <summary>
        /// Gets the time that this session began.
        /// </summary>
        /// <returns>A 64-bit integer that contains the time.</returns>
        uint64_t getSessionFirstTime() const;

        /// <summary>
        /// Gets the SDK unique identifier.
        /// </summary>
        std::string getSessionSDKUid() const;

    protected:
        const uint64_t                m_sessionFirstTimeLaunch{0ull};
        const std::string             m_sessionSDKUid;
    };

} MAT_NS_END
#endif
