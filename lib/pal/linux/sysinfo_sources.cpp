// Copyright (c) Microsoft Corporation. All rights reserved.

/*
 * sysinfo_sources.cpp
 *
 *  Created on: Nov 3, 2017
 *      Author: Max Golovanov <maxgolov@microsoft.com>
 */

#include "sysinfo_sources.hpp"

#include <cstdio>
#include <cstdlib>
#include <cstdint>

#include <string.h>

#include <sstream>
#include <fstream>
#include <streambuf>
#include <list>

#include <unistd.h>
#include <sys/utsname.h>

#include <regex>

#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

#include "EventProperty.hpp"

namespace MAT = Microsoft::Applications::Telemetry;

/**
 * Read file contents
 *
 * @param filename
 * @return
 */
inline std::string ReadFile(const char *filename)
{
    std::ifstream t(filename);
    std::string str((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());
    return str;
}

/**
 * Execute command and get output
 * @param cmd Command to execute
 * @return output
 */
static std::string Exec(const char* cmd)
{
    std::array<char, 128> buffer;
    std::string result;
    std::shared_ptr<FILE> pipe(popen(cmd, "r"), pclose);
    if (!pipe)
    {
        // throw std::runtime_error("popen() failed!");
        return result;
    }

    while (!feof(pipe.get()))
    {
        if (fgets(buffer.data(), buffer.size(), pipe.get())!=NULL)
            result += buffer.data();
    }

    return result;
}

/**
 * Read node value, preprocess it using regexp and store result in cache
 *
 * @param key       Field name
 * @return          true if field value is found and saved in cache
 */
bool sysinfo_sources::fetch(std::string key)
{
    for(auto &kv : (*this))
    {
        if(kv.first == key)
        {
            std::string contents = ReadFile(kv.second.path);
            if((kv.second.selector == "*") || (kv.second.selector == ""))
            {
                cache[key] = contents;
                return true;
            }
            // Run regexp
            std::regex selector_regex(kv.second.selector);
            std::smatch match;
            if(std::regex_search(contents, match, selector_regex))
            {
                cache[key] = match[1];
                return true;
            }
        }
    }
    return false;
}

/**
 * Add source descriptor to multimap.
 *
 * @param key
 * @param val
 */
void sysinfo_sources::add(const std::string& key, const sysinfo_source_t& val)
{
    (*this).insert(std::pair<std::string, sysinfo_source_t>(key, val));
}

/**
 * Static configuration provisioning for where to fetch the props from
 */
sysinfo_sources::sysinfo_sources() :
        std::multimap<std::string, sysinfo_source_t>()
{
}

/**
 * Retrieve value by key from sysinfo_sources. Try to fetch from cache,
 * if not found, then fetch from filesystem and save to in-ram cache.
 *
 * @param key
 * @return
 */
const std::string& sysinfo_sources::get(std::string key)
{
    if(cache.find(key) == cache.end())
        fetch(key);
    return cache[key];
}

class sysinfo_sources_impl: public sysinfo_sources {

public:

    /**
     * Obtain system hardware and application information
     */
    sysinfo_sources_impl() : sysinfo_sources()
    {
        struct utsname buf;
        uname(&buf);
#if defined(__linux__)
        // Obtain Linux system information from filesystem
        add("devId", { "/etc/machine-id", "*"});
        add("osName", {"/etc/os-release", ".*ID=(.*)[\n]+"});
        add("osVer", {"/etc/os-release", ".*VERSION_ID=\"(.*)\".*"});
        add("osRel", {"/etc/os-release", ".*VERSION=\"(.*)\".*"});
        add("osBuild", {"/proc/version", "(.*)[\n]+"});
        // add("proc_loadavg", {"/proc/loadavg", "(.*)[\n]*"});
        // add("proc_uptime", {"/proc/uptime", "(.*)[\n]*"});
#endif

#if defined(__MINGW32__) || defined(__MSYS__)
        // Obtain MinGW Device ID from registry
        add("devId",    { "/proc/registry/HKEY_LOCAL_MACHINE/SYSTEM/CurrentControlSet/Control/SystemInformation/ComputerHardwareId", "*"});
        add("devMake",  { "/proc/registry/HKEY_LOCAL_MACHINE/SYSTEM/CurrentControlSet/Control/SystemInformation/SystemManufacturer", "*"});
        add("devModel", { "/proc/registry/HKEY_LOCAL_MACHINE/SYSTEM/CurrentControlSet/Control/SystemInformation/SystemProductName",  "*"});
#endif

        // Fallback to uname if above methods failed
        if (!get("osVer").compare(""))
        {
            cache["osVer"]  = (const char *)(buf.version);
        }

        if (!get("osName").compare(""))
        {
            cache["osName"] = (const char *)(buf.sysname);
        }

        if (!get("osRel").compare(""))
        {
            cache["osRel"]  = (const char *)(buf.release);
        }

        if (!get("devId").compare(""))
        {
            // We were unable to obtain Device Id using standard means.
            // Try to use hash of blkid + hostname instead. Both blkid
            // and hostname would rarely change, as well as guarantee
            // at least some protection from cloned VM images.
            std::string contents = Exec("echo `blkid; hostname`");
            if (!contents.empty())
            {
                uint8_t guid_bytes[16] = { 0 };
                for(size_t i=0; i<contents.length(); i++)
                {   // Simple XOR of contents to generate a UUID
                    guid_bytes[i % 16] ^= contents.at(i);
                }
                cache["devId"] = MAT::GUID_t(guid_bytes).to_string();
            }
        }

        add("appId", {"/proc/self/cmdline", "(.*)[ ]*.*[\n]*"});
    }

};

sysinfo_sources aria_hwinfo = sysinfo_sources_impl();
