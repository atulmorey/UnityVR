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

// CurvedUI.CurvedUIInputFieldCaret
struct CurvedUIInputFieldCaret_t2612599768;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2054899105;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2054899105.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void CurvedUI.CurvedUIInputFieldCaret::.ctor()
extern "C"  void CurvedUIInputFieldCaret__ctor_m1851906134 (CurvedUIInputFieldCaret_t2612599768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIInputFieldCaret::Awake()
extern "C"  void CurvedUIInputFieldCaret_Awake_m2089511353 (CurvedUIInputFieldCaret_t2612599768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIInputFieldCaret::Update()
extern "C"  void CurvedUIInputFieldCaret_Update_m3301377399 (CurvedUIInputFieldCaret_t2612599768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIInputFieldCaret::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C"  void CurvedUIInputFieldCaret_OnSelect_m2853748803 (CurvedUIInputFieldCaret_t2612599768 * __this, BaseEventData_t2054899105 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIInputFieldCaret::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C"  void CurvedUIInputFieldCaret_OnDeselect_m1523554308 (CurvedUIInputFieldCaret_t2612599768 * __this, BaseEventData_t2054899105 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CurvedUI.CurvedUIInputFieldCaret::CaretBlinker()
extern "C"  Il2CppObject * CurvedUIInputFieldCaret_CaretBlinker_m974190076 (CurvedUIInputFieldCaret_t2612599768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIInputFieldCaret::CreateCaret()
extern "C"  void CurvedUIInputFieldCaret_CreateCaret_m1279529307 (CurvedUIInputFieldCaret_t2612599768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIInputFieldCaret::UpdateCaret()
extern "C"  void CurvedUIInputFieldCaret_UpdateCaret_m1832028398 (CurvedUIInputFieldCaret_t2612599768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 CurvedUI.CurvedUIInputFieldCaret::GetLocalPositionInText(System.Int32)
extern "C"  Vector2_t4282066565  CurvedUIInputFieldCaret_GetLocalPositionInText_m1883189738 (CurvedUIInputFieldCaret_t2612599768 * __this, int32_t ___charNo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color CurvedUI.CurvedUIInputFieldCaret::get_CaretColor()
extern "C"  Color_t4194546905  CurvedUIInputFieldCaret_get_CaretColor_m4230535774 (CurvedUIInputFieldCaret_t2612599768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIInputFieldCaret::set_CaretColor(UnityEngine.Color)
extern "C"  void CurvedUIInputFieldCaret_set_CaretColor_m3367802171 (CurvedUIInputFieldCaret_t2612599768 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color CurvedUI.CurvedUIInputFieldCaret::get_SelectionColor()
extern "C"  Color_t4194546905  CurvedUIInputFieldCaret_get_SelectionColor_m1101430197 (CurvedUIInputFieldCaret_t2612599768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIInputFieldCaret::set_SelectionColor(UnityEngine.Color)
extern "C"  void CurvedUIInputFieldCaret_set_SelectionColor_m2964396356 (CurvedUIInputFieldCaret_t2612599768 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CurvedUI.CurvedUIInputFieldCaret::get_CaretBlinkRate()
extern "C"  float CurvedUIInputFieldCaret_get_CaretBlinkRate_m1723359452 (CurvedUIInputFieldCaret_t2612599768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIInputFieldCaret::set_CaretBlinkRate(System.Single)
extern "C"  void CurvedUIInputFieldCaret_set_CaretBlinkRate_m1861498535 (CurvedUIInputFieldCaret_t2612599768 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
