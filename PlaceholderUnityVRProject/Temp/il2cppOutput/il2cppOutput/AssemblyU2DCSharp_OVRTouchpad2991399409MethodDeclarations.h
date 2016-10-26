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

// System.EventHandler
struct EventHandler_t277755526;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler277755526.h"
#include "AssemblyU2DCSharp_OVRTouchpad_TouchState2029813918.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void OVRTouchpad::.cctor()
extern "C"  void OVRTouchpad__cctor_m2631969939 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRTouchpad::add_TouchHandler(System.EventHandler)
extern "C"  void OVRTouchpad_add_TouchHandler_m111820752 (Il2CppObject * __this /* static, unused */, EventHandler_t277755526 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRTouchpad::remove_TouchHandler(System.EventHandler)
extern "C"  void OVRTouchpad_remove_TouchHandler_m361428851 (Il2CppObject * __this /* static, unused */, EventHandler_t277755526 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRTouchpad::Create()
extern "C"  void OVRTouchpad_Create_m542229490 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRTouchpad::Update()
extern "C"  void OVRTouchpad_Update_m2244970773 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRTouchpad::OnDisable()
extern "C"  void OVRTouchpad_OnDisable_m791937265 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRTouchpad::HandleInput(OVRTouchpad/TouchState,UnityEngine.Vector2&)
extern "C"  void OVRTouchpad_HandleInput_m2979880274 (Il2CppObject * __this /* static, unused */, int32_t ___state0, Vector2_t2243707579 * ___move1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRTouchpad::HandleInputMouse(UnityEngine.Vector3&)
extern "C"  void OVRTouchpad_HandleInputMouse_m6507308 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___move0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
