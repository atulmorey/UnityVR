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


#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OVRPlugin_Bool1828096409.h"
#include "AssemblyU2DCSharp_OVRPlugin_HapticsDesc4236431224.h"
#include "AssemblyU2DCSharp_OVRPlugin_HapticsState2857739486.h"
#include "AssemblyU2DCSharp_OVRPlugin_HapticsBuffer845314955.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_OVRPlugin_Posef1127343044.h"
#include "AssemblyU2DCSharp_OVRPlugin_Vector3f2438854983.h"

// System.Void OVRPlugin/OVRP_1_6_0::.cctor()
extern "C"  void OVRP_1_6_0__cctor_m2315508640 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_6_0::ovrp_GetTrackingIPDEnabled()
extern "C"  int32_t OVRP_1_6_0_ovrp_GetTrackingIPDEnabled_m1724279978 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_6_0::ovrp_SetTrackingIPDEnabled(OVRPlugin/Bool)
extern "C"  int32_t OVRP_1_6_0_ovrp_SetTrackingIPDEnabled_m2031146071 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/HapticsDesc OVRPlugin/OVRP_1_6_0::ovrp_GetControllerHapticsDesc(System.UInt32)
extern "C"  HapticsDesc_t4236431224  OVRP_1_6_0_ovrp_GetControllerHapticsDesc_m474807633 (Il2CppObject * __this /* static, unused */, uint32_t ___controllerMask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/HapticsState OVRPlugin/OVRP_1_6_0::ovrp_GetControllerHapticsState(System.UInt32)
extern "C"  HapticsState_t2857739486  OVRP_1_6_0_ovrp_GetControllerHapticsState_m1366142745 (Il2CppObject * __this /* static, unused */, uint32_t ___controllerMask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_6_0::ovrp_SetControllerHaptics(System.UInt32,OVRPlugin/HapticsBuffer)
extern "C"  int32_t OVRP_1_6_0_ovrp_SetControllerHaptics_m1474336494 (Il2CppObject * __this /* static, unused */, uint32_t ___controllerMask0, HapticsBuffer_t845314955  ___hapticsBuffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_6_0::ovrp_SetOverlayQuad3(System.UInt32,System.IntPtr,System.IntPtr,System.IntPtr,OVRPlugin/Posef,OVRPlugin/Vector3f,System.Int32)
extern "C"  int32_t OVRP_1_6_0_ovrp_SetOverlayQuad3_m3903029071 (Il2CppObject * __this /* static, unused */, uint32_t ___flags0, IntPtr_t ___textureLeft1, IntPtr_t ___textureRight2, IntPtr_t ___device3, Posef_t1127343044  ___pose4, Vector3f_t2438854983  ___scale5, int32_t ___layerIndex6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin/OVRP_1_6_0::ovrp_GetEyeRecommendedResolutionScale()
extern "C"  float OVRP_1_6_0_ovrp_GetEyeRecommendedResolutionScale_m3752362367 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRPlugin/OVRP_1_6_0::ovrp_GetAppCpuStartToGpuEndTime()
extern "C"  float OVRP_1_6_0_ovrp_GetAppCpuStartToGpuEndTime_m4091661653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRPlugin/OVRP_1_6_0::ovrp_GetSystemRecommendedMSAALevel()
extern "C"  int32_t OVRP_1_6_0_ovrp_GetSystemRecommendedMSAALevel_m1206217213 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
