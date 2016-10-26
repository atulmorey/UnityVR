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

// System.Action`2<System.Single,System.Object>
struct Action_2_t3829512412;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`2<System.Single,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m1496729801_gshared (Action_2_t3829512412 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_2__ctor_m1496729801(__this, ___object0, ___method1, method) ((  void (*) (Action_2_t3829512412 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m1496729801_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`2<System.Single,System.Object>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m1959328278_gshared (Action_2_t3829512412 * __this, float ___arg10, Il2CppObject * ___arg21, const MethodInfo* method);
#define Action_2_Invoke_m1959328278(__this, ___arg10, ___arg21, method) ((  void (*) (Action_2_t3829512412 *, float, Il2CppObject *, const MethodInfo*))Action_2_Invoke_m1959328278_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Action`2<System.Single,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m752542301_gshared (Action_2_t3829512412 * __this, float ___arg10, Il2CppObject * ___arg21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Action_2_BeginInvoke_m752542301(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Action_2_t3829512412 *, float, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m752542301_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// System.Void System.Action`2<System.Single,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m995872291_gshared (Action_2_t3829512412 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_2_EndInvoke_m995872291(__this, ___result0, method) ((  void (*) (Action_2_t3829512412 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m995872291_gshared)(__this, ___result0, method)
