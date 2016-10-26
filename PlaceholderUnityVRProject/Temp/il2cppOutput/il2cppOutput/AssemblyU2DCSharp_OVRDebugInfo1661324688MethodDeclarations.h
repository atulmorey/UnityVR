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

// OVRDebugInfo
struct OVRDebugInfo_t1661324688;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OVRDebugInfo::.ctor()
extern "C"  void OVRDebugInfo__ctor_m3180937679 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::Awake()
extern "C"  void OVRDebugInfo_Awake_m776129116 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::Update()
extern "C"  void OVRDebugInfo_Update_m1777777006 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::OnDestroy()
extern "C"  void OVRDebugInfo_OnDestroy_m2200426230 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::InitUIComponents()
extern "C"  void OVRDebugInfo_InitUIComponents_m131215537 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::UpdateVariable()
extern "C"  void OVRDebugInfo_UpdateVariable_m4091468974 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::UpdateStrings()
extern "C"  void OVRDebugInfo_UpdateStrings_m4111773750 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::RiftPresentGUI(UnityEngine.GameObject)
extern "C"  void OVRDebugInfo_RiftPresentGUI_m458602640 (OVRDebugInfo_t1661324688 * __this, GameObject_t1756533147 * ___guiMainOBj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::UpdateDeviceDetection()
extern "C"  void OVRDebugInfo_UpdateDeviceDetection_m274411189 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject OVRDebugInfo::VariableObjectManager(UnityEngine.GameObject,System.String,System.Single,System.String,System.Int32)
extern "C"  GameObject_t1756533147 * OVRDebugInfo_VariableObjectManager_m1710422218 (OVRDebugInfo_t1661324688 * __this, GameObject_t1756533147 * ___gameObject0, String_t* ___name1, float ___posY2, String_t* ___str3, int32_t ___fontSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject OVRDebugInfo::ComponentComposition(UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * OVRDebugInfo_ComponentComposition_m3416035243 (OVRDebugInfo_t1661324688 * __this, GameObject_t1756533147 * ___GO0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::UpdateIPD()
extern "C"  void OVRDebugInfo_UpdateIPD_m577991111 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::UpdateEyeHeightOffset()
extern "C"  void OVRDebugInfo_UpdateEyeHeightOffset_m1614004941 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::UpdateEyeDepthOffset()
extern "C"  void OVRDebugInfo_UpdateEyeDepthOffset_m1165467895 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::UpdateFOV()
extern "C"  void OVRDebugInfo_UpdateFOV_m2358890737 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::UpdateResolutionEyeTexture()
extern "C"  void OVRDebugInfo_UpdateResolutionEyeTexture_m2455323180 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::UpdateLatencyValues()
extern "C"  void OVRDebugInfo_UpdateLatencyValues_m2980760180 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRDebugInfo::UpdateFPS()
extern "C"  void OVRDebugInfo_UpdateFPS_m577997231 (OVRDebugInfo_t1661324688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
