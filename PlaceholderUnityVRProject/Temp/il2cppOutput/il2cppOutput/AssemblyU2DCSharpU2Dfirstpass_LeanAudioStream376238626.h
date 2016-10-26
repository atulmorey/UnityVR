#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeanAudioStream
struct  LeanAudioStream_t376238626  : public Il2CppObject
{
public:
	// System.Int32 LeanAudioStream::position
	int32_t ___position_0;
	// UnityEngine.AudioClip LeanAudioStream::audioClip
	AudioClip_t1932558630 * ___audioClip_1;
	// System.Single[] LeanAudioStream::audioArr
	SingleU5BU5D_t577127397* ___audioArr_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(LeanAudioStream_t376238626, ___position_0)); }
	inline int32_t get_position_0() const { return ___position_0; }
	inline int32_t* get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(int32_t value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_audioClip_1() { return static_cast<int32_t>(offsetof(LeanAudioStream_t376238626, ___audioClip_1)); }
	inline AudioClip_t1932558630 * get_audioClip_1() const { return ___audioClip_1; }
	inline AudioClip_t1932558630 ** get_address_of_audioClip_1() { return &___audioClip_1; }
	inline void set_audioClip_1(AudioClip_t1932558630 * value)
	{
		___audioClip_1 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_1, value);
	}

	inline static int32_t get_offset_of_audioArr_2() { return static_cast<int32_t>(offsetof(LeanAudioStream_t376238626, ___audioArr_2)); }
	inline SingleU5BU5D_t577127397* get_audioArr_2() const { return ___audioArr_2; }
	inline SingleU5BU5D_t577127397** get_address_of_audioArr_2() { return &___audioArr_2; }
	inline void set_audioArr_2(SingleU5BU5D_t577127397* value)
	{
		___audioArr_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioArr_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
