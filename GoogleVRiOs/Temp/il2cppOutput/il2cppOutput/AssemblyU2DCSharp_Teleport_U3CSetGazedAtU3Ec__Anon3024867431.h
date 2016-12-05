#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Teleport/<SetGazedAt>c__AnonStorey8
struct  U3CSetGazedAtU3Ec__AnonStorey8_t3024867431  : public Il2CppObject
{
public:
	// UnityEngine.Material Teleport/<SetGazedAt>c__AnonStorey8::thisMat
	Material_t3870600107 * ___thisMat_0;

public:
	inline static int32_t get_offset_of_thisMat_0() { return static_cast<int32_t>(offsetof(U3CSetGazedAtU3Ec__AnonStorey8_t3024867431, ___thisMat_0)); }
	inline Material_t3870600107 * get_thisMat_0() const { return ___thisMat_0; }
	inline Material_t3870600107 ** get_address_of_thisMat_0() { return &___thisMat_0; }
	inline void set_thisMat_0(Material_t3870600107 * value)
	{
		___thisMat_0 = value;
		Il2CppCodeGenWriteBarrier(&___thisMat_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
