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

// OVRManager
struct OVRManager_t1723122752;
// System.Action
struct Action_t3226471752;
// OVRDisplay
struct OVRDisplay_t839014655;
// OVRTracker
struct OVRTracker_t2380562897;
// OVRBoundary
struct OVRBoundary_t3841068229;
// OVRProfile
struct OVRProfile_t1138729578;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_OVRManager1723122752.h"
#include "AssemblyU2DCSharp_OVRDisplay839014655.h"
#include "AssemblyU2DCSharp_OVRTracker2380562897.h"
#include "AssemblyU2DCSharp_OVRBoundary3841068229.h"
#include "AssemblyU2DCSharp_OVRManager_TrackingOrigin2291850242.h"

// System.Void OVRManager::.ctor()
extern "C"  void OVRManager__ctor_m2432094259 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::.cctor()
extern "C"  void OVRManager__cctor_m1934956978 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::add_HMDAcquired(System.Action)
extern "C"  void OVRManager_add_HMDAcquired_m1287931469 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::remove_HMDAcquired(System.Action)
extern "C"  void OVRManager_remove_HMDAcquired_m777565352 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::add_HMDLost(System.Action)
extern "C"  void OVRManager_add_HMDLost_m3390226325 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::remove_HMDLost(System.Action)
extern "C"  void OVRManager_remove_HMDLost_m2248585634 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::add_HMDMounted(System.Action)
extern "C"  void OVRManager_add_HMDMounted_m4120252221 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::remove_HMDMounted(System.Action)
extern "C"  void OVRManager_remove_HMDMounted_m2706411160 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::add_HMDUnmounted(System.Action)
extern "C"  void OVRManager_add_HMDUnmounted_m815921644 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::remove_HMDUnmounted(System.Action)
extern "C"  void OVRManager_remove_HMDUnmounted_m2928868321 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::add_VrFocusAcquired(System.Action)
extern "C"  void OVRManager_add_VrFocusAcquired_m3389433514 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::remove_VrFocusAcquired(System.Action)
extern "C"  void OVRManager_remove_VrFocusAcquired_m4126582231 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::add_VrFocusLost(System.Action)
extern "C"  void OVRManager_add_VrFocusLost_m1457956248 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::remove_VrFocusLost(System.Action)
extern "C"  void OVRManager_remove_VrFocusLost_m2778344707 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::add_AudioOutChanged(System.Action)
extern "C"  void OVRManager_add_AudioOutChanged_m2745483016 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::remove_AudioOutChanged(System.Action)
extern "C"  void OVRManager_remove_AudioOutChanged_m2593021549 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::add_AudioInChanged(System.Action)
extern "C"  void OVRManager_add_AudioInChanged_m1381946135 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::remove_AudioInChanged(System.Action)
extern "C"  void OVRManager_remove_AudioInChanged_m3378596960 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::add_TrackingAcquired(System.Action)
extern "C"  void OVRManager_add_TrackingAcquired_m132646795 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::remove_TrackingAcquired(System.Action)
extern "C"  void OVRManager_remove_TrackingAcquired_m2970231786 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::add_TrackingLost(System.Action)
extern "C"  void OVRManager_add_TrackingLost_m3566595583 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::remove_TrackingLost(System.Action)
extern "C"  void OVRManager_remove_TrackingLost_m2520455400 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::add_HSWDismissed(System.Action)
extern "C"  void OVRManager_add_HSWDismissed_m1485604899 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::remove_HSWDismissed(System.Action)
extern "C"  void OVRManager_remove_HSWDismissed_m3514358112 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRManager OVRManager::get_instance()
extern "C"  OVRManager_t1723122752 * OVRManager_get_instance_m2313929810 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_instance(OVRManager)
extern "C"  void OVRManager_set_instance_m45880803 (Il2CppObject * __this /* static, unused */, OVRManager_t1723122752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRDisplay OVRManager::get_display()
extern "C"  OVRDisplay_t839014655 * OVRManager_get_display_m68352462 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_display(OVRDisplay)
extern "C"  void OVRManager_set_display_m1898543501 (Il2CppObject * __this /* static, unused */, OVRDisplay_t839014655 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRTracker OVRManager::get_tracker()
extern "C"  OVRTracker_t2380562897 * OVRManager_get_tracker_m626395854 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_tracker(OVRTracker)
extern "C"  void OVRManager_set_tracker_m3114095809 (Il2CppObject * __this /* static, unused */, OVRTracker_t2380562897 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRBoundary OVRManager::get_boundary()
extern "C"  OVRBoundary_t3841068229 * OVRManager_get_boundary_m3503151876 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_boundary(OVRBoundary)
extern "C"  void OVRManager_set_boundary_m3283250313 (Il2CppObject * __this /* static, unused */, OVRBoundary_t3841068229 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRProfile OVRManager::get_profile()
extern "C"  OVRProfile_t1138729578 * OVRManager_get_profile_m3884130254 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRManager::get_paused()
extern "C"  bool OVRManager_get_paused_m3691078854 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_paused(System.Boolean)
extern "C"  void OVRManager_set_paused_m1918971731 (OVRManager_t1723122752 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRManager::get_isHmdPresent()
extern "C"  bool OVRManager_get_isHmdPresent_m247140488 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_isHmdPresent(System.Boolean)
extern "C"  void OVRManager_set_isHmdPresent_m1483848125 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OVRManager::get_audioOutId()
extern "C"  String_t* OVRManager_get_audioOutId_m3959557500 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OVRManager::get_audioInId()
extern "C"  String_t* OVRManager_get_audioInId_m2307532779 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRManager::get_hasVrFocus()
extern "C"  bool OVRManager_get_hasVrFocus_m3555604208 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_hasVrFocus(System.Boolean)
extern "C"  void OVRManager_set_hasVrFocus_m4193551939 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRManager::get_isHSWDisplayed()
extern "C"  bool OVRManager_get_isHSWDisplayed_m2543433487 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::DismissHSWDisplay()
extern "C"  void OVRManager_DismissHSWDisplay_m4278672603 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRManager::get_chromatic()
extern "C"  bool OVRManager_get_chromatic_m3716852028 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_chromatic(System.Boolean)
extern "C"  void OVRManager_set_chromatic_m626220121 (OVRManager_t1723122752 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRManager::get_monoscopic()
extern "C"  bool OVRManager_get_monoscopic_m1692685498 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_monoscopic(System.Boolean)
extern "C"  void OVRManager_set_monoscopic_m2926375291 (OVRManager_t1723122752 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRManager::get_vsyncCount()
extern "C"  int32_t OVRManager_get_vsyncCount_m1179246372 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_vsyncCount(System.Int32)
extern "C"  void OVRManager_set_vsyncCount_m1554299549 (OVRManager_t1723122752 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRManager::get_batteryLevel()
extern "C"  float OVRManager_get_batteryLevel_m4001110971 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRManager::get_batteryTemperature()
extern "C"  float OVRManager_get_batteryTemperature_m2019657337 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRManager::get_batteryStatus()
extern "C"  int32_t OVRManager_get_batteryStatus_m3713518777 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRManager::get_volumeLevel()
extern "C"  float OVRManager_get_volumeLevel_m1558682394 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRManager::get_cpuLevel()
extern "C"  int32_t OVRManager_get_cpuLevel_m2068668356 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_cpuLevel(System.Int32)
extern "C"  void OVRManager_set_cpuLevel_m4083481783 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRManager::get_gpuLevel()
extern "C"  int32_t OVRManager_get_gpuLevel_m506188336 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_gpuLevel(System.Int32)
extern "C"  void OVRManager_set_gpuLevel_m3152375219 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRManager::get_isPowerSavingActive()
extern "C"  bool OVRManager_get_isPowerSavingActive_m561087911 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRManager/TrackingOrigin OVRManager::get_trackingOriginType()
extern "C"  int32_t OVRManager_get_trackingOriginType_m2208637834 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_trackingOriginType(OVRManager/TrackingOrigin)
extern "C"  void OVRManager_set_trackingOriginType_m2801313897 (OVRManager_t1723122752 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRManager::get_isSupportedPlatform()
extern "C"  bool OVRManager_get_isSupportedPlatform_m2866235013 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_isSupportedPlatform(System.Boolean)
extern "C"  void OVRManager_set_isSupportedPlatform_m416009528 (OVRManager_t1723122752 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRManager::get_isUserPresent()
extern "C"  bool OVRManager_get_isUserPresent_m25566296 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::set_isUserPresent(System.Boolean)
extern "C"  void OVRManager_set_isUserPresent_m1510543625 (OVRManager_t1723122752 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::Awake()
extern "C"  void OVRManager_Awake_m541452080 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::Update()
extern "C"  void OVRManager_Update_m1887809410 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::LateUpdate()
extern "C"  void OVRManager_LateUpdate_m3489005654 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::FixedUpdate()
extern "C"  void OVRManager_FixedUpdate_m159311228 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::ReturnToLauncher()
extern "C"  void OVRManager_ReturnToLauncher_m3362831512 (OVRManager_t1723122752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::PlatformUIConfirmQuit()
extern "C"  void OVRManager_PlatformUIConfirmQuit_m1887265559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRManager::PlatformUIGlobalMenu()
extern "C"  void OVRManager_PlatformUIGlobalMenu_m2243008838 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
