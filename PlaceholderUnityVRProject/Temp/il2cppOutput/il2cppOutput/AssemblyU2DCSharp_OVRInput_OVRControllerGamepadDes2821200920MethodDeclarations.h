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

// OVRInput/OVRControllerGamepadDesktop
struct OVRControllerGamepadDesktop_t2821200920;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OVRInput_Controller4215116408.h"

// System.Void OVRInput/OVRControllerGamepadDesktop::.ctor()
extern "C"  void OVRControllerGamepadDesktop__ctor_m4094027855 (OVRControllerGamepadDesktop_t2821200920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRInput/OVRControllerGamepadDesktop::Finalize()
extern "C"  void OVRControllerGamepadDesktop_Finalize_m774068929 (OVRControllerGamepadDesktop_t2821200920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRInput/Controller OVRInput/OVRControllerGamepadDesktop::Update()
extern "C"  int32_t OVRControllerGamepadDesktop_Update_m2916228671 (OVRControllerGamepadDesktop_t2821200920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRInput/OVRControllerGamepadDesktop::ConfigureButtonMap()
extern "C"  void OVRControllerGamepadDesktop_ConfigureButtonMap_m2812075417 (OVRControllerGamepadDesktop_t2821200920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRInput/OVRControllerGamepadDesktop::ConfigureTouchMap()
extern "C"  void OVRControllerGamepadDesktop_ConfigureTouchMap_m1227820060 (OVRControllerGamepadDesktop_t2821200920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRInput/OVRControllerGamepadDesktop::ConfigureNearTouchMap()
extern "C"  void OVRControllerGamepadDesktop_ConfigureNearTouchMap_m1533807014 (OVRControllerGamepadDesktop_t2821200920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRInput/OVRControllerGamepadDesktop::ConfigureAxis1DMap()
extern "C"  void OVRControllerGamepadDesktop_ConfigureAxis1DMap_m4038798393 (OVRControllerGamepadDesktop_t2821200920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRInput/OVRControllerGamepadDesktop::ConfigureAxis2DMap()
extern "C"  void OVRControllerGamepadDesktop_ConfigureAxis2DMap_m1596943156 (OVRControllerGamepadDesktop_t2821200920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRInput/OVRControllerGamepadDesktop::SetControllerVibration(System.Single,System.Single)
extern "C"  void OVRControllerGamepadDesktop_SetControllerVibration_m2859011927 (OVRControllerGamepadDesktop_t2821200920 * __this, float ___frequency0, float ___amplitude1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput/OVRControllerGamepadDesktop::OVR_GamepadController_Initialize()
extern "C"  bool OVRControllerGamepadDesktop_OVR_GamepadController_Initialize_m3847673115 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput/OVRControllerGamepadDesktop::OVR_GamepadController_Destroy()
extern "C"  bool OVRControllerGamepadDesktop_OVR_GamepadController_Destroy_m1012637229 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput/OVRControllerGamepadDesktop::OVR_GamepadController_Update()
extern "C"  bool OVRControllerGamepadDesktop_OVR_GamepadController_Update_m795411690 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRInput/OVRControllerGamepadDesktop::OVR_GamepadController_GetAxis(System.Int32)
extern "C"  float OVRControllerGamepadDesktop_OVR_GamepadController_GetAxis_m4165698861 (Il2CppObject * __this /* static, unused */, int32_t ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput/OVRControllerGamepadDesktop::OVR_GamepadController_GetButton(System.Int32)
extern "C"  bool OVRControllerGamepadDesktop_OVR_GamepadController_GetButton_m4184202978 (Il2CppObject * __this /* static, unused */, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput/OVRControllerGamepadDesktop::OVR_GamepadController_SetVibration(System.Int32,System.Single,System.Single)
extern "C"  bool OVRControllerGamepadDesktop_OVR_GamepadController_SetVibration_m3760906336 (Il2CppObject * __this /* static, unused */, int32_t ___node0, float ___strength1, float ___frequency2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
