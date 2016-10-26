#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRPlugin/Frustumf
struct  Frustumf_t2908953643 
{
public:
	// System.Single OVRPlugin/Frustumf::zNear
	float ___zNear_0;
	// System.Single OVRPlugin/Frustumf::zFar
	float ___zFar_1;
	// System.Single OVRPlugin/Frustumf::fovX
	float ___fovX_2;
	// System.Single OVRPlugin/Frustumf::fovY
	float ___fovY_3;

public:
	inline static int32_t get_offset_of_zNear_0() { return static_cast<int32_t>(offsetof(Frustumf_t2908953643, ___zNear_0)); }
	inline float get_zNear_0() const { return ___zNear_0; }
	inline float* get_address_of_zNear_0() { return &___zNear_0; }
	inline void set_zNear_0(float value)
	{
		___zNear_0 = value;
	}

	inline static int32_t get_offset_of_zFar_1() { return static_cast<int32_t>(offsetof(Frustumf_t2908953643, ___zFar_1)); }
	inline float get_zFar_1() const { return ___zFar_1; }
	inline float* get_address_of_zFar_1() { return &___zFar_1; }
	inline void set_zFar_1(float value)
	{
		___zFar_1 = value;
	}

	inline static int32_t get_offset_of_fovX_2() { return static_cast<int32_t>(offsetof(Frustumf_t2908953643, ___fovX_2)); }
	inline float get_fovX_2() const { return ___fovX_2; }
	inline float* get_address_of_fovX_2() { return &___fovX_2; }
	inline void set_fovX_2(float value)
	{
		___fovX_2 = value;
	}

	inline static int32_t get_offset_of_fovY_3() { return static_cast<int32_t>(offsetof(Frustumf_t2908953643, ___fovY_3)); }
	inline float get_fovY_3() const { return ___fovY_3; }
	inline float* get_address_of_fovY_3() { return &___fovY_3; }
	inline void set_fovY_3(float value)
	{
		___fovY_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: OVRPlugin/Frustumf
struct Frustumf_t2908953643_marshaled_pinvoke
{
	float ___zNear_0;
	float ___zFar_1;
	float ___fovX_2;
	float ___fovY_3;
};
// Native definition for marshalling of: OVRPlugin/Frustumf
struct Frustumf_t2908953643_marshaled_com
{
	float ___zNear_0;
	float ___zFar_1;
	float ___fovX_2;
	float ___fovY_3;
};
