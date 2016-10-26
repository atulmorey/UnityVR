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

// OVRHaptics/OVRHapticsOutput
struct OVRHapticsOutput_t2137832850;
// OVRHapticsClip
struct OVRHapticsClip_t1826051407;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OVRHapticsClip1826051407.h"

// System.Void OVRHaptics/OVRHapticsOutput::.ctor(System.UInt32)
extern "C"  void OVRHapticsOutput__ctor_m2340927475 (OVRHapticsOutput_t2137832850 * __this, uint32_t ___controller0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHaptics/OVRHapticsOutput::Process()
extern "C"  void OVRHapticsOutput_Process_m3975747512 (OVRHapticsOutput_t2137832850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHaptics/OVRHapticsOutput::Preempt(OVRHapticsClip)
extern "C"  void OVRHapticsOutput_Preempt_m3023433593 (OVRHapticsOutput_t2137832850 * __this, OVRHapticsClip_t1826051407 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHaptics/OVRHapticsOutput::Queue(OVRHapticsClip)
extern "C"  void OVRHapticsOutput_Queue_m1141118991 (OVRHapticsOutput_t2137832850 * __this, OVRHapticsClip_t1826051407 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHaptics/OVRHapticsOutput::Mix(OVRHapticsClip)
extern "C"  void OVRHapticsOutput_Mix_m2045881340 (OVRHapticsOutput_t2137832850 * __this, OVRHapticsClip_t1826051407 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHaptics/OVRHapticsOutput::Clear()
extern "C"  void OVRHapticsOutput_Clear_m3987132392 (OVRHapticsOutput_t2137832850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
