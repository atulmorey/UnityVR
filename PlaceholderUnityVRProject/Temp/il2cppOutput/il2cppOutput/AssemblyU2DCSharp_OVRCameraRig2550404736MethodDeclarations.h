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

// OVRCameraRig
struct OVRCameraRig_t2550404736;
// System.Action`1<OVRCameraRig>
struct Action_1_t2352204118;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_VR_VRNode3038931238.h"
#include "AssemblyU2DCSharp_OVRPlugin_Node4200749027.h"

// System.Void OVRCameraRig::.ctor()
extern "C"  void OVRCameraRig__ctor_m1152293333 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::add_UpdatedAnchors(System.Action`1<OVRCameraRig>)
extern "C"  void OVRCameraRig_add_UpdatedAnchors_m3148038592 (OVRCameraRig_t2550404736 * __this, Action_1_t2352204118 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::remove_UpdatedAnchors(System.Action`1<OVRCameraRig>)
extern "C"  void OVRCameraRig_remove_UpdatedAnchors_m2313810715 (OVRCameraRig_t2550404736 * __this, Action_1_t2352204118 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera OVRCameraRig::get_leftEyeCamera()
extern "C"  Camera_t189460977 * OVRCameraRig_get_leftEyeCamera_m986478100 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera OVRCameraRig::get_rightEyeCamera()
extern "C"  Camera_t189460977 * OVRCameraRig_get_rightEyeCamera_m1448707985 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform OVRCameraRig::get_trackingSpace()
extern "C"  Transform_t3275118058 * OVRCameraRig_get_trackingSpace_m4100490055 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::set_trackingSpace(UnityEngine.Transform)
extern "C"  void OVRCameraRig_set_trackingSpace_m3352587310 (OVRCameraRig_t2550404736 * __this, Transform_t3275118058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform OVRCameraRig::get_leftEyeAnchor()
extern "C"  Transform_t3275118058 * OVRCameraRig_get_leftEyeAnchor_m4037430051 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::set_leftEyeAnchor(UnityEngine.Transform)
extern "C"  void OVRCameraRig_set_leftEyeAnchor_m3044641912 (OVRCameraRig_t2550404736 * __this, Transform_t3275118058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform OVRCameraRig::get_centerEyeAnchor()
extern "C"  Transform_t3275118058 * OVRCameraRig_get_centerEyeAnchor_m4166630443 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::set_centerEyeAnchor(UnityEngine.Transform)
extern "C"  void OVRCameraRig_set_centerEyeAnchor_m2262047348 (OVRCameraRig_t2550404736 * __this, Transform_t3275118058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform OVRCameraRig::get_rightEyeAnchor()
extern "C"  Transform_t3275118058 * OVRCameraRig_get_rightEyeAnchor_m3318384626 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::set_rightEyeAnchor(UnityEngine.Transform)
extern "C"  void OVRCameraRig_set_rightEyeAnchor_m2865713595 (OVRCameraRig_t2550404736 * __this, Transform_t3275118058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform OVRCameraRig::get_leftHandAnchor()
extern "C"  Transform_t3275118058 * OVRCameraRig_get_leftHandAnchor_m3010085269 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::set_leftHandAnchor(UnityEngine.Transform)
extern "C"  void OVRCameraRig_set_leftHandAnchor_m2896791832 (OVRCameraRig_t2550404736 * __this, Transform_t3275118058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform OVRCameraRig::get_rightHandAnchor()
extern "C"  Transform_t3275118058 * OVRCameraRig_get_rightHandAnchor_m3885057048 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::set_rightHandAnchor(UnityEngine.Transform)
extern "C"  void OVRCameraRig_set_rightHandAnchor_m1438527393 (OVRCameraRig_t2550404736 * __this, Transform_t3275118058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform OVRCameraRig::get_trackerAnchor()
extern "C"  Transform_t3275118058 * OVRCameraRig_get_trackerAnchor_m3378709685 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::set_trackerAnchor(UnityEngine.Transform)
extern "C"  void OVRCameraRig_set_trackerAnchor_m1241070298 (OVRCameraRig_t2550404736 * __this, Transform_t3275118058 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::Awake()
extern "C"  void OVRCameraRig_Awake_m3035790880 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::Start()
extern "C"  void OVRCameraRig_Start_m1502440973 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::Update()
extern "C"  void OVRCameraRig_Update_m395016878 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::UpdateAnchors()
extern "C"  void OVRCameraRig_UpdateAnchors_m3647839902 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCameraRig::EnsureGameObjectIntegrity()
extern "C"  void OVRCameraRig_EnsureGameObjectIntegrity_m766553107 (OVRCameraRig_t2550404736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform OVRCameraRig::ConfigureRootAnchor(System.String)
extern "C"  Transform_t3275118058 * OVRCameraRig_ConfigureRootAnchor_m43914938 (OVRCameraRig_t2550404736 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform OVRCameraRig::ConfigureEyeAnchor(UnityEngine.Transform,UnityEngine.VR.VRNode)
extern "C"  Transform_t3275118058 * OVRCameraRig_ConfigureEyeAnchor_m876783611 (OVRCameraRig_t2550404736 * __this, Transform_t3275118058 * ___root0, int32_t ___eye1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform OVRCameraRig::ConfigureHandAnchor(UnityEngine.Transform,OVRPlugin/Node)
extern "C"  Transform_t3275118058 * OVRCameraRig_ConfigureHandAnchor_m52480029 (OVRCameraRig_t2550404736 * __this, Transform_t3275118058 * ___root0, int32_t ___hand1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform OVRCameraRig::ConfigureTrackerAnchor(UnityEngine.Transform)
extern "C"  Transform_t3275118058 * OVRCameraRig_ConfigureTrackerAnchor_m2782236027 (OVRCameraRig_t2550404736 * __this, Transform_t3275118058 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
