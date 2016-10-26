#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_OVRPlugin_Bool1828096409.h"
#include "AssemblyU2DCSharp_OVRPlugin_Vector3f2438854983.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRPlugin/BoundaryTestResult
struct  BoundaryTestResult_t830279820 
{
public:
	// OVRPlugin/Bool OVRPlugin/BoundaryTestResult::IsTriggering
	int32_t ___IsTriggering_0;
	// System.Single OVRPlugin/BoundaryTestResult::ClosestDistance
	float ___ClosestDistance_1;
	// OVRPlugin/Vector3f OVRPlugin/BoundaryTestResult::ClosestPoint
	Vector3f_t2438854983  ___ClosestPoint_2;
	// OVRPlugin/Vector3f OVRPlugin/BoundaryTestResult::ClosestPointNormal
	Vector3f_t2438854983  ___ClosestPointNormal_3;

public:
	inline static int32_t get_offset_of_IsTriggering_0() { return static_cast<int32_t>(offsetof(BoundaryTestResult_t830279820, ___IsTriggering_0)); }
	inline int32_t get_IsTriggering_0() const { return ___IsTriggering_0; }
	inline int32_t* get_address_of_IsTriggering_0() { return &___IsTriggering_0; }
	inline void set_IsTriggering_0(int32_t value)
	{
		___IsTriggering_0 = value;
	}

	inline static int32_t get_offset_of_ClosestDistance_1() { return static_cast<int32_t>(offsetof(BoundaryTestResult_t830279820, ___ClosestDistance_1)); }
	inline float get_ClosestDistance_1() const { return ___ClosestDistance_1; }
	inline float* get_address_of_ClosestDistance_1() { return &___ClosestDistance_1; }
	inline void set_ClosestDistance_1(float value)
	{
		___ClosestDistance_1 = value;
	}

	inline static int32_t get_offset_of_ClosestPoint_2() { return static_cast<int32_t>(offsetof(BoundaryTestResult_t830279820, ___ClosestPoint_2)); }
	inline Vector3f_t2438854983  get_ClosestPoint_2() const { return ___ClosestPoint_2; }
	inline Vector3f_t2438854983 * get_address_of_ClosestPoint_2() { return &___ClosestPoint_2; }
	inline void set_ClosestPoint_2(Vector3f_t2438854983  value)
	{
		___ClosestPoint_2 = value;
	}

	inline static int32_t get_offset_of_ClosestPointNormal_3() { return static_cast<int32_t>(offsetof(BoundaryTestResult_t830279820, ___ClosestPointNormal_3)); }
	inline Vector3f_t2438854983  get_ClosestPointNormal_3() const { return ___ClosestPointNormal_3; }
	inline Vector3f_t2438854983 * get_address_of_ClosestPointNormal_3() { return &___ClosestPointNormal_3; }
	inline void set_ClosestPointNormal_3(Vector3f_t2438854983  value)
	{
		___ClosestPointNormal_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: OVRPlugin/BoundaryTestResult
struct BoundaryTestResult_t830279820_marshaled_pinvoke
{
	int32_t ___IsTriggering_0;
	float ___ClosestDistance_1;
	Vector3f_t2438854983_marshaled_pinvoke ___ClosestPoint_2;
	Vector3f_t2438854983_marshaled_pinvoke ___ClosestPointNormal_3;
};
// Native definition for marshalling of: OVRPlugin/BoundaryTestResult
struct BoundaryTestResult_t830279820_marshaled_com
{
	int32_t ___IsTriggering_0;
	float ___ClosestDistance_1;
	Vector3f_t2438854983_marshaled_com ___ClosestPoint_2;
	Vector3f_t2438854983_marshaled_com ___ClosestPointNormal_3;
};
