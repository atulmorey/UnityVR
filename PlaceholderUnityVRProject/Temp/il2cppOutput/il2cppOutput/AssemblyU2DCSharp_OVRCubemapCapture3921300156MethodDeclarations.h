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

// OVRCubemapCapture
struct OVRCubemapCapture_t3921300156;
// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Cubemap
struct Cubemap_t3472944757;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Cubemap3472944757.h"

// System.Void OVRCubemapCapture::.ctor()
extern "C"  void OVRCubemapCapture__ctor_m2636505465 (OVRCubemapCapture_t3921300156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCubemapCapture::Update()
extern "C"  void OVRCubemapCapture_Update_m1797718214 (OVRCubemapCapture_t3921300156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCubemapCapture::TriggerCubemapCapture(UnityEngine.Vector3,System.Int32,System.String)
extern "C"  void OVRCubemapCapture_TriggerCubemapCapture_m739996010 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___capturePos0, int32_t ___cubemapSize1, String_t* ___pathName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRCubemapCapture::RenderIntoCubemap(UnityEngine.Camera,UnityEngine.Cubemap)
extern "C"  void OVRCubemapCapture_RenderIntoCubemap_m3824152096 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___ownerCamera0, Cubemap_t3472944757 * ___outCubemap1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRCubemapCapture::SaveCubemapCapture(UnityEngine.Cubemap,System.String)
extern "C"  bool OVRCubemapCapture_SaveCubemapCapture_m610350793 (Il2CppObject * __this /* static, unused */, Cubemap_t3472944757 * ___cubemap0, String_t* ___pathName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
