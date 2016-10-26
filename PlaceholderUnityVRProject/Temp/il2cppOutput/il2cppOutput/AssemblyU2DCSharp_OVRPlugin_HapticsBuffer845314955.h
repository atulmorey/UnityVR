#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRPlugin/HapticsBuffer
struct  HapticsBuffer_t845314955 
{
public:
	// System.IntPtr OVRPlugin/HapticsBuffer::Samples
	IntPtr_t ___Samples_0;
	// System.Int32 OVRPlugin/HapticsBuffer::SamplesCount
	int32_t ___SamplesCount_1;

public:
	inline static int32_t get_offset_of_Samples_0() { return static_cast<int32_t>(offsetof(HapticsBuffer_t845314955, ___Samples_0)); }
	inline IntPtr_t get_Samples_0() const { return ___Samples_0; }
	inline IntPtr_t* get_address_of_Samples_0() { return &___Samples_0; }
	inline void set_Samples_0(IntPtr_t value)
	{
		___Samples_0 = value;
	}

	inline static int32_t get_offset_of_SamplesCount_1() { return static_cast<int32_t>(offsetof(HapticsBuffer_t845314955, ___SamplesCount_1)); }
	inline int32_t get_SamplesCount_1() const { return ___SamplesCount_1; }
	inline int32_t* get_address_of_SamplesCount_1() { return &___SamplesCount_1; }
	inline void set_SamplesCount_1(int32_t value)
	{
		___SamplesCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: OVRPlugin/HapticsBuffer
struct HapticsBuffer_t845314955_marshaled_pinvoke
{
	intptr_t ___Samples_0;
	int32_t ___SamplesCount_1;
};
// Native definition for marshalling of: OVRPlugin/HapticsBuffer
struct HapticsBuffer_t845314955_marshaled_com
{
	intptr_t ___Samples_0;
	int32_t ___SamplesCount_1;
};
