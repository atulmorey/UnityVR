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

// CurvedUI.CurvedUIRaycaster
struct CurvedUIRaycaster_t1830691867;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t835879620;
// UnityEngine.Collider
struct Collider_t2939674232;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void CurvedUI.CurvedUIRaycaster::.ctor()
extern "C"  void CurvedUIRaycaster__ctor_m1169218931 (CurvedUIRaycaster_t1830691867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIRaycaster::Awake()
extern "C"  void CurvedUIRaycaster_Awake_m1406824150 (CurvedUIRaycaster_t1830691867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIRaycaster::Start()
extern "C"  void CurvedUIRaycaster_Start_m116356723 (CurvedUIRaycaster_t1830691867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void CurvedUIRaycaster_Raycast_m1484105833 (CurvedUIRaycaster_t1830691867 * __this, PointerEventData_t1848751023 * ___eventData0, List_1_t835879620 * ___resultAppendList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CurvedUI.CurvedUIRaycaster::RaycastToCyllinderCanvas(UnityEngine.Ray,UnityEngine.Vector2&,System.Boolean,System.Int32)
extern "C"  bool CurvedUIRaycaster_RaycastToCyllinderCanvas_m1134245698 (CurvedUIRaycaster_t1830691867 * __this, Ray_t3134616544  ___ray3D0, Vector2_t4282066565 * ___o_canvasPos1, bool ___OutputInCanvasSpace2, int32_t ___myLayerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CurvedUI.CurvedUIRaycaster::RaycastToCyllinderVerticalCanvas(UnityEngine.Ray,UnityEngine.Vector2&,System.Boolean,System.Int32)
extern "C"  bool CurvedUIRaycaster_RaycastToCyllinderVerticalCanvas_m2208311000 (CurvedUIRaycaster_t1830691867 * __this, Ray_t3134616544  ___ray3D0, Vector2_t4282066565 * ___o_canvasPos1, bool ___OutputInCanvasSpace2, int32_t ___myLayerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CurvedUI.CurvedUIRaycaster::RaycastToRingCanvas(UnityEngine.Ray,UnityEngine.Vector2&,System.Boolean,System.Int32)
extern "C"  bool CurvedUIRaycaster_RaycastToRingCanvas_m4202341852 (CurvedUIRaycaster_t1830691867 * __this, Ray_t3134616544  ___ray3D0, Vector2_t4282066565 * ___o_canvasPos1, bool ___OutputInCanvasSpace2, int32_t ___myLayerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CurvedUI.CurvedUIRaycaster::RaycastToSphereCanvas(UnityEngine.Ray,UnityEngine.Vector2&,System.Boolean,System.Int32)
extern "C"  bool CurvedUIRaycaster_RaycastToSphereCanvas_m3806969465 (CurvedUIRaycaster_t1830691867 * __this, Ray_t3134616544  ___ray3D0, Vector2_t4282066565 * ___o_canvasPos1, bool ___OutputInCanvasSpace2, int32_t ___myLayerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider CurvedUI.CurvedUIRaycaster::CreateCollider()
extern "C"  Collider_t2939674232 * CurvedUIRaycaster_CreateCollider_m760601587 (CurvedUIRaycaster_t1830691867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh CurvedUI.CurvedUIRaycaster::CreateCyllinderColliderMesh(System.Boolean)
extern "C"  Mesh_t4241756145 * CurvedUIRaycaster_CreateCyllinderColliderMesh_m4100225834 (CurvedUIRaycaster_t1830691867 * __this, bool ___vertical0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh CurvedUI.CurvedUIRaycaster::CreateSphereColliderMesh()
extern "C"  Mesh_t4241756145 * CurvedUIRaycaster_CreateSphereColliderMesh_m201188692 (CurvedUIRaycaster_t1830691867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CurvedUI.CurvedUIRaycaster::AngleSigned(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float CurvedUIRaycaster_AngleSigned_m2225668267 (CurvedUIRaycaster_t1830691867 * __this, Vector3_t4282066566  ___v10, Vector3_t4282066566  ___v21, Vector3_t4282066566  ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CurvedUI.CurvedUIRaycaster::ShouldStartDrag(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean)
extern "C"  bool CurvedUIRaycaster_ShouldStartDrag_m3787918442 (CurvedUIRaycaster_t1830691867 * __this, Vector2_t4282066565  ___pressPos0, Vector2_t4282066565  ___currentPos1, float ___threshold2, bool ___useDragThreshold3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIRaycaster::RebuildCollider()
extern "C"  void CurvedUIRaycaster_RebuildCollider_m1588940800 (CurvedUIRaycaster_t1830691867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::GetObjectsUnderPointer()
extern "C"  List_1_t747900261 * CurvedUIRaycaster_GetObjectsUnderPointer_m3975708111 (CurvedUIRaycaster_t1830691867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CurvedUIRaycaster::ModifyQuad(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Int32,UnityEngine.Vector2)
extern "C"  void CurvedUIRaycaster_ModifyQuad_m69832988 (CurvedUIRaycaster_t1830691867 * __this, List_1_t1355284822 * ___verts0, int32_t ___vertexIndex1, Vector2_t4282066565  ___requiredSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CurvedUI.CurvedUIRaycaster::TesselateQuad(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single,System.Single)
extern "C"  Vector3_t4282066566  CurvedUIRaycaster_TesselateQuad_m471324127 (CurvedUIRaycaster_t1830691867 * __this, List_1_t1355284822 * ___quad0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
