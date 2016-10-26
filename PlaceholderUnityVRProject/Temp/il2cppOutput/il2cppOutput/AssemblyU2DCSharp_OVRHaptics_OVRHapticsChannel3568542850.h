#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OVRHaptics/OVRHapticsOutput
struct OVRHapticsOutput_t2137832850;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRHaptics/OVRHapticsChannel
struct  OVRHapticsChannel_t3568542850  : public Il2CppObject
{
public:
	// OVRHaptics/OVRHapticsOutput OVRHaptics/OVRHapticsChannel::m_output
	OVRHapticsOutput_t2137832850 * ___m_output_0;

public:
	inline static int32_t get_offset_of_m_output_0() { return static_cast<int32_t>(offsetof(OVRHapticsChannel_t3568542850, ___m_output_0)); }
	inline OVRHapticsOutput_t2137832850 * get_m_output_0() const { return ___m_output_0; }
	inline OVRHapticsOutput_t2137832850 ** get_address_of_m_output_0() { return &___m_output_0; }
	inline void set_m_output_0(OVRHapticsOutput_t2137832850 * value)
	{
		___m_output_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_output_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
