#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRTracker/Frustum
struct  Frustum_t783054090 
{
public:
	// System.Single OVRTracker/Frustum::nearZ
	float ___nearZ_0;
	// System.Single OVRTracker/Frustum::farZ
	float ___farZ_1;
	// UnityEngine.Vector2 OVRTracker/Frustum::fov
	Vector2_t2243707579  ___fov_2;

public:
	inline static int32_t get_offset_of_nearZ_0() { return static_cast<int32_t>(offsetof(Frustum_t783054090, ___nearZ_0)); }
	inline float get_nearZ_0() const { return ___nearZ_0; }
	inline float* get_address_of_nearZ_0() { return &___nearZ_0; }
	inline void set_nearZ_0(float value)
	{
		___nearZ_0 = value;
	}

	inline static int32_t get_offset_of_farZ_1() { return static_cast<int32_t>(offsetof(Frustum_t783054090, ___farZ_1)); }
	inline float get_farZ_1() const { return ___farZ_1; }
	inline float* get_address_of_farZ_1() { return &___farZ_1; }
	inline void set_farZ_1(float value)
	{
		___farZ_1 = value;
	}

	inline static int32_t get_offset_of_fov_2() { return static_cast<int32_t>(offsetof(Frustum_t783054090, ___fov_2)); }
	inline Vector2_t2243707579  get_fov_2() const { return ___fov_2; }
	inline Vector2_t2243707579 * get_address_of_fov_2() { return &___fov_2; }
	inline void set_fov_2(Vector2_t2243707579  value)
	{
		___fov_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: OVRTracker/Frustum
struct Frustum_t783054090_marshaled_pinvoke
{
	float ___nearZ_0;
	float ___farZ_1;
	Vector2_t2243707579_marshaled_pinvoke ___fov_2;
};
// Native definition for marshalling of: OVRTracker/Frustum
struct Frustum_t783054090_marshaled_com
{
	float ___nearZ_0;
	float ___farZ_1;
	Vector2_t2243707579_marshaled_com ___fov_2;
};
