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

// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Boolean CurvedUI.CalculationMethods::AlmostEqual(UnityEngine.Vector3,UnityEngine.Vector3,System.Double)
extern "C"  bool CalculationMethods_AlmostEqual_m3805879027 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___a0, Vector3_t4282066566  ___b1, double ___accuracy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CurvedUI.CalculationMethods::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float CalculationMethods_Remap_m2629890735 (Il2CppObject * __this /* static, unused */, float ___value0, float ___from11, float ___to12, float ___from23, float ___to24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CurvedUI.CalculationMethods::Remap(System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  float CalculationMethods_Remap_m2667602037 (Il2CppObject * __this /* static, unused */, int32_t ___value0, float ___from11, float ___to12, float ___from23, float ___to24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double CurvedUI.CalculationMethods::Remap(System.Double,System.Double,System.Double,System.Double,System.Double)
extern "C"  double CalculationMethods_Remap_m3292535915 (Il2CppObject * __this /* static, unused */, double ___value0, double ___from11, double ___to12, double ___from23, double ___to24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CurvedUI.CalculationMethods::Clamp(System.Single,System.Single,System.Single)
extern "C"  float CalculationMethods_Clamp_m2162677107 (Il2CppObject * __this /* static, unused */, float ___value0, float ___min1, float ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CurvedUI.CalculationMethods::Clamp(System.Int32,System.Int32,System.Int32)
extern "C"  float CalculationMethods_Clamp_m1206009587 (Il2CppObject * __this /* static, unused */, int32_t ___value0, int32_t ___min1, int32_t ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CurvedUI.CalculationMethods::ToInt(System.Single)
extern "C"  int32_t CalculationMethods_ToInt_m1830268686 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CurvedUI.CalculationMethods::FloorToInt(System.Single)
extern "C"  int32_t CalculationMethods_FloorToInt_m1533986506 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CurvedUI.CalculationMethods::CeilToInt(System.Single)
extern "C"  int32_t CalculationMethods_CeilToInt_m3524107187 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CurvedUI.CalculationMethods::ModifyX(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t4282066566  CalculationMethods_ModifyX_m2388527691 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___trans0, float ___newVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CurvedUI.CalculationMethods::ModifyY(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t4282066566  CalculationMethods_ModifyY_m43860650 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___trans0, float ___newVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CurvedUI.CalculationMethods::ModifyZ(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t4282066566  CalculationMethods_ModifyZ_m1994160905 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___trans0, float ___newVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 CurvedUI.CalculationMethods::ModifyVectorX(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t4282066565  CalculationMethods_ModifyVectorX_m2724078990 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___trans0, float ___newVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 CurvedUI.CalculationMethods::ModifyVectorY(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t4282066565  CalculationMethods_ModifyVectorY_m379411949 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___trans0, float ___newVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.CalculationMethods::ResetTransform(UnityEngine.Transform)
extern "C"  void CalculationMethods_ResetTransform_m2078952217 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
