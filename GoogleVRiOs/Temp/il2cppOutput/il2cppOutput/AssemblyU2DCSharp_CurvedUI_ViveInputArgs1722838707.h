#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.ViveInputArgs
struct  ViveInputArgs_t1722838707 
{
public:
	// System.UInt32 CurvedUI.ViveInputArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// System.Single CurvedUI.ViveInputArgs::buttonPressure
	float ___buttonPressure_1;
	// UnityEngine.Vector2 CurvedUI.ViveInputArgs::touchpadAxis
	Vector2_t4282066565  ___touchpadAxis_2;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(ViveInputArgs_t1722838707, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}

	inline static int32_t get_offset_of_buttonPressure_1() { return static_cast<int32_t>(offsetof(ViveInputArgs_t1722838707, ___buttonPressure_1)); }
	inline float get_buttonPressure_1() const { return ___buttonPressure_1; }
	inline float* get_address_of_buttonPressure_1() { return &___buttonPressure_1; }
	inline void set_buttonPressure_1(float value)
	{
		___buttonPressure_1 = value;
	}

	inline static int32_t get_offset_of_touchpadAxis_2() { return static_cast<int32_t>(offsetof(ViveInputArgs_t1722838707, ___touchpadAxis_2)); }
	inline Vector2_t4282066565  get_touchpadAxis_2() const { return ___touchpadAxis_2; }
	inline Vector2_t4282066565 * get_address_of_touchpadAxis_2() { return &___touchpadAxis_2; }
	inline void set_touchpadAxis_2(Vector2_t4282066565  value)
	{
		___touchpadAxis_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: CurvedUI.ViveInputArgs
struct ViveInputArgs_t1722838707_marshaled_pinvoke
{
	uint32_t ___controllerIndex_0;
	float ___buttonPressure_1;
	Vector2_t4282066565_marshaled_pinvoke ___touchpadAxis_2;
};
// Native definition for marshalling of: CurvedUI.ViveInputArgs
struct ViveInputArgs_t1722838707_marshaled_com
{
	uint32_t ___controllerIndex_0;
	float ___buttonPressure_1;
	Vector2_t4282066565_marshaled_com ___touchpadAxis_2;
};
