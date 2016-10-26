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

// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OVRPose1690732076.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharp_OVRPlugin_Posef1127343044.h"
#include "AssemblyU2DCSharp_OVRTracker_Frustum783054090.h"
#include "AssemblyU2DCSharp_OVRPlugin_Frustumf2908953643.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_OVRPlugin_Colorf3829319448.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_OVRPlugin_Vector3f2438854983.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_OVRPlugin_Quatf4010427498.h"

// OVRPose OVRExtensions::ToTrackingSpacePose(UnityEngine.Transform)
extern "C"  OVRPose_t1690732076  OVRExtensions_ToTrackingSpacePose_m488256341 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___transform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPose OVRExtensions::ToHeadSpacePose(UnityEngine.Transform)
extern "C"  OVRPose_t1690732076  OVRExtensions_ToHeadSpacePose_m3913816450 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___transform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPose OVRExtensions::ToOVRPose(UnityEngine.Transform,System.Boolean)
extern "C"  OVRPose_t1690732076  OVRExtensions_ToOVRPose_m438763292 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, bool ___isLocal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRExtensions::FromOVRPose(UnityEngine.Transform,OVRPose,System.Boolean)
extern "C"  void OVRExtensions_FromOVRPose_m2201026438 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, OVRPose_t1690732076  ___pose1, bool ___isLocal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPose OVRExtensions::ToOVRPose(OVRPlugin/Posef)
extern "C"  OVRPose_t1690732076  OVRExtensions_ToOVRPose_m144643894 (Il2CppObject * __this /* static, unused */, Posef_t1127343044  ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRTracker/Frustum OVRExtensions::ToFrustum(OVRPlugin/Frustumf)
extern "C"  Frustum_t783054090  OVRExtensions_ToFrustum_m2798885123 (Il2CppObject * __this /* static, unused */, Frustumf_t2908953643  ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color OVRExtensions::FromColorf(OVRPlugin/Colorf)
extern "C"  Color_t2020392075  OVRExtensions_FromColorf_m841402518 (Il2CppObject * __this /* static, unused */, Colorf_t3829319448  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Colorf OVRExtensions::ToColorf(UnityEngine.Color)
extern "C"  Colorf_t3829319448  OVRExtensions_ToColorf_m2289938605 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OVRExtensions::FromVector3f(OVRPlugin/Vector3f)
extern "C"  Vector3_t2243707580  OVRExtensions_FromVector3f_m2103989839 (Il2CppObject * __this /* static, unused */, Vector3f_t2438854983  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OVRExtensions::FromFlippedZVector3f(OVRPlugin/Vector3f)
extern "C"  Vector3_t2243707580  OVRExtensions_FromFlippedZVector3f_m3946671051 (Il2CppObject * __this /* static, unused */, Vector3f_t2438854983  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Vector3f OVRExtensions::ToVector3f(UnityEngine.Vector3)
extern "C"  Vector3f_t2438854983  OVRExtensions_ToVector3f_m733781300 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Vector3f OVRExtensions::ToFlippedZVector3f(UnityEngine.Vector3)
extern "C"  Vector3f_t2438854983  OVRExtensions_ToFlippedZVector3f_m781250958 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion OVRExtensions::FromQuatf(OVRPlugin/Quatf)
extern "C"  Quaternion_t4030073918  OVRExtensions_FromQuatf_m3546962909 (Il2CppObject * __this /* static, unused */, Quatf_t4010427498  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Quatf OVRExtensions::ToQuatf(UnityEngine.Quaternion)
extern "C"  Quatf_t4010427498  OVRExtensions_ToQuatf_m3241398372 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
