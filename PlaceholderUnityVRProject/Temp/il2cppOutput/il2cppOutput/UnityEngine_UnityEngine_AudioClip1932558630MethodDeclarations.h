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

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.String
struct String_t;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3007145346;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t421863554;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbac3007145346.h"
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCal421863554.h"

// System.Single UnityEngine.AudioClip::get_length()
extern "C"  float AudioClip_get_length_m3881628918 (AudioClip_t1932558630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioClip::get_samples()
extern "C"  int32_t AudioClip_get_samples_m3690111759 (AudioClip_t1932558630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioClip::get_channels()
extern "C"  int32_t AudioClip_get_channels_m211770176 (AudioClip_t1932558630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioClip::get_frequency()
extern "C"  int32_t AudioClip_get_frequency_m237362468 (AudioClip_t1932558630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
extern "C"  bool AudioClip_GetData_m1645657273 (AudioClip_t1932558630 * __this, SingleU5BU5D_t577127397* ___data0, int32_t ___offsetSamples1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
extern "C"  bool AudioClip_SetData_m113185477 (AudioClip_t1932558630 * __this, SingleU5BU5D_t577127397* ___data0, int32_t ___offsetSamples1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  AudioClip_t1932558630 * AudioClip_Create_m1489162801 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.AudioClip/PCMReaderCallback,UnityEngine.AudioClip/PCMSetPositionCallback)
extern "C"  AudioClip_t1932558630 * AudioClip_Create_m897328947 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, PCMReaderCallback_t3007145346 * ___pcmreadercallback5, PCMSetPositionCallback_t421863554 * ___pcmsetpositioncallback6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C"  void AudioClip_InvokePCMReaderCallback_Internal_m1966286598 (AudioClip_t1932558630 * __this, SingleU5BU5D_t577127397* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C"  void AudioClip_InvokePCMSetPositionCallback_Internal_m2304858844 (AudioClip_t1932558630 * __this, int32_t ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioClip::Construct_Internal()
extern "C"  AudioClip_t1932558630 * AudioClip_Construct_Internal_m737383892 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::Init_Internal(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void AudioClip_Init_Internal_m4120731387 (AudioClip_t1932558630 * __this, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
