#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// IntroStorySequence
struct IntroStorySequence_t1896506602;
// GameManager
struct GameManager_t2369589051;
// ScreenFader
struct ScreenFader_t1601131594;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamsungTeleport
struct  SamsungTeleport_t405289253  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject SamsungTeleport::MainCamera
	GameObject_t3674682005 * ___MainCamera_2;
	// IntroStorySequence SamsungTeleport::IntroSequenceComp
	IntroStorySequence_t1896506602 * ___IntroSequenceComp_3;
	// GameManager SamsungTeleport::_gameManager
	GameManager_t2369589051 * ____gameManager_4;
	// ScreenFader SamsungTeleport::_screenFader
	ScreenFader_t1601131594 * ____screenFader_5;
	// System.Single SamsungTeleport::_camFadeTime
	float ____camFadeTime_6;

public:
	inline static int32_t get_offset_of_MainCamera_2() { return static_cast<int32_t>(offsetof(SamsungTeleport_t405289253, ___MainCamera_2)); }
	inline GameObject_t3674682005 * get_MainCamera_2() const { return ___MainCamera_2; }
	inline GameObject_t3674682005 ** get_address_of_MainCamera_2() { return &___MainCamera_2; }
	inline void set_MainCamera_2(GameObject_t3674682005 * value)
	{
		___MainCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___MainCamera_2, value);
	}

	inline static int32_t get_offset_of_IntroSequenceComp_3() { return static_cast<int32_t>(offsetof(SamsungTeleport_t405289253, ___IntroSequenceComp_3)); }
	inline IntroStorySequence_t1896506602 * get_IntroSequenceComp_3() const { return ___IntroSequenceComp_3; }
	inline IntroStorySequence_t1896506602 ** get_address_of_IntroSequenceComp_3() { return &___IntroSequenceComp_3; }
	inline void set_IntroSequenceComp_3(IntroStorySequence_t1896506602 * value)
	{
		___IntroSequenceComp_3 = value;
		Il2CppCodeGenWriteBarrier(&___IntroSequenceComp_3, value);
	}

	inline static int32_t get_offset_of__gameManager_4() { return static_cast<int32_t>(offsetof(SamsungTeleport_t405289253, ____gameManager_4)); }
	inline GameManager_t2369589051 * get__gameManager_4() const { return ____gameManager_4; }
	inline GameManager_t2369589051 ** get_address_of__gameManager_4() { return &____gameManager_4; }
	inline void set__gameManager_4(GameManager_t2369589051 * value)
	{
		____gameManager_4 = value;
		Il2CppCodeGenWriteBarrier(&____gameManager_4, value);
	}

	inline static int32_t get_offset_of__screenFader_5() { return static_cast<int32_t>(offsetof(SamsungTeleport_t405289253, ____screenFader_5)); }
	inline ScreenFader_t1601131594 * get__screenFader_5() const { return ____screenFader_5; }
	inline ScreenFader_t1601131594 ** get_address_of__screenFader_5() { return &____screenFader_5; }
	inline void set__screenFader_5(ScreenFader_t1601131594 * value)
	{
		____screenFader_5 = value;
		Il2CppCodeGenWriteBarrier(&____screenFader_5, value);
	}

	inline static int32_t get_offset_of__camFadeTime_6() { return static_cast<int32_t>(offsetof(SamsungTeleport_t405289253, ____camFadeTime_6)); }
	inline float get__camFadeTime_6() const { return ____camFadeTime_6; }
	inline float* get_address_of__camFadeTime_6() { return &____camFadeTime_6; }
	inline void set__camFadeTime_6(float value)
	{
		____camFadeTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
