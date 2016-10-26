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

// UnityEngine.Cubemap
struct Cubemap_t3472944757;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat1386130234.h"
#include "UnityEngine_UnityEngine_CubemapFace1725775554.h"
#include "UnityEngine_UnityEngine_Cubemap3472944757.h"

// System.Void UnityEngine.Cubemap::.ctor(System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Cubemap__ctor_m1290092881 (Cubemap_t3472944757 * __this, int32_t ___size0, int32_t ___format1, bool ___mipmap2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Cubemap::GetPixels(UnityEngine.CubemapFace,System.Int32)
extern "C"  ColorU5BU5D_t672350442* Cubemap_GetPixels_m945542756 (Cubemap_t3472944757 * __this, int32_t ___face0, int32_t ___miplevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Cubemap::GetPixels(UnityEngine.CubemapFace)
extern "C"  ColorU5BU5D_t672350442* Cubemap_GetPixels_m698292385 (Cubemap_t3472944757 * __this, int32_t ___face0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cubemap::SetPixels(UnityEngine.Color[],UnityEngine.CubemapFace,System.Int32)
extern "C"  void Cubemap_SetPixels_m3483961619 (Cubemap_t3472944757 * __this, ColorU5BU5D_t672350442* ___colors0, int32_t ___face1, int32_t ___miplevel2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cubemap::SetPixels(UnityEngine.Color[],UnityEngine.CubemapFace)
extern "C"  void Cubemap_SetPixels_m2009700242 (Cubemap_t3472944757 * __this, ColorU5BU5D_t672350442* ___colors0, int32_t ___face1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cubemap::Internal_Create(UnityEngine.Cubemap,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Cubemap_Internal_Create_m512254015 (Il2CppObject * __this /* static, unused */, Cubemap_t3472944757 * ___mono0, int32_t ___size1, int32_t ___format2, bool ___mipmap3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cubemap::SmoothEdges(System.Int32)
extern "C"  void Cubemap_SmoothEdges_m2653094235 (Cubemap_t3472944757 * __this, int32_t ___smoothRegionWidthInPixels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Cubemap::SmoothEdges()
extern "C"  void Cubemap_SmoothEdges_m4112127586 (Cubemap_t3472944757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
