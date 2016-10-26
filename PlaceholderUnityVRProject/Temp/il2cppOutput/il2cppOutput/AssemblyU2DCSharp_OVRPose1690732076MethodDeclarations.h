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
// OVRPose
struct OVRPose_t1690732076;
struct OVRPose_t1690732076_marshaled_pinvoke;
struct OVRPose_t1690732076_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OVRPose1690732076.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OVRPlugin_Posef1127343044.h"

// OVRPose OVRPose::get_identity()
extern "C"  OVRPose_t1690732076  OVRPose_get_identity_m2137347335 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPose::Equals(System.Object)
extern "C"  bool OVRPose_Equals_m3193073400 (OVRPose_t1690732076 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OVRPose::GetHashCode()
extern "C"  int32_t OVRPose_GetHashCode_m3630292460 (OVRPose_t1690732076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPose OVRPose::Inverse()
extern "C"  OVRPose_t1690732076  OVRPose_Inverse_m3651536174 (OVRPose_t1690732076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPose OVRPose::flipZ()
extern "C"  OVRPose_t1690732076  OVRPose_flipZ_m3483782961 (OVRPose_t1690732076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Posef OVRPose::ToPosef()
extern "C"  Posef_t1127343044  OVRPose_ToPosef_m2903163744 (OVRPose_t1690732076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPose::op_Equality(OVRPose,OVRPose)
extern "C"  bool OVRPose_op_Equality_m1559819969 (Il2CppObject * __this /* static, unused */, OVRPose_t1690732076  ___x0, OVRPose_t1690732076  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OVRPose::op_Inequality(OVRPose,OVRPose)
extern "C"  bool OVRPose_op_Inequality_m42617136 (Il2CppObject * __this /* static, unused */, OVRPose_t1690732076  ___x0, OVRPose_t1690732076  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPose OVRPose::op_Multiply(OVRPose,OVRPose)
extern "C"  OVRPose_t1690732076  OVRPose_op_Multiply_m2122847384 (Il2CppObject * __this /* static, unused */, OVRPose_t1690732076  ___lhs0, OVRPose_t1690732076  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct OVRPose_t1690732076;
struct OVRPose_t1690732076_marshaled_pinvoke;

extern "C" void OVRPose_t1690732076_marshal_pinvoke(const OVRPose_t1690732076& unmarshaled, OVRPose_t1690732076_marshaled_pinvoke& marshaled);
extern "C" void OVRPose_t1690732076_marshal_pinvoke_back(const OVRPose_t1690732076_marshaled_pinvoke& marshaled, OVRPose_t1690732076& unmarshaled);
extern "C" void OVRPose_t1690732076_marshal_pinvoke_cleanup(OVRPose_t1690732076_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct OVRPose_t1690732076;
struct OVRPose_t1690732076_marshaled_com;

extern "C" void OVRPose_t1690732076_marshal_com(const OVRPose_t1690732076& unmarshaled, OVRPose_t1690732076_marshaled_com& marshaled);
extern "C" void OVRPose_t1690732076_marshal_com_back(const OVRPose_t1690732076_marshaled_com& marshaled, OVRPose_t1690732076& unmarshaled);
extern "C" void OVRPose_t1690732076_marshal_com_cleanup(OVRPose_t1690732076_marshaled_com& marshaled);
