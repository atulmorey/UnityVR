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

// EventManager
struct EventManager_t1907836883;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t594794173;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Events_UnityAction594794173.h"

// System.Void EventManager::.ctor()
extern "C"  void EventManager__ctor_m3403204648 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventManager EventManager::get_instance()
extern "C"  EventManager_t1907836883 * EventManager_get_instance_m1155482276 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::Init()
extern "C"  void EventManager_Init_m61317420 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::StartListening(System.String,UnityEngine.Events.UnityAction)
extern "C"  void EventManager_StartListening_m2675908396 (Il2CppObject * __this /* static, unused */, String_t* ___eventName0, UnityAction_t594794173 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::StopListening(System.String,UnityEngine.Events.UnityAction)
extern "C"  void EventManager_StopListening_m3679211126 (Il2CppObject * __this /* static, unused */, String_t* ___eventName0, UnityAction_t594794173 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::TriggerEvent(System.String)
extern "C"  void EventManager_TriggerEvent_m2693077860 (Il2CppObject * __this /* static, unused */, String_t* ___eventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
