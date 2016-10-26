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
#include "AssemblyU2DCSharp_OVRInput_Controller4215116408.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_OVRInput_Button578609744.h"
#include "AssemblyU2DCSharp_OVRInput_RawButton1813930626.h"
#include "AssemblyU2DCSharp_OVRInput_Touch4062029053.h"
#include "AssemblyU2DCSharp_OVRInput_RawTouch3548184161.h"
#include "AssemblyU2DCSharp_OVRInput_NearTouch3624632473.h"
#include "AssemblyU2DCSharp_OVRInput_RawNearTouch2124337845.h"
#include "AssemblyU2DCSharp_OVRInput_Axis1D33126064.h"
#include "AssemblyU2DCSharp_OVRInput_RawAxis1D3491994914.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OVRInput_Axis2D3924808833.h"
#include "AssemblyU2DCSharp_OVRInput_RawAxis2D3491994917.h"

// System.Void OVRInput::.cctor()
extern "C"  void OVRInput__cctor_m2651183325 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRInput::Update()
extern "C"  void OVRInput_Update_m913491019 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRInput::FixedUpdate()
extern "C"  void OVRInput_FixedUpdate_m272077097 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetControllerOrientationTracked(OVRInput/Controller)
extern "C"  bool OVRInput_GetControllerOrientationTracked_m3813016674 (Il2CppObject * __this /* static, unused */, int32_t ___controllerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetControllerPositionTracked(OVRInput/Controller)
extern "C"  bool OVRInput_GetControllerPositionTracked_m4028576665 (Il2CppObject * __this /* static, unused */, int32_t ___controllerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OVRInput::GetLocalControllerPosition(OVRInput/Controller)
extern "C"  Vector3_t2243707580  OVRInput_GetLocalControllerPosition_m392514804 (Il2CppObject * __this /* static, unused */, int32_t ___controllerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OVRInput::GetLocalControllerVelocity(OVRInput/Controller)
extern "C"  Vector3_t2243707580  OVRInput_GetLocalControllerVelocity_m3819586200 (Il2CppObject * __this /* static, unused */, int32_t ___controllerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OVRInput::GetLocalControllerAcceleration(OVRInput/Controller)
extern "C"  Vector3_t2243707580  OVRInput_GetLocalControllerAcceleration_m934508943 (Il2CppObject * __this /* static, unused */, int32_t ___controllerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion OVRInput::GetLocalControllerRotation(OVRInput/Controller)
extern "C"  Quaternion_t4030073918  OVRInput_GetLocalControllerRotation_m4168455651 (Il2CppObject * __this /* static, unused */, int32_t ___controllerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion OVRInput::GetLocalControllerAngularVelocity(OVRInput/Controller)
extern "C"  Quaternion_t4030073918  OVRInput_GetLocalControllerAngularVelocity_m4158744386 (Il2CppObject * __this /* static, unused */, int32_t ___controllerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion OVRInput::GetLocalControllerAngularAcceleration(OVRInput/Controller)
extern "C"  Quaternion_t4030073918  OVRInput_GetLocalControllerAngularAcceleration_m2616746379 (Il2CppObject * __this /* static, unused */, int32_t ___controllerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::Get(OVRInput/Button,OVRInput/Controller)
extern "C"  bool OVRInput_Get_m2121562206 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::Get(OVRInput/RawButton,OVRInput/Controller)
extern "C"  bool OVRInput_Get_m3027142610 (Il2CppObject * __this /* static, unused */, int32_t ___rawMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetResolvedButton(OVRInput/Button,OVRInput/RawButton,OVRInput/Controller)
extern "C"  bool OVRInput_GetResolvedButton_m3294872314 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___rawMask1, int32_t ___controllerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetDown(OVRInput/Button,OVRInput/Controller)
extern "C"  bool OVRInput_GetDown_m3090268434 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetDown(OVRInput/RawButton,OVRInput/Controller)
extern "C"  bool OVRInput_GetDown_m3994005766 (Il2CppObject * __this /* static, unused */, int32_t ___rawMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetResolvedButtonDown(OVRInput/Button,OVRInput/RawButton,OVRInput/Controller)
extern "C"  bool OVRInput_GetResolvedButtonDown_m1529249926 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___rawMask1, int32_t ___controllerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetUp(OVRInput/Button,OVRInput/Controller)
extern "C"  bool OVRInput_GetUp_m4050071931 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetUp(OVRInput/RawButton,OVRInput/Controller)
extern "C"  bool OVRInput_GetUp_m1328850255 (Il2CppObject * __this /* static, unused */, int32_t ___rawMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetResolvedButtonUp(OVRInput/Button,OVRInput/RawButton,OVRInput/Controller)
extern "C"  bool OVRInput_GetResolvedButtonUp_m2533828413 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___rawMask1, int32_t ___controllerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::Get(OVRInput/Touch,OVRInput/Controller)
extern "C"  bool OVRInput_Get_m1042756685 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::Get(OVRInput/RawTouch,OVRInput/Controller)
extern "C"  bool OVRInput_Get_m3735945457 (Il2CppObject * __this /* static, unused */, int32_t ___rawMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetResolvedTouch(OVRInput/Touch,OVRInput/RawTouch,OVRInput/Controller)
extern "C"  bool OVRInput_GetResolvedTouch_m3347244187 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___rawMask1, int32_t ___controllerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetDown(OVRInput/Touch,OVRInput/Controller)
extern "C"  bool OVRInput_GetDown_m3601335555 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetDown(OVRInput/RawTouch,OVRInput/Controller)
extern "C"  bool OVRInput_GetDown_m448587515 (Il2CppObject * __this /* static, unused */, int32_t ___rawMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetResolvedTouchDown(OVRInput/Touch,OVRInput/RawTouch,OVRInput/Controller)
extern "C"  bool OVRInput_GetResolvedTouchDown_m2888666321 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___rawMask1, int32_t ___controllerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetUp(OVRInput/Touch,OVRInput/Controller)
extern "C"  bool OVRInput_GetUp_m4265084648 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetUp(OVRInput/RawTouch,OVRInput/Controller)
extern "C"  bool OVRInput_GetUp_m1173563022 (Il2CppObject * __this /* static, unused */, int32_t ___rawMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetResolvedTouchUp(OVRInput/Touch,OVRInput/RawTouch,OVRInput/Controller)
extern "C"  bool OVRInput_GetResolvedTouchUp_m4016928170 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___rawMask1, int32_t ___controllerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::Get(OVRInput/NearTouch,OVRInput/Controller)
extern "C"  bool OVRInput_Get_m1770012069 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::Get(OVRInput/RawNearTouch,OVRInput/Controller)
extern "C"  bool OVRInput_Get_m262708577 (Il2CppObject * __this /* static, unused */, int32_t ___rawMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetResolvedNearTouch(OVRInput/NearTouch,OVRInput/RawNearTouch,OVRInput/Controller)
extern "C"  bool OVRInput_GetResolvedNearTouch_m3480965367 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___rawMask1, int32_t ___controllerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetDown(OVRInput/NearTouch,OVRInput/Controller)
extern "C"  bool OVRInput_GetDown_m1824310415 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetDown(OVRInput/RawNearTouch,OVRInput/Controller)
extern "C"  bool OVRInput_GetDown_m1424635223 (Il2CppObject * __this /* static, unused */, int32_t ___rawMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetResolvedNearTouchDown(OVRInput/NearTouch,OVRInput/RawNearTouch,OVRInput/Controller)
extern "C"  bool OVRInput_GetResolvedNearTouchDown_m2124392769 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___rawMask1, int32_t ___controllerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetUp(OVRInput/NearTouch,OVRInput/Controller)
extern "C"  bool OVRInput_GetUp_m199299818 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetUp(OVRInput/RawNearTouch,OVRInput/Controller)
extern "C"  bool OVRInput_GetUp_m2623284324 (Il2CppObject * __this /* static, unused */, int32_t ___rawMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::GetResolvedNearTouchUp(OVRInput/NearTouch,OVRInput/RawNearTouch,OVRInput/Controller)
extern "C"  bool OVRInput_GetResolvedNearTouchUp_m3933984712 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___rawMask1, int32_t ___controllerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRInput::Get(OVRInput/Axis1D,OVRInput/Controller)
extern "C"  float OVRInput_Get_m593105698 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRInput::Get(OVRInput/RawAxis1D,OVRInput/Controller)
extern "C"  float OVRInput_Get_m1606342710 (Il2CppObject * __this /* static, unused */, int32_t ___rawMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRInput::GetResolvedAxis1D(OVRInput/Axis1D,OVRInput/RawAxis1D,OVRInput/Controller)
extern "C"  float OVRInput_GetResolvedAxis1D_m224747938 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___rawMask1, int32_t ___controllerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OVRInput::Get(OVRInput/Axis2D,OVRInput/Controller)
extern "C"  Vector2_t2243707579  OVRInput_Get_m3512971886 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OVRInput::Get(OVRInput/RawAxis2D,OVRInput/Controller)
extern "C"  Vector2_t2243707579  OVRInput_Get_m385850936 (Il2CppObject * __this /* static, unused */, int32_t ___rawMask0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OVRInput::GetResolvedAxis2D(OVRInput/Axis2D,OVRInput/RawAxis2D,OVRInput/Controller)
extern "C"  Vector2_t2243707579  OVRInput_GetResolvedAxis2D_m49560136 (Il2CppObject * __this /* static, unused */, int32_t ___virtualMask0, int32_t ___rawMask1, int32_t ___controllerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRInput/Controller OVRInput::GetConnectedControllers()
extern "C"  int32_t OVRInput_GetConnectedControllers_m2566002097 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRInput/Controller OVRInput::GetActiveController()
extern "C"  int32_t OVRInput_GetActiveController_m1175476361 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRInput::SetControllerVibration(System.Single,System.Single,OVRInput/Controller)
extern "C"  void OVRInput_SetControllerVibration_m696286140 (Il2CppObject * __this /* static, unused */, float ___frequency0, float ___amplitude1, int32_t ___controllerMask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OVRInput::CalculateAbsMax(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OVRInput_CalculateAbsMax_m340072293 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___a0, Vector2_t2243707579  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRInput::CalculateAbsMax(System.Single,System.Single)
extern "C"  float OVRInput_CalculateAbsMax_m3271291484 (Il2CppObject * __this /* static, unused */, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OVRInput::CalculateDeadzone(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  OVRInput_CalculateDeadzone_m3422274874 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___a0, float ___deadzone1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OVRInput::CalculateDeadzone(System.Single,System.Single)
extern "C"  float OVRInput_CalculateDeadzone_m2519097210 (Il2CppObject * __this /* static, unused */, float ___a0, float ___deadzone1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRInput::ShouldResolveController(OVRInput/Controller,OVRInput/Controller)
extern "C"  bool OVRInput_ShouldResolveController_m3588325819 (Il2CppObject * __this /* static, unused */, int32_t ___controllerType0, int32_t ___controllerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
