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

// System.Version
struct Version_t1755874712;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OVRPlugin_SystemRegion2488429606.h"
#include "AssemblyU2DCSharp_OVRPlugin_BatteryStatus3788981566.h"
#include "AssemblyU2DCSharp_OVRPlugin_Posef1127343044.h"
#include "AssemblyU2DCSharp_OVRPlugin_Eye295406484.h"
#include "AssemblyU2DCSharp_OVRPlugin_Frustumf2908953643.h"
#include "AssemblyU2DCSharp_OVRPlugin_Sizei1328854707.h"
#include "AssemblyU2DCSharp_OVRPlugin_Tracker4150166447.h"
#include "AssemblyU2DCSharp_OVRPlugin_PlatformUI207050246.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_OVRPlugin_Vector3f2438854983.h"
#include "AssemblyU2DCSharp_OVRPlugin_OverlayShape2727937550.h"
#include "AssemblyU2DCSharp_OVRPlugin_Node4200749027.h"
#include "AssemblyU2DCSharp_OVRPlugin_ControllerState4225754152.h"
#include "AssemblyU2DCSharp_OVRPlugin_HapticsDesc4236431224.h"
#include "AssemblyU2DCSharp_OVRPlugin_HapticsState2857739486.h"
#include "AssemblyU2DCSharp_OVRPlugin_HapticsBuffer845314955.h"
#include "AssemblyU2DCSharp_OVRPlugin_BoundaryTestResult830279820.h"
#include "AssemblyU2DCSharp_OVRPlugin_BoundaryType1171722187.h"
#include "AssemblyU2DCSharp_OVRPlugin_BoundaryLookAndFeel962285245.h"
#include "AssemblyU2DCSharp_OVRPlugin_BoundaryGeometry1848884777.h"
#include "AssemblyU2DCSharp_OVRPlugin_Bool1828096409.h"
#include "AssemblyU2DCSharp_OVRPlugin_TrackingOrigin2307891504.h"
#include "AssemblyU2DCSharp_OVRPlugin_RecenterFlags3627868238.h"

// System.Void OVRPlugin::.cctor()
extern "C"  void OVRPlugin__cctor_m939161148 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version OVRPlugin::get_version()
extern "C"  Version_t1755874712 * OVRPlugin_get_version_m4259860984 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version OVRPlugin::get_nativeSDKVersion()
extern "C"  Version_t1755874712 * OVRPlugin_get_nativeSDKVersion_m759211449 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_initialized()
extern "C"  bool OVRPlugin_get_initialized_m3582169690 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_chromatic()
extern "C"  bool OVRPlugin_get_chromatic_m653108178 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_chromatic(System.Boolean)
extern "C"  void OVRPlugin_set_chromatic_m182542211 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_monoscopic()
extern "C"  bool OVRPlugin_get_monoscopic_m190844780 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_monoscopic(System.Boolean)
extern "C"  void OVRPlugin_set_monoscopic_m3048369333 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_rotation()
extern "C"  bool OVRPlugin_get_rotation_m3096819800 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_rotation(System.Boolean)
extern "C"  void OVRPlugin_set_rotation_m669097347 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_position()
extern "C"  bool OVRPlugin_get_position_m195787165 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_position(System.Boolean)
extern "C"  void OVRPlugin_set_position_m3510363090 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_useIPDInPositionTracking()
extern "C"  bool OVRPlugin_get_useIPDInPositionTracking_m2249943307 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_useIPDInPositionTracking(System.Boolean)
extern "C"  void OVRPlugin_set_useIPDInPositionTracking_m3439594222 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_positionSupported()
extern "C"  bool OVRPlugin_get_positionSupported_m716782995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_positionTracked()
extern "C"  bool OVRPlugin_get_positionTracked_m1169794571 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_powerSaving()
extern "C"  bool OVRPlugin_get_powerSaving_m3085561791 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_hmdPresent()
extern "C"  bool OVRPlugin_get_hmdPresent_m2977554746 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_userPresent()
extern "C"  bool OVRPlugin_get_userPresent_m1388588090 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_headphonesPresent()
extern "C"  bool OVRPlugin_get_headphonesPresent_m2875967738 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRPlugin::get_recommendedMSAALevel()
extern "C"  int32_t OVRPlugin_get_recommendedMSAALevel_m4168723723 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/SystemRegion OVRPlugin::get_systemRegion()
extern "C"  int32_t OVRPlugin_get_systemRegion_m623257466 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OVRPlugin::get_audioOutId()
extern "C"  String_t* OVRPlugin_get_audioOutId_m1649398680 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OVRPlugin::get_audioInId()
extern "C"  String_t* OVRPlugin_get_audioInId_m4294058793 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_hasVrFocus()
extern "C"  bool OVRPlugin_get_hasVrFocus_m2917884530 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_shouldQuit()
extern "C"  bool OVRPlugin_get_shouldQuit_m486043034 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_shouldRecenter()
extern "C"  bool OVRPlugin_get_shouldRecenter_m3004156413 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OVRPlugin::get_productName()
extern "C"  String_t* OVRPlugin_get_productName_m2839441813 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OVRPlugin::get_latency()
extern "C"  String_t* OVRPlugin_get_latency_m3293466213 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin::get_eyeDepth()
extern "C"  float OVRPlugin_get_eyeDepth_m1703447384 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_eyeDepth(System.Single)
extern "C"  void OVRPlugin_set_eyeDepth_m800698101 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin::get_eyeHeight()
extern "C"  float OVRPlugin_get_eyeHeight_m2662415174 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_eyeHeight(System.Single)
extern "C"  void OVRPlugin_set_eyeHeight_m2063499955 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin::get_batteryLevel()
extern "C"  float OVRPlugin_get_batteryLevel_m2613859117 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin::get_batteryTemperature()
extern "C"  float OVRPlugin_get_batteryTemperature_m3125316587 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRPlugin::get_cpuLevel()
extern "C"  int32_t OVRPlugin_get_cpuLevel_m2611148238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_cpuLevel(System.Int32)
extern "C"  void OVRPlugin_set_cpuLevel_m2810707625 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRPlugin::get_gpuLevel()
extern "C"  int32_t OVRPlugin_get_gpuLevel_m2606683602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_gpuLevel(System.Int32)
extern "C"  void OVRPlugin_set_gpuLevel_m3794626069 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRPlugin::get_vsyncCount()
extern "C"  int32_t OVRPlugin_get_vsyncCount_m2695208082 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_vsyncCount(System.Int32)
extern "C"  void OVRPlugin_set_vsyncCount_m1241350975 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin::get_systemVolume()
extern "C"  float OVRPlugin_get_systemVolume_m1551258083 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin::get_ipd()
extern "C"  float OVRPlugin_get_ipd_m3940582851 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_ipd(System.Single)
extern "C"  void OVRPlugin_set_ipd_m1814729542 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::get_occlusionMesh()
extern "C"  bool OVRPlugin_get_occlusionMesh_m3345660708 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_occlusionMesh(System.Boolean)
extern "C"  void OVRPlugin_set_occlusionMesh_m4139966989 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/BatteryStatus OVRPlugin::get_batteryStatus()
extern "C"  int32_t OVRPlugin_get_batteryStatus_m1971463778 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Posef OVRPlugin::GetEyeVelocity(OVRPlugin/Eye)
extern "C"  Posef_t1127343044  OVRPlugin_GetEyeVelocity_m2276695302 (Il2CppObject * __this /* static, unused */, int32_t ___eyeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Posef OVRPlugin::GetEyeAcceleration(OVRPlugin/Eye)
extern "C"  Posef_t1127343044  OVRPlugin_GetEyeAcceleration_m2421889205 (Il2CppObject * __this /* static, unused */, int32_t ___eyeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Frustumf OVRPlugin::GetEyeFrustum(OVRPlugin/Eye)
extern "C"  Frustumf_t2908953643  OVRPlugin_GetEyeFrustum_m608149412 (Il2CppObject * __this /* static, unused */, int32_t ___eyeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Sizei OVRPlugin::GetEyeTextureSize(OVRPlugin/Eye)
extern "C"  Sizei_t1328854707  OVRPlugin_GetEyeTextureSize_m1057877500 (Il2CppObject * __this /* static, unused */, int32_t ___eyeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Posef OVRPlugin::GetTrackerPose(OVRPlugin/Tracker)
extern "C"  Posef_t1127343044  OVRPlugin_GetTrackerPose_m3698439340 (Il2CppObject * __this /* static, unused */, int32_t ___trackerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Frustumf OVRPlugin::GetTrackerFrustum(OVRPlugin/Tracker)
extern "C"  Frustumf_t2908953643  OVRPlugin_GetTrackerFrustum_m3942262462 (Il2CppObject * __this /* static, unused */, int32_t ___trackerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::ShowUI(OVRPlugin/PlatformUI)
extern "C"  bool OVRPlugin_ShowUI_m768367610 (Il2CppObject * __this /* static, unused */, int32_t ___ui0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::SetOverlayQuad(System.Boolean,System.Boolean,System.IntPtr,System.IntPtr,System.IntPtr,OVRPlugin/Posef,OVRPlugin/Vector3f,System.Int32,OVRPlugin/OverlayShape)
extern "C"  bool OVRPlugin_SetOverlayQuad_m1525965552 (Il2CppObject * __this /* static, unused */, bool ___onTop0, bool ___headLocked1, IntPtr_t ___leftTexture2, IntPtr_t ___rightTexture3, IntPtr_t ___device4, Posef_t1127343044  ___pose5, Vector3f_t2438854983  ___scale6, int32_t ___layerIndex7, int32_t ___shape8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::UpdateNodePhysicsPoses(System.Int32,System.Double)
extern "C"  bool OVRPlugin_UpdateNodePhysicsPoses_m3786398266 (Il2CppObject * __this /* static, unused */, int32_t ___frameIndex0, double ___predictionSeconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Posef OVRPlugin::GetNodePose(OVRPlugin/Node,System.Boolean)
extern "C"  Posef_t1127343044  OVRPlugin_GetNodePose_m3551174317 (Il2CppObject * __this /* static, unused */, int32_t ___nodeId0, bool ___usePhysicsPose1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Posef OVRPlugin::GetNodeVelocity(OVRPlugin/Node,System.Boolean)
extern "C"  Posef_t1127343044  OVRPlugin_GetNodeVelocity_m991932963 (Il2CppObject * __this /* static, unused */, int32_t ___nodeId0, bool ___usePhysicsPose1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Posef OVRPlugin::GetNodeAcceleration(OVRPlugin/Node,System.Boolean)
extern "C"  Posef_t1127343044  OVRPlugin_GetNodeAcceleration_m4234406596 (Il2CppObject * __this /* static, unused */, int32_t ___nodeId0, bool ___usePhysicsPose1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::GetNodePresent(OVRPlugin/Node)
extern "C"  bool OVRPlugin_GetNodePresent_m2743706417 (Il2CppObject * __this /* static, unused */, int32_t ___nodeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::GetNodeOrientationTracked(OVRPlugin/Node)
extern "C"  bool OVRPlugin_GetNodeOrientationTracked_m893561386 (Il2CppObject * __this /* static, unused */, int32_t ___nodeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::GetNodePositionTracked(OVRPlugin/Node)
extern "C"  bool OVRPlugin_GetNodePositionTracked_m1650596601 (Il2CppObject * __this /* static, unused */, int32_t ___nodeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/ControllerState OVRPlugin::GetControllerState(System.UInt32)
extern "C"  ControllerState_t4225754152  OVRPlugin_GetControllerState_m2637764025 (Il2CppObject * __this /* static, unused */, uint32_t ___controllerMask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::SetControllerVibration(System.UInt32,System.Single,System.Single)
extern "C"  bool OVRPlugin_SetControllerVibration_m2119960349 (Il2CppObject * __this /* static, unused */, uint32_t ___controllerMask0, float ___frequency1, float ___amplitude2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/HapticsDesc OVRPlugin::GetControllerHapticsDesc(System.UInt32)
extern "C"  HapticsDesc_t4236431224  OVRPlugin_GetControllerHapticsDesc_m3514639209 (Il2CppObject * __this /* static, unused */, uint32_t ___controllerMask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/HapticsState OVRPlugin::GetControllerHapticsState(System.UInt32)
extern "C"  HapticsState_t2857739486  OVRPlugin_GetControllerHapticsState_m2166681313 (Il2CppObject * __this /* static, unused */, uint32_t ___controllerMask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::SetControllerHaptics(System.UInt32,OVRPlugin/HapticsBuffer)
extern "C"  bool OVRPlugin_SetControllerHaptics_m3651591522 (Il2CppObject * __this /* static, unused */, uint32_t ___controllerMask0, HapticsBuffer_t845314955  ___hapticsBuffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin::GetEyeRecommendedResolutionScale()
extern "C"  float OVRPlugin_GetEyeRecommendedResolutionScale_m2054751655 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin::GetAppCpuStartToGpuEndTime()
extern "C"  float OVRPlugin_GetAppCpuStartToGpuEndTime_m327304637 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::GetBoundaryConfigured()
extern "C"  bool OVRPlugin_GetBoundaryConfigured_m3405327027 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/BoundaryTestResult OVRPlugin::TestBoundaryNode(OVRPlugin/Node,OVRPlugin/BoundaryType)
extern "C"  BoundaryTestResult_t830279820  OVRPlugin_TestBoundaryNode_m3315331572 (Il2CppObject * __this /* static, unused */, int32_t ___nodeId0, int32_t ___boundaryType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/BoundaryTestResult OVRPlugin::TestBoundaryPoint(OVRPlugin/Vector3f,OVRPlugin/BoundaryType)
extern "C"  BoundaryTestResult_t830279820  OVRPlugin_TestBoundaryPoint_m3680940542 (Il2CppObject * __this /* static, unused */, Vector3f_t2438854983  ___point0, int32_t ___boundaryType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::SetBoundaryLookAndFeel(OVRPlugin/BoundaryLookAndFeel)
extern "C"  bool OVRPlugin_SetBoundaryLookAndFeel_m325598548 (Il2CppObject * __this /* static, unused */, BoundaryLookAndFeel_t962285245  ___lookAndFeel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::ResetBoundaryLookAndFeel()
extern "C"  bool OVRPlugin_ResetBoundaryLookAndFeel_m2402978048 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/BoundaryGeometry OVRPlugin::GetBoundaryGeometry(OVRPlugin/BoundaryType)
extern "C"  BoundaryGeometry_t1848884777  OVRPlugin_GetBoundaryGeometry_m2487330432 (Il2CppObject * __this /* static, unused */, int32_t ___boundaryType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Vector3f OVRPlugin::GetBoundaryDimensions(OVRPlugin/BoundaryType)
extern "C"  Vector3f_t2438854983  OVRPlugin_GetBoundaryDimensions_m1587881863 (Il2CppObject * __this /* static, unused */, int32_t ___boundaryType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::GetBoundaryVisible()
extern "C"  bool OVRPlugin_GetBoundaryVisible_m1264548889 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::SetBoundaryVisible(System.Boolean)
extern "C"  bool OVRPlugin_SetBoundaryVisible_m3882232234 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin::ToBool(System.Boolean)
extern "C"  int32_t OVRPlugin_ToBool_m3157660951 (Il2CppObject * __this /* static, unused */, bool ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/TrackingOrigin OVRPlugin::GetTrackingOriginType()
extern "C"  int32_t OVRPlugin_GetTrackingOriginType_m3047508129 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::SetTrackingOriginType(OVRPlugin/TrackingOrigin)
extern "C"  bool OVRPlugin_SetTrackingOriginType_m2992655316 (Il2CppObject * __this /* static, unused */, int32_t ___originType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Posef OVRPlugin::GetTrackingCalibratedOrigin()
extern "C"  Posef_t1127343044  OVRPlugin_GetTrackingCalibratedOrigin_m1166331672 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::SetTrackingCalibratedOrigin()
extern "C"  bool OVRPlugin_SetTrackingCalibratedOrigin_m1378247639 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPlugin::RecenterTrackingOrigin(OVRPlugin/RecenterFlags)
extern "C"  bool OVRPlugin_RecenterTrackingOrigin_m1757054544 (Il2CppObject * __this /* static, unused */, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRPlugin::set_ignoreVrFocus(System.Boolean)
extern "C"  void OVRPlugin_set_ignoreVrFocus_m402755335 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
