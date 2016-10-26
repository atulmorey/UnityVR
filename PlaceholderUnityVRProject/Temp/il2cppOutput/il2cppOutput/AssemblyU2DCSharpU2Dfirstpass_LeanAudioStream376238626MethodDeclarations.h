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

// LeanAudioStream
struct LeanAudioStream_t376238626;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"

// System.Void LeanAudioStream::.ctor(System.Single[])
extern "C"  void LeanAudioStream__ctor_m2738484256 (LeanAudioStream_t376238626 * __this, SingleU5BU5D_t577127397* ___audioArr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanAudioStream::OnAudioRead(System.Single[])
extern "C"  void LeanAudioStream_OnAudioRead_m1342508327 (LeanAudioStream_t376238626 * __this, SingleU5BU5D_t577127397* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeanAudioStream::OnAudioSetPosition(System.Int32)
extern "C"  void LeanAudioStream_OnAudioSetPosition_m898168626 (LeanAudioStream_t376238626 * __this, int32_t ___newPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
