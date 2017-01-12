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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFadeControl
struct  ScreenFadeControl_t3013021461  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Material ScreenFadeControl::fadeMaterial
	Material_t3870600107 * ___fadeMaterial_2;

public:
	inline static int32_t get_offset_of_fadeMaterial_2() { return static_cast<int32_t>(offsetof(ScreenFadeControl_t3013021461, ___fadeMaterial_2)); }
	inline Material_t3870600107 * get_fadeMaterial_2() const { return ___fadeMaterial_2; }
	inline Material_t3870600107 ** get_address_of_fadeMaterial_2() { return &___fadeMaterial_2; }
	inline void set_fadeMaterial_2(Material_t3870600107 * value)
	{
		___fadeMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___fadeMaterial_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
