#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OVRHaptics/OVRHapticsChannel[]
struct OVRHapticsChannelU5BU5D_t2193358647;
// OVRHaptics/OVRHapticsChannel
struct OVRHapticsChannel_t3568542850;
// OVRHaptics/OVRHapticsOutput[]
struct OVRHapticsOutputU5BU5D_t3935342567;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRHaptics
struct  OVRHaptics_t1735924781  : public Il2CppObject
{
public:

public:
};

struct OVRHaptics_t1735924781_StaticFields
{
public:
	// OVRHaptics/OVRHapticsChannel[] OVRHaptics::Channels
	OVRHapticsChannelU5BU5D_t2193358647* ___Channels_0;
	// OVRHaptics/OVRHapticsChannel OVRHaptics::LeftChannel
	OVRHapticsChannel_t3568542850 * ___LeftChannel_1;
	// OVRHaptics/OVRHapticsChannel OVRHaptics::RightChannel
	OVRHapticsChannel_t3568542850 * ___RightChannel_2;
	// OVRHaptics/OVRHapticsOutput[] OVRHaptics::m_outputs
	OVRHapticsOutputU5BU5D_t3935342567* ___m_outputs_3;

public:
	inline static int32_t get_offset_of_Channels_0() { return static_cast<int32_t>(offsetof(OVRHaptics_t1735924781_StaticFields, ___Channels_0)); }
	inline OVRHapticsChannelU5BU5D_t2193358647* get_Channels_0() const { return ___Channels_0; }
	inline OVRHapticsChannelU5BU5D_t2193358647** get_address_of_Channels_0() { return &___Channels_0; }
	inline void set_Channels_0(OVRHapticsChannelU5BU5D_t2193358647* value)
	{
		___Channels_0 = value;
		Il2CppCodeGenWriteBarrier(&___Channels_0, value);
	}

	inline static int32_t get_offset_of_LeftChannel_1() { return static_cast<int32_t>(offsetof(OVRHaptics_t1735924781_StaticFields, ___LeftChannel_1)); }
	inline OVRHapticsChannel_t3568542850 * get_LeftChannel_1() const { return ___LeftChannel_1; }
	inline OVRHapticsChannel_t3568542850 ** get_address_of_LeftChannel_1() { return &___LeftChannel_1; }
	inline void set_LeftChannel_1(OVRHapticsChannel_t3568542850 * value)
	{
		___LeftChannel_1 = value;
		Il2CppCodeGenWriteBarrier(&___LeftChannel_1, value);
	}

	inline static int32_t get_offset_of_RightChannel_2() { return static_cast<int32_t>(offsetof(OVRHaptics_t1735924781_StaticFields, ___RightChannel_2)); }
	inline OVRHapticsChannel_t3568542850 * get_RightChannel_2() const { return ___RightChannel_2; }
	inline OVRHapticsChannel_t3568542850 ** get_address_of_RightChannel_2() { return &___RightChannel_2; }
	inline void set_RightChannel_2(OVRHapticsChannel_t3568542850 * value)
	{
		___RightChannel_2 = value;
		Il2CppCodeGenWriteBarrier(&___RightChannel_2, value);
	}

	inline static int32_t get_offset_of_m_outputs_3() { return static_cast<int32_t>(offsetof(OVRHaptics_t1735924781_StaticFields, ___m_outputs_3)); }
	inline OVRHapticsOutputU5BU5D_t3935342567* get_m_outputs_3() const { return ___m_outputs_3; }
	inline OVRHapticsOutputU5BU5D_t3935342567** get_address_of_m_outputs_3() { return &___m_outputs_3; }
	inline void set_m_outputs_3(OVRHapticsOutputU5BU5D_t3935342567* value)
	{
		___m_outputs_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_outputs_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
