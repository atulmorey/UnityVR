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

// OVRDisplay/EyeRenderDesc
struct  EyeRenderDesc_t168816214 
{
public:
	// UnityEngine.Vector2 OVRDisplay/EyeRenderDesc::resolution
	Vector2_t2243707579  ___resolution_0;
	// UnityEngine.Vector2 OVRDisplay/EyeRenderDesc::fov
	Vector2_t2243707579  ___fov_1;

public:
	inline static int32_t get_offset_of_resolution_0() { return static_cast<int32_t>(offsetof(EyeRenderDesc_t168816214, ___resolution_0)); }
	inline Vector2_t2243707579  get_resolution_0() const { return ___resolution_0; }
	inline Vector2_t2243707579 * get_address_of_resolution_0() { return &___resolution_0; }
	inline void set_resolution_0(Vector2_t2243707579  value)
	{
		___resolution_0 = value;
	}

	inline static int32_t get_offset_of_fov_1() { return static_cast<int32_t>(offsetof(EyeRenderDesc_t168816214, ___fov_1)); }
	inline Vector2_t2243707579  get_fov_1() const { return ___fov_1; }
	inline Vector2_t2243707579 * get_address_of_fov_1() { return &___fov_1; }
	inline void set_fov_1(Vector2_t2243707579  value)
	{
		___fov_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: OVRDisplay/EyeRenderDesc
struct EyeRenderDesc_t168816214_marshaled_pinvoke
{
	Vector2_t2243707579_marshaled_pinvoke ___resolution_0;
	Vector2_t2243707579_marshaled_pinvoke ___fov_1;
};
// Native definition for marshalling of: OVRDisplay/EyeRenderDesc
struct EyeRenderDesc_t168816214_marshaled_com
{
	Vector2_t2243707579_marshaled_com ___resolution_0;
	Vector2_t2243707579_marshaled_com ___fov_1;
};
