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

// CurvedUI.ViveInputEvent
struct ViveInputEvent_t1708517642;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_CurvedUI_ViveInputArgs1722838707.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void CurvedUI.ViveInputEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void ViveInputEvent__ctor_m807333742 (ViveInputEvent_t1708517642 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.ViveInputEvent::Invoke(System.Object,CurvedUI.ViveInputArgs)
extern "C"  void ViveInputEvent_Invoke_m3340320570 (ViveInputEvent_t1708517642 * __this, Il2CppObject * ___sender0, ViveInputArgs_t1722838707  ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult CurvedUI.ViveInputEvent::BeginInvoke(System.Object,CurvedUI.ViveInputArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ViveInputEvent_BeginInvoke_m34434121 (ViveInputEvent_t1708517642 * __this, Il2CppObject * ___sender0, ViveInputArgs_t1722838707  ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurvedUI.ViveInputEvent::EndInvoke(System.IAsyncResult)
extern "C"  void ViveInputEvent_EndInvoke_m943671422 (ViveInputEvent_t1708517642 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
