﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Action`2<UnityEngine.Color,System.Object>
struct Action_2_t3924735457;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`2<UnityEngine.Color,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m3421075014_gshared (Action_2_t3924735457 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_2__ctor_m3421075014(__this, ___object0, ___method1, method) ((  void (*) (Action_2_t3924735457 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m3421075014_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`2<UnityEngine.Color,System.Object>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m3667536589_gshared (Action_2_t3924735457 * __this, Color_t2020392075  ___arg10, Il2CppObject * ___arg21, const MethodInfo* method);
#define Action_2_Invoke_m3667536589(__this, ___arg10, ___arg21, method) ((  void (*) (Action_2_t3924735457 *, Color_t2020392075 , Il2CppObject *, const MethodInfo*))Action_2_Invoke_m3667536589_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Action`2<UnityEngine.Color,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m1825963988_gshared (Action_2_t3924735457 * __this, Color_t2020392075  ___arg10, Il2CppObject * ___arg21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Action_2_BeginInvoke_m1825963988(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Action_2_t3924735457 *, Color_t2020392075 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m1825963988_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// System.Void System.Action`2<UnityEngine.Color,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m548757196_gshared (Action_2_t3924735457 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_2_EndInvoke_m548757196(__this, ___result0, method) ((  void (*) (Action_2_t3924735457 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m548757196_gshared)(__this, ___result0, method)
