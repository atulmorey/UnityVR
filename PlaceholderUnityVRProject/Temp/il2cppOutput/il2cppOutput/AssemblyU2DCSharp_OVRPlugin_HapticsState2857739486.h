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

// OVRPlugin/HapticsState
struct  HapticsState_t2857739486 
{
public:
	// System.Int32 OVRPlugin/HapticsState::SamplesAvailable
	int32_t ___SamplesAvailable_0;
	// System.Int32 OVRPlugin/HapticsState::SamplesQueued
	int32_t ___SamplesQueued_1;

public:
	inline static int32_t get_offset_of_SamplesAvailable_0() { return static_cast<int32_t>(offsetof(HapticsState_t2857739486, ___SamplesAvailable_0)); }
	inline int32_t get_SamplesAvailable_0() const { return ___SamplesAvailable_0; }
	inline int32_t* get_address_of_SamplesAvailable_0() { return &___SamplesAvailable_0; }
	inline void set_SamplesAvailable_0(int32_t value)
	{
		___SamplesAvailable_0 = value;
	}

	inline static int32_t get_offset_of_SamplesQueued_1() { return static_cast<int32_t>(offsetof(HapticsState_t2857739486, ___SamplesQueued_1)); }
	inline int32_t get_SamplesQueued_1() const { return ___SamplesQueued_1; }
	inline int32_t* get_address_of_SamplesQueued_1() { return &___SamplesQueued_1; }
	inline void set_SamplesQueued_1(int32_t value)
	{
		___SamplesQueued_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: OVRPlugin/HapticsState
struct HapticsState_t2857739486_marshaled_pinvoke
{
	int32_t ___SamplesAvailable_0;
	int32_t ___SamplesQueued_1;
};
// Native definition for marshalling of: OVRPlugin/HapticsState
struct HapticsState_t2857739486_marshaled_com
{
	int32_t ___SamplesAvailable_0;
	int32_t ___SamplesQueued_1;
};
