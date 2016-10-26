#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OVRPlugin_Bool1828096409.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_OVRPlugin_Node4200749027.h"
#include "AssemblyU2DCSharp_OVRPlugin_Frustumf2908953643.h"
#include "AssemblyU2DCSharp_OVRPlugin_ControllerState4225754152.h"
#include "AssemblyU2DCSharp_OVRPlugin_BatteryStatus3788981566.h"
#include "AssemblyU2DCSharp_OVRPlugin_PlatformUI207050246.h"

// System.Void OVRPlugin/OVRP_1_1_0::.cctor()
extern "C"  void OVRP_1_1_0__cctor_m1720630361 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetInitialized()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetInitialized_m1873835138 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OVRPlugin/OVRP_1_1_0::_ovrp_GetVersion()
extern "C"  IntPtr_t OVRP_1_1_0__ovrp_GetVersion_m35532674 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OVRPlugin/OVRP_1_1_0::ovrp_GetVersion()
extern "C"  String_t* OVRP_1_1_0_ovrp_GetVersion_m1235991907 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OVRPlugin/OVRP_1_1_0::_ovrp_GetNativeSDKVersion()
extern "C"  IntPtr_t OVRP_1_1_0__ovrp_GetNativeSDKVersion_m98640917 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OVRPlugin/OVRP_1_1_0::ovrp_GetNativeSDKVersion()
extern "C"  String_t* OVRP_1_1_0_ovrp_GetNativeSDKVersion_m2468850494 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OVRPlugin/OVRP_1_1_0::ovrp_GetAudioOutId()
extern "C"  IntPtr_t OVRP_1_1_0_ovrp_GetAudioOutId_m1124526622 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OVRPlugin/OVRP_1_1_0::ovrp_GetAudioInId()
extern "C"  IntPtr_t OVRP_1_1_0_ovrp_GetAudioInId_m2977060105 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin/OVRP_1_1_0::ovrp_GetEyeTextureScale()
extern "C"  float OVRP_1_1_0_ovrp_GetEyeTextureScale_m1829115370 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_SetEyeTextureScale(System.Single)
extern "C"  int32_t OVRP_1_1_0_ovrp_SetEyeTextureScale_m3615461331 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetTrackingOrientationSupported()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetTrackingOrientationSupported_m1076150999 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetTrackingOrientationEnabled()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetTrackingOrientationEnabled_m1050846612 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_SetTrackingOrientationEnabled(OVRPlugin/Bool)
extern "C"  int32_t OVRP_1_1_0_ovrp_SetTrackingOrientationEnabled_m610777327 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetTrackingPositionSupported()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetTrackingPositionSupported_m2225132716 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetTrackingPositionEnabled()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetTrackingPositionEnabled_m2700970823 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_SetTrackingPositionEnabled(OVRPlugin/Bool)
extern "C"  int32_t OVRP_1_1_0_ovrp_SetTrackingPositionEnabled_m471326862 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetNodePresent(OVRPlugin/Node)
extern "C"  int32_t OVRP_1_1_0_ovrp_GetNodePresent_m4102322562 (Il2CppObject * __this /* static, unused */, int32_t ___nodeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetNodeOrientationTracked(OVRPlugin/Node)
extern "C"  int32_t OVRP_1_1_0_ovrp_GetNodeOrientationTracked_m1286001117 (Il2CppObject * __this /* static, unused */, int32_t ___nodeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetNodePositionTracked(OVRPlugin/Node)
extern "C"  int32_t OVRP_1_1_0_ovrp_GetNodePositionTracked_m2629159366 (Il2CppObject * __this /* static, unused */, int32_t ___nodeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Frustumf OVRPlugin/OVRP_1_1_0::ovrp_GetNodeFrustum(OVRPlugin/Node)
extern "C"  Frustumf_t2908953643  OVRP_1_1_0_ovrp_GetNodeFrustum_m1310044985 (Il2CppObject * __this /* static, unused */, int32_t ___nodeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/ControllerState OVRPlugin/OVRP_1_1_0::ovrp_GetControllerState(System.UInt32)
extern "C"  ControllerState_t4225754152  OVRP_1_1_0_ovrp_GetControllerState_m1978165878 (Il2CppObject * __this /* static, unused */, uint32_t ___controllerMask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRPlugin/OVRP_1_1_0::ovrp_GetSystemCpuLevel()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetSystemCpuLevel_m3198171295 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_SetSystemCpuLevel(System.Int32)
extern "C"  int32_t OVRP_1_1_0_ovrp_SetSystemCpuLevel_m1505736370 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRPlugin/OVRP_1_1_0::ovrp_GetSystemGpuLevel()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetSystemGpuLevel_m1635691275 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_SetSystemGpuLevel(System.Int32)
extern "C"  int32_t OVRP_1_1_0_ovrp_SetSystemGpuLevel_m521817926 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetSystemPowerSavingMode()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetSystemPowerSavingMode_m1597701069 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin/OVRP_1_1_0::ovrp_GetSystemDisplayFrequency()
extern "C"  float OVRP_1_1_0_ovrp_GetSystemDisplayFrequency_m157802145 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRPlugin/OVRP_1_1_0::ovrp_GetSystemVSyncCount()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetSystemVSyncCount_m4111288849 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin/OVRP_1_1_0::ovrp_GetSystemVolume()
extern "C"  float OVRP_1_1_0_ovrp_GetSystemVolume_m3400845423 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/BatteryStatus OVRPlugin/OVRP_1_1_0::ovrp_GetSystemBatteryStatus()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetSystemBatteryStatus_m1289211155 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin/OVRP_1_1_0::ovrp_GetSystemBatteryLevel()
extern "C"  float OVRP_1_1_0_ovrp_GetSystemBatteryLevel_m1648018494 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin/OVRP_1_1_0::ovrp_GetSystemBatteryTemperature()
extern "C"  float OVRP_1_1_0_ovrp_GetSystemBatteryTemperature_m3709191306 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OVRPlugin/OVRP_1_1_0::_ovrp_GetSystemProductName()
extern "C"  IntPtr_t OVRP_1_1_0__ovrp_GetSystemProductName_m3548277699 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OVRPlugin/OVRP_1_1_0::ovrp_GetSystemProductName()
extern "C"  String_t* OVRP_1_1_0_ovrp_GetSystemProductName_m15454214 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_ShowSystemUI(OVRPlugin/PlatformUI)
extern "C"  int32_t OVRP_1_1_0_ovrp_ShowSystemUI_m2853698340 (Il2CppObject * __this /* static, unused */, int32_t ___ui0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetAppMonoscopic()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetAppMonoscopic_m3173833039 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_SetAppMonoscopic(OVRPlugin/Bool)
extern "C"  int32_t OVRP_1_1_0_ovrp_SetAppMonoscopic_m3732935140 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetAppHasVrFocus()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetAppHasVrFocus_m1484105655 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetAppShouldQuit()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetAppShouldQuit_m3231445929 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetAppShouldRecenter()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetAppShouldRecenter_m22560700 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OVRPlugin/OVRP_1_1_0::_ovrp_GetAppLatencyTimings()
extern "C"  IntPtr_t OVRP_1_1_0__ovrp_GetAppLatencyTimings_m3344365324 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OVRPlugin/OVRP_1_1_0::ovrp_GetAppLatencyTimings()
extern "C"  String_t* OVRP_1_1_0_ovrp_GetAppLatencyTimings_m3193130551 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_GetUserPresent()
extern "C"  int32_t OVRP_1_1_0_ovrp_GetUserPresent_m1687916782 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin/OVRP_1_1_0::ovrp_GetUserIPD()
extern "C"  float OVRP_1_1_0_ovrp_GetUserIPD_m2560363914 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_SetUserIPD(System.Single)
extern "C"  int32_t OVRP_1_1_0_ovrp_SetUserIPD_m2562060925 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin/OVRP_1_1_0::ovrp_GetUserEyeDepth()
extern "C"  float OVRP_1_1_0_ovrp_GetUserEyeDepth_m2675154923 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_SetUserEyeDepth(System.Single)
extern "C"  int32_t OVRP_1_1_0_ovrp_SetUserEyeDepth_m83503444 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin/OVRP_1_1_0::ovrp_GetUserEyeHeight()
extern "C"  float OVRP_1_1_0_ovrp_GetUserEyeHeight_m1356168065 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_1_0::ovrp_SetUserEyeHeight(System.Single)
extern "C"  int32_t OVRP_1_1_0_ovrp_SetUserEyeHeight_m3008961412 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
