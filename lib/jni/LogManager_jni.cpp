#include "JniUtils.hpp"
#include "LogManager.hpp"
#include "modules/dataviewer/DefaultDataViewer.hpp"

using namespace MAT;
LOGMANAGER_INSTANCE

extern "C"
{

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeInitializeWithoutTenantToken(
        JNIEnv* /* env */,
        jclass /* this */) {
    ILogger* logger = LogManager::Initialize();
    return reinterpret_cast<jlong>(logger);
}

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeInitializeWithTenantToken(
        JNIEnv* env,
        jclass /* this */,
        jstring jTenantToken) {
    auto tenantToken = JStringToStdString(env, jTenantToken);
    ILogger* logger = LogManager::Initialize(tenantToken);
    return reinterpret_cast<jlong>(logger);
}

JNIEXPORT jint JNICALL Java_com_microsoft_applications_events_LogManager_nativeFlushAndTeardown(
        JNIEnv* /* env */,
        jclass /* this */) {
    return static_cast<jint>(LogManager::FlushAndTeardown());
}

JNIEXPORT jint JNICALL Java_com_microsoft_applications_events_LogManager_nativeFlush(
        JNIEnv* /* env */,
        jclass /* this */) {
    return static_cast<jint>(LogManager::Flush());
}

JNIEXPORT jint JNICALL Java_com_microsoft_applications_events_LogManager_nativeUploadNow(
        JNIEnv* /* env */,
        jclass /* this */) {
    return static_cast<jint>(LogManager::UploadNow());
}

JNIEXPORT jint JNICALL Java_com_microsoft_applications_events_LogManager_nativePauseTransmission(
        JNIEnv* /* env */,
        jclass /* this */) {
    return static_cast<jint>(LogManager::PauseTransmission());
}

JNIEXPORT jint JNICALL Java_com_microsoft_applications_events_LogManager_nativeResumeTransmission(
        JNIEnv* /* env */,
        jclass /* this */) {
    return static_cast<jint>(LogManager::ResumeTransmission());
}

JNIEXPORT jint JNICALL Java_com_microsoft_applications_events_LogManager_nativeSetIntTransmitProfile(
        JNIEnv* /* env */,
        jclass /* this */,
        jint jProfile) {
    return static_cast<jint>(LogManager::SetTransmitProfile(
            static_cast<TransmitProfile>(jProfile)));
}

JNIEXPORT jint JNICALL Java_com_microsoft_applications_events_LogManager_nativeSetTransmitProfileString(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrProfile) {
    return static_cast<jint>(LogManager::SetTransmitProfile(JStringToStdString(env, jstrProfile)));
}

JNIEXPORT jint JNICALL Java_com_microsoft_applications_events_LogManager_nativeLoadTransmitProfilesString(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrProfilesJson) {
    return static_cast<jint>(LogManager::LoadTransmitProfiles(JStringToStdString(env, jstrProfilesJson)));
}

JNIEXPORT jint JNICALL Java_com_microsoft_applications_events_LogManager_nativeResetTransmitProfiles(
        JNIEnv* /* env */,
        jclass /* this */) {
    return static_cast<jint>(LogManager::ResetTransmitProfiles());
}

JNIEXPORT jstring JNICALL Java_com_microsoft_applications_events_LogManager_getTransmitProfileName(
        JNIEnv* env,
        jclass /* this */) {
    std::string profileName = LogManager::GetTransmitProfileName();
    return static_cast<jstring>(env->NewStringUTF(profileName.c_str()));
}

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeGetSemanticContext(
        JNIEnv* env,
        jclass /* this */) {
    return reinterpret_cast<jlong>(LogManager::GetSemanticContext());
}

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeSetContextStringValue(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrName,
        jstring jstrValue,
        jint piiKind) {
    auto name = JStringToStdString(env, jstrName);
    auto value = JStringToStdString(env, jstrValue);
    return static_cast<jint>(LogManager::SetContext(name, value, static_cast<PiiKind>(piiKind)));
}

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeSetContextIntValue(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrName,
        jint jValue,
        jint piiKind) {
    auto name = JStringToStdString(env, jstrName);
    return static_cast<jint>(LogManager::SetContext(name, static_cast<int32_t>(jValue), static_cast<PiiKind>(piiKind)));
}

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeSetContextLongValue(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrName,
        jlong jValue,
        jint piiKind) {
    auto name = JStringToStdString(env, jstrName);
    return static_cast<jint>(LogManager::SetContext(name, static_cast<int64_t>(jValue), static_cast<PiiKind>(piiKind)));
}

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeSetContextDoubleValue(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrName,
        jdouble jValue,
        jint piiKind) {
    auto name = JStringToStdString(env, jstrName);
    return static_cast<jint>(LogManager::SetContext(name, static_cast<double>(jValue), static_cast<PiiKind>(piiKind)));
}

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeSetContextBoolValue(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrName,
        jboolean jValue,
        jint piiKind) {
    auto name = JStringToStdString(env, jstrName);
    return static_cast<jint>(LogManager::SetContext(name, static_cast<bool>(jValue), static_cast<PiiKind>(piiKind)));
}

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeSetContextTimeTicksValue(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrName,
        jlong jValue,
        jint piiKind) {
    auto name = JStringToStdString(env, jstrName);
    return static_cast<jint>(LogManager::SetContext(name, time_ticks_t(static_cast<uint64_t>(jValue)), static_cast<PiiKind>(piiKind)));
}

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeSetContextGuidValue(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrName,
        jstring jstrValue,
        jint piiKind) {
    auto name = JStringToStdString(env, jstrName);
    auto value = JStringToStdString(env, jstrValue);
    return static_cast<jint>(LogManager::SetContext(name, GUID_t(value.c_str()), static_cast<PiiKind>(piiKind)));
}

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeGetLogger(
        JNIEnv* /* env */,
        jclass /* this */) {
    ILogger* logger = LogManager::GetLogger();
    return reinterpret_cast<jlong>(logger);
}

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeGetLoggerWithSource(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrSource) {
    auto source = JStringToStdString(env, jstrSource);
    ILogger* logger = LogManager::GetLogger(source);
    return reinterpret_cast<jlong>(logger);
}

JNIEXPORT jlong JNICALL Java_com_microsoft_applications_events_LogManager_nativeGetLoggerWithTenantTokenAndSource(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrTenantToken,
        jstring jstrSource){
    auto tenantToken = JStringToStdString(env, jstrTenantToken);
    auto source = JStringToStdString(env, jstrSource);
    ILogger* logger = LogManager::GetLogger(tenantToken, source);
    return reinterpret_cast<jlong>(logger);
}

std::shared_ptr<DefaultDataViewer> g_spDefaultDataViewer;

JNIEXPORT void JNICALL Java_com_microsoft_applications_events_LogManager_initializeDiagnosticDataViewer(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrMachineIdentifier) {
    auto machineIdentifier = JStringToStdString(env, jstrMachineIdentifier);
    g_spDefaultDataViewer = std::make_shared<DefaultDataViewer>(nullptr, machineIdentifier);
    LogManager::GetDataViewerCollection().RegisterViewer(std::static_pointer_cast<IDataViewer>(g_spDefaultDataViewer));
}

JNIEXPORT jboolean JNICALL Java_com_microsoft_applications_events_LogManager_enableRemoteViewer(
        JNIEnv* env,
        jclass /* this */,
        jstring jstrEndpoint) {
    if (g_spDefaultDataViewer == nullptr)
        return false;

    auto endpoint = JStringToStdString(env, jstrEndpoint);
    return g_spDefaultDataViewer->EnableRemoteViewer(endpoint);
}

JNIEXPORT jboolean JNICALL Java_com_microsoft_applications_events_LogManager_disableViewer(
        JNIEnv* env,
        jclass /* this */) {
    if (g_spDefaultDataViewer == nullptr)
        return false;

    return g_spDefaultDataViewer->DisableViewer();
}

JNIEXPORT jboolean JNICALL Java_com_microsoft_applications_events_LogManager_isViewerEnabled(
        JNIEnv* env,
        jclass /* this */) {
    return LogManager::GetDataViewerCollection().IsViewerEnabled();
}

}