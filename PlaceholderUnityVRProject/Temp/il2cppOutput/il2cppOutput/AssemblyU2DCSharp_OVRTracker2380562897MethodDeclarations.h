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

// OVRTracker
struct OVRTracker_t2380562897;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OVRTracker_Frustum783054090.h"
#include "AssemblyU2DCSharp_OVRPose1690732076.h"

// System.Void OVRTracker::.ctor()
extern "C"  void OVRTracker__ctor_m2269188374 (OVRTracker_t2380562897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRTracker::get_isPresent()
extern "C"  bool OVRTracker_get_isPresent_m255824028 (OVRTracker_t2380562897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRTracker::get_isPositionTracked()
extern "C"  bool OVRTracker_get_isPositionTracked_m1666796852 (OVRTracker_t2380562897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRTracker::get_isEnabled()
extern "C"  bool OVRTracker_get_isEnabled_m1119453454 (OVRTracker_t2380562897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRTracker::set_isEnabled(System.Boolean)
extern "C"  void OVRTracker_set_isEnabled_m2455116657 (OVRTracker_t2380562897 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRTracker::get_count()
extern "C"  int32_t OVRTracker_get_count_m939919132 (OVRTracker_t2380562897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRTracker/Frustum OVRTracker::GetFrustum(System.Int32)
extern "C"  Frustum_t783054090  OVRTracker_GetFrustum_m2301159422 (OVRTracker_t2380562897 * __this, int32_t ___tracker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPose OVRTracker::GetPose(System.Int32)
extern "C"  OVRPose_t1690732076  OVRTracker_GetPose_m1838508459 (OVRTracker_t2380562897 * __this, int32_t ___tracker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRTracker::GetPoseValid(System.Int32)
extern "C"  bool OVRTracker_GetPoseValid_m187683114 (OVRTracker_t2380562897 * __this, int32_t ___tracker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRTracker::GetPresent(System.Int32)
extern "C"  bool OVRTracker_GetPresent_m2263432976 (OVRTracker_t2380562897 * __this, int32_t ___tracker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
