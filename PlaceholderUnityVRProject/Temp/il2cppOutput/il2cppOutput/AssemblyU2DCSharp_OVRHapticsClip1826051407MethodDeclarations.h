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

// OVRHapticsClip
struct OVRHapticsClip_t1826051407;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OVRHapticsClip1826051407.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"

// System.Void OVRHapticsClip::.ctor()
extern "C"  void OVRHapticsClip__ctor_m4173360868 (OVRHapticsClip_t1826051407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHapticsClip::.ctor(System.Int32)
extern "C"  void OVRHapticsClip__ctor_m1530495023 (OVRHapticsClip_t1826051407 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHapticsClip::.ctor(System.Byte[],System.Int32)
extern "C"  void OVRHapticsClip__ctor_m535514638 (OVRHapticsClip_t1826051407 * __this, ByteU5BU5D_t3397334013* ___samples0, int32_t ___samplesCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHapticsClip::.ctor(OVRHapticsClip,OVRHapticsClip)
extern "C"  void OVRHapticsClip__ctor_m255465984 (OVRHapticsClip_t1826051407 * __this, OVRHapticsClip_t1826051407 * ___a0, OVRHapticsClip_t1826051407 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHapticsClip::.ctor(UnityEngine.AudioClip,System.Int32)
extern "C"  void OVRHapticsClip__ctor_m73179252 (OVRHapticsClip_t1826051407 * __this, AudioClip_t1932558630 * ___audioClip0, int32_t ___channel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRHapticsClip::get_Count()
extern "C"  int32_t OVRHapticsClip_get_Count_m1222634790 (OVRHapticsClip_t1826051407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHapticsClip::set_Count(System.Int32)
extern "C"  void OVRHapticsClip_set_Count_m209809761 (OVRHapticsClip_t1826051407 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRHapticsClip::get_Capacity()
extern "C"  int32_t OVRHapticsClip_get_Capacity_m1509747097 (OVRHapticsClip_t1826051407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHapticsClip::set_Capacity(System.Int32)
extern "C"  void OVRHapticsClip_set_Capacity_m1774995506 (OVRHapticsClip_t1826051407 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] OVRHapticsClip::get_Samples()
extern "C"  ByteU5BU5D_t3397334013* OVRHapticsClip_get_Samples_m3094334884 (OVRHapticsClip_t1826051407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHapticsClip::set_Samples(System.Byte[])
extern "C"  void OVRHapticsClip_set_Samples_m2060298197 (OVRHapticsClip_t1826051407 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHapticsClip::WriteSample(System.Byte)
extern "C"  void OVRHapticsClip_WriteSample_m3780565852 (OVRHapticsClip_t1826051407 * __this, uint8_t ___sample0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHapticsClip::Reset()
extern "C"  void OVRHapticsClip_Reset_m3104279971 (OVRHapticsClip_t1826051407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHapticsClip::InitializeFromAudioFloatTrack(System.Single[],System.Double,System.Int32,System.Int32)
extern "C"  void OVRHapticsClip_InitializeFromAudioFloatTrack_m1217787548 (OVRHapticsClip_t1826051407 * __this, SingleU5BU5D_t577127397* ___sourceData0, double ___sourceFrequency1, int32_t ___sourceChannelCount2, int32_t ___sourceChannel3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
