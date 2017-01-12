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

// CurvedUI.CurvedUIVertexEffect
struct CurvedUIVertexEffect_t1126288310;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t3377436606;
// UnityEngine.Font
struct Font_t4241557075;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1317283468;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1796391381;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper3377436606.h"
#include "UnityEngine_UnityEngine_Font4241557075.h"
#include "UnityEngine_UnityEngine_UIVertex4244065212.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void CurvedUI.CurvedUIVertexEffect::.ctor()
extern "C"  void CurvedUIVertexEffect__ctor_m1119075592 (CurvedUIVertexEffect_t1126288310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyMesh(UnityEngine.UI.VertexHelper)
extern "C"  void CurvedUIVertexEffect_ModifyMesh_m2627974650 (CurvedUIVertexEffect_t1126288310 * __this, VertexHelper_t3377436606 * ___vh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::OnEnable()
extern "C"  void CurvedUIVertexEffect_OnEnable_m2916388222 (CurvedUIVertexEffect_t1126288310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::OnDisable()
extern "C"  void CurvedUIVertexEffect_OnDisable_m654658927 (CurvedUIVertexEffect_t1126288310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::TesselationRequiredCallback()
extern "C"  void CurvedUIVertexEffect_TesselationRequiredCallback_m1969943623 (CurvedUIVertexEffect_t1126288310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::FontTextureRebuiltCallback(UnityEngine.Font)
extern "C"  void CurvedUIVertexEffect_FontTextureRebuiltCallback_m4267265754 (CurvedUIVertexEffect_t1126288310 * __this, Font_t4241557075 * ___fontie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::Update()
extern "C"  void CurvedUIVertexEffect_Update_m2058467077 (CurvedUIVertexEffect_t1126288310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::CheckTextFontMaterial()
extern "C"  void CurvedUIVertexEffect_CheckTextFontMaterial_m1658613489 (CurvedUIVertexEffect_t1126288310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::FindParentSettings()
extern "C"  void CurvedUIVertexEffect_FindParentSettings_m106933122 (CurvedUIVertexEffect_t1126288310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyVerts(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void CurvedUIVertexEffect_ModifyVerts_m1312399475 (CurvedUIVertexEffect_t1126288310 * __this, List_1_t1317283468 * ___verts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UIVertex CurvedUI.CurvedUIVertexEffect::CurveVertex(UnityEngine.UIVertex,System.Single,System.Single,UnityEngine.Vector2)
extern "C"  UIVertex_t4244065212  CurvedUIVertexEffect_CurveVertex_m2766336182 (CurvedUIVertexEffect_t1126288310 * __this, UIVertex_t4244065212  ___input0, float ___cylinder_angle1, float ___radius2, Vector2_t4282066565  ___canvasSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::TesselateGeometry(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void CurvedUIVertexEffect_TesselateGeometry_m1668856911 (CurvedUIVertexEffect_t1126288310 * __this, List_1_t1317283468 * ___verts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyQuad(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Int32,UnityEngine.Vector2)
extern "C"  void CurvedUIVertexEffect_ModifyQuad_m3530634343 (CurvedUIVertexEffect_t1126288310 * __this, List_1_t1317283468 * ___verts0, int32_t ___vertexIndex1, Vector2_t4282066565  ___requiredSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::TrisToQuads(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void CurvedUIVertexEffect_TrisToQuads_m788492114 (CurvedUIVertexEffect_t1126288310 * __this, List_1_t1317283468 * ___verts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UIVertex CurvedUI.CurvedUIVertexEffect::TesselateQuad(UnityEngine.UIVertex[],System.Single,System.Single)
extern "C"  UIVertex_t4244065212  CurvedUIVertexEffect_TesselateQuad_m1791613998 (CurvedUIVertexEffect_t1126288310 * __this, UIVertexU5BU5D_t1796391381* ___quad0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::SetDirty()
extern "C"  void CurvedUIVertexEffect_SetDirty_m3148880460 (CurvedUIVertexEffect_t1126288310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CurvedUI.CurvedUIVertexEffect::get_TesselationRequired()
extern "C"  bool CurvedUIVertexEffect_get_TesselationRequired_m2691508781 (CurvedUIVertexEffect_t1126288310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::set_TesselationRequired(System.Boolean)
extern "C"  void CurvedUIVertexEffect_set_TesselationRequired_m2160995388 (CurvedUIVertexEffect_t1126288310 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CurvedUI.CurvedUIVertexEffect::get_CurvingRequired()
extern "C"  bool CurvedUIVertexEffect_get_CurvingRequired_m550091868 (CurvedUIVertexEffect_t1126288310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIVertexEffect::set_CurvingRequired(System.Boolean)
extern "C"  void CurvedUIVertexEffect_set_CurvingRequired_m233909291 (CurvedUIVertexEffect_t1126288310 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
