﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_EventArgs3289624707.h"
#include "AssemblyU2DCSharp_OVRTouchpad_TouchEvent1968756919.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRTouchpad/TouchArgs
struct  TouchArgs_t791028520  : public EventArgs_t3289624707
{
public:
	// OVRTouchpad/TouchEvent OVRTouchpad/TouchArgs::TouchType
	int32_t ___TouchType_1;

public:
	inline static int32_t get_offset_of_TouchType_1() { return static_cast<int32_t>(offsetof(TouchArgs_t791028520, ___TouchType_1)); }
	inline int32_t get_TouchType_1() const { return ___TouchType_1; }
	inline int32_t* get_address_of_TouchType_1() { return &___TouchType_1; }
	inline void set_TouchType_1(int32_t value)
	{
		___TouchType_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
