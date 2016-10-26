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

// OVRHaptics/OVRHapticsChannel
struct OVRHapticsChannel_t3568542850;
// OVRHapticsClip
struct OVRHapticsClip_t1826051407;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OVRHapticsClip1826051407.h"

// System.Void OVRHaptics/OVRHapticsChannel::.ctor(System.UInt32)
extern "C"  void OVRHapticsChannel__ctor_m1093837971 (OVRHapticsChannel_t3568542850 * __this, uint32_t ___outputIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHaptics/OVRHapticsChannel::Preempt(OVRHapticsClip)
extern "C"  void OVRHapticsChannel_Preempt_m2098036017 (OVRHapticsChannel_t3568542850 * __this, OVRHapticsClip_t1826051407 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHaptics/OVRHapticsChannel::Queue(OVRHapticsClip)
extern "C"  void OVRHapticsChannel_Queue_m3859516495 (OVRHapticsChannel_t3568542850 * __this, OVRHapticsClip_t1826051407 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHaptics/OVRHapticsChannel::Mix(OVRHapticsClip)
extern "C"  void OVRHapticsChannel_Mix_m1285046976 (OVRHapticsChannel_t3568542850 * __this, OVRHapticsClip_t1826051407 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHaptics/OVRHapticsChannel::Clear()
extern "C"  void OVRHapticsChannel_Clear_m1226504100 (OVRHapticsChannel_t3568542850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
