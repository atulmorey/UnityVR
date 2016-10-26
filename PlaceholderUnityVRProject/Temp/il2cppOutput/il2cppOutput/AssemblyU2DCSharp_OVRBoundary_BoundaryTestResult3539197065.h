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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRBoundary/BoundaryTestResult
struct  BoundaryTestResult_t3539197065 
{
public:
	// System.Boolean OVRBoundary/BoundaryTestResult::IsTriggering
	bool ___IsTriggering_0;
	// System.Single OVRBoundary/BoundaryTestResult::ClosestDistance
	float ___ClosestDistance_1;
	// UnityEngine.Vector3 OVRBoundary/BoundaryTestResult::ClosestPoint
	Vector3_t2243707580  ___ClosestPoint_2;
	// UnityEngine.Vector3 OVRBoundary/BoundaryTestResult::ClosestPointNormal
	Vector3_t2243707580  ___ClosestPointNormal_3;

public:
	inline static int32_t get_offset_of_IsTriggering_0() { return static_cast<int32_t>(offsetof(BoundaryTestResult_t3539197065, ___IsTriggering_0)); }
	inline bool get_IsTriggering_0() const { return ___IsTriggering_0; }
	inline bool* get_address_of_IsTriggering_0() { return &___IsTriggering_0; }
	inline void set_IsTriggering_0(bool value)
	{
		___IsTriggering_0 = value;
	}

	inline static int32_t get_offset_of_ClosestDistance_1() { return static_cast<int32_t>(offsetof(BoundaryTestResult_t3539197065, ___ClosestDistance_1)); }
	inline float get_ClosestDistance_1() const { return ___ClosestDistance_1; }
	inline float* get_address_of_ClosestDistance_1() { return &___ClosestDistance_1; }
	inline void set_ClosestDistance_1(float value)
	{
		___ClosestDistance_1 = value;
	}

	inline static int32_t get_offset_of_ClosestPoint_2() { return static_cast<int32_t>(offsetof(BoundaryTestResult_t3539197065, ___ClosestPoint_2)); }
	inline Vector3_t2243707580  get_ClosestPoint_2() const { return ___ClosestPoint_2; }
	inline Vector3_t2243707580 * get_address_of_ClosestPoint_2() { return &___ClosestPoint_2; }
	inline void set_ClosestPoint_2(Vector3_t2243707580  value)
	{
		___ClosestPoint_2 = value;
	}

	inline static int32_t get_offset_of_ClosestPointNormal_3() { return static_cast<int32_t>(offsetof(BoundaryTestResult_t3539197065, ___ClosestPointNormal_3)); }
	inline Vector3_t2243707580  get_ClosestPointNormal_3() const { return ___ClosestPointNormal_3; }
	inline Vector3_t2243707580 * get_address_of_ClosestPointNormal_3() { return &___ClosestPointNormal_3; }
	inline void set_ClosestPointNormal_3(Vector3_t2243707580  value)
	{
		___ClosestPointNormal_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: OVRBoundary/BoundaryTestResult
struct BoundaryTestResult_t3539197065_marshaled_pinvoke
{
	int32_t ___IsTriggering_0;
	float ___ClosestDistance_1;
	Vector3_t2243707580_marshaled_pinvoke ___ClosestPoint_2;
	Vector3_t2243707580_marshaled_pinvoke ___ClosestPointNormal_3;
};
// Native definition for marshalling of: OVRBoundary/BoundaryTestResult
struct BoundaryTestResult_t3539197065_marshaled_com
{
	int32_t ___IsTriggering_0;
	float ___ClosestDistance_1;
	Vector3_t2243707580_marshaled_com ___ClosestPoint_2;
	Vector3_t2243707580_marshaled_com ___ClosestPointNormal_3;
};
