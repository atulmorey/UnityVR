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

// System.Object
struct Il2CppObject;
// NormalSolver/VertexKey
struct VertexKey_t1434446374;
struct VertexKey_t1434446374_marshaled_pinvoke;
struct VertexKey_t1434446374_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_NormalSolver_VertexKey1434446374.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void NormalSolver/VertexKey::.ctor(UnityEngine.Vector3)
extern "C"  void VertexKey__ctor_m4045151364 (VertexKey_t1434446374 * __this, Vector3_t4282066566  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NormalSolver/VertexKey::Equals(System.Object)
extern "C"  bool VertexKey_Equals_m4292359218 (VertexKey_t1434446374 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NormalSolver/VertexKey::GetHashCode()
extern "C"  int32_t VertexKey_GetHashCode_m576941270 (VertexKey_t1434446374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct VertexKey_t1434446374;
struct VertexKey_t1434446374_marshaled_pinvoke;

extern "C" void VertexKey_t1434446374_marshal_pinvoke(const VertexKey_t1434446374& unmarshaled, VertexKey_t1434446374_marshaled_pinvoke& marshaled);
extern "C" void VertexKey_t1434446374_marshal_pinvoke_back(const VertexKey_t1434446374_marshaled_pinvoke& marshaled, VertexKey_t1434446374& unmarshaled);
extern "C" void VertexKey_t1434446374_marshal_pinvoke_cleanup(VertexKey_t1434446374_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct VertexKey_t1434446374;
struct VertexKey_t1434446374_marshaled_com;

extern "C" void VertexKey_t1434446374_marshal_com(const VertexKey_t1434446374& unmarshaled, VertexKey_t1434446374_marshaled_com& marshaled);
extern "C" void VertexKey_t1434446374_marshal_com_back(const VertexKey_t1434446374_marshaled_com& marshaled, VertexKey_t1434446374& unmarshaled);
extern "C" void VertexKey_t1434446374_marshal_com_cleanup(VertexKey_t1434446374_marshaled_com& marshaled);
