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

// OVRHaptics/OVRHapticsOutput/NativeBuffer
struct NativeBuffer_t277332966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void OVRHaptics/OVRHapticsOutput/NativeBuffer::.ctor(System.Int32)
extern "C"  void NativeBuffer__ctor_m419683008 (NativeBuffer_t277332966 * __this, int32_t ___numBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OVRHaptics/OVRHapticsOutput/NativeBuffer::GetPointer(System.Int32)
extern "C"  IntPtr_t NativeBuffer_GetPointer_m1630342520 (NativeBuffer_t277332966 * __this, int32_t ___byteOffset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OVRHaptics/OVRHapticsOutput/NativeBuffer::Finalize()
extern "C"  void NativeBuffer_Finalize_m284359519 (NativeBuffer_t277332966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
