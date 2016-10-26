#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRPose
struct  OVRPose_t1690732076 
{
public:
	// UnityEngine.Vector3 OVRPose::position
	Vector3_t2243707580  ___position_0;
	// UnityEngine.Quaternion OVRPose::orientation
	Quaternion_t4030073918  ___orientation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(OVRPose_t1690732076, ___position_0)); }
	inline Vector3_t2243707580  get_position_0() const { return ___position_0; }
	inline Vector3_t2243707580 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t2243707580  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(OVRPose_t1690732076, ___orientation_1)); }
	inline Quaternion_t4030073918  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t4030073918 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t4030073918  value)
	{
		___orientation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: OVRPose
struct OVRPose_t1690732076_marshaled_pinvoke
{
	Vector3_t2243707580_marshaled_pinvoke ___position_0;
	Quaternion_t4030073918_marshaled_pinvoke ___orientation_1;
};
// Native definition for marshalling of: OVRPose
struct OVRPose_t1690732076_marshaled_com
{
	Vector3_t2243707580_marshaled_com ___position_0;
	Quaternion_t4030073918_marshaled_com ___orientation_1;
};
