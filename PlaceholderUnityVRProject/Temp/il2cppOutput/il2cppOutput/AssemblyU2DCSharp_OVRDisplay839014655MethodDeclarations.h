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

// OVRDisplay
struct OVRDisplay_t839014655;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_OVRDisplay_EyeRenderDesc168816214.h"
#include "UnityEngine_UnityEngine_VR_VRNode3038931238.h"
#include "AssemblyU2DCSharp_OVRDisplay_LatencyData1215445784.h"

// System.Void OVRDisplay::.ctor()
extern "C"  void OVRDisplay__ctor_m4275922540 (OVRDisplay_t839014655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDisplay::add_RecenteredPose(System.Action)
extern "C"  void OVRDisplay_add_RecenteredPose_m2717922129 (OVRDisplay_t839014655 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDisplay::remove_RecenteredPose(System.Action)
extern "C"  void OVRDisplay_remove_RecenteredPose_m3357289768 (OVRDisplay_t839014655 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDisplay::Update()
extern "C"  void OVRDisplay_Update_m216825731 (OVRDisplay_t839014655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDisplay::RecenterPose()
extern "C"  void OVRDisplay_RecenterPose_m2790791543 (OVRDisplay_t839014655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OVRDisplay::get_acceleration()
extern "C"  Vector3_t2243707580  OVRDisplay_get_acceleration_m4049311847 (OVRDisplay_t839014655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion OVRDisplay::get_angularAcceleration()
extern "C"  Quaternion_t4030073918  OVRDisplay_get_angularAcceleration_m3390907003 (OVRDisplay_t839014655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OVRDisplay::get_velocity()
extern "C"  Vector3_t2243707580  OVRDisplay_get_velocity_m2917748870 (OVRDisplay_t839014655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion OVRDisplay::get_angularVelocity()
extern "C"  Quaternion_t4030073918  OVRDisplay_get_angularVelocity_m2154983180 (OVRDisplay_t839014655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRDisplay/EyeRenderDesc OVRDisplay::GetEyeRenderDesc(UnityEngine.VR.VRNode)
extern "C"  EyeRenderDesc_t168816214  OVRDisplay_GetEyeRenderDesc_m1521783034 (OVRDisplay_t839014655 * __this, int32_t ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRDisplay/LatencyData OVRDisplay::get_latency()
extern "C"  LatencyData_t1215445784  OVRDisplay_get_latency_m1743079752 (OVRDisplay_t839014655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRDisplay::get_recommendedMSAALevel()
extern "C"  int32_t OVRDisplay_get_recommendedMSAALevel_m280882216 (OVRDisplay_t839014655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDisplay::UpdateTextures()
extern "C"  void OVRDisplay_UpdateTextures_m3203418447 (OVRDisplay_t839014655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDisplay::ConfigureEyeDesc(UnityEngine.VR.VRNode)
extern "C"  void OVRDisplay_ConfigureEyeDesc_m3129879619 (OVRDisplay_t839014655 * __this, int32_t ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
