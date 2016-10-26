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

// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat3360518468.h"
#include "UnityEngine_UnityEngine_RenderTextureReadWrite2842868372.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Rendering_TextureDimension499276241.h"

// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
extern "C"  void RenderTexture__ctor_m1475925789 (RenderTexture_t2666733923 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___readWrite4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void RenderTexture__ctor_m4075605457 (RenderTexture_t2666733923 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_Internal_CreateRenderTexture_m1679754911 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___rt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
extern "C"  int32_t RenderTexture_Internal_GetWidth_m2317917654 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)
extern "C"  void RenderTexture_Internal_SetWidth_m989760279 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___mono0, int32_t ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C"  int32_t RenderTexture_Internal_GetHeight_m2780941261 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)
extern "C"  void RenderTexture_Internal_SetHeight_m2900429544 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___mono0, int32_t ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)
extern "C"  void RenderTexture_Internal_SetSRGBReadWrite_m286621198 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___mono0, bool ___sRGB1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_width()
extern "C"  int32_t RenderTexture_get_width_m1471807677 (RenderTexture_t2666733923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_width(System.Int32)
extern "C"  void RenderTexture_set_width_m592588466 (RenderTexture_t2666733923 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_height()
extern "C"  int32_t RenderTexture_get_height_m1108175848 (RenderTexture_t2666733923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_height(System.Int32)
extern "C"  void RenderTexture_set_height_m1787187 (RenderTexture_t2666733923 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
extern "C"  void RenderTexture_set_depth_m3365909665 (RenderTexture_t2666733923 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C"  int32_t RenderTexture_get_format_m2563201870 (RenderTexture_t2666733923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
extern "C"  void RenderTexture_set_format_m2928390123 (RenderTexture_t2666733923 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetDimension(UnityEngine.RenderTexture,UnityEngine.Rendering.TextureDimension)
extern "C"  void RenderTexture_Internal_SetDimension_m3962148488 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___rt0, int32_t ___dim1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_dimension(UnityEngine.Rendering.TextureDimension)
extern "C"  void RenderTexture_set_dimension_m2785329069 (RenderTexture_t2666733923 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
extern "C"  void RenderTexture_set_antiAliasing_m1838970818 (RenderTexture_t2666733923 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::Create()
extern "C"  bool RenderTexture_Create_m1259588374 (RenderTexture_t2666733923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RenderTexture::INTERNAL_CALL_Create(UnityEngine.RenderTexture)
extern "C"  bool RenderTexture_INTERNAL_CALL_Create_m4215814471 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
extern "C"  RenderTexture_t2666733923 * RenderTexture_get_active_m561615752 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_set_active_m55464043 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
