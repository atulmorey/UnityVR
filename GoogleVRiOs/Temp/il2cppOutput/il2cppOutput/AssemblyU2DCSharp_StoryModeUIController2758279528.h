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
// UnityEngine.UI.Image
struct Image_t538875265;
// NANDStorySequence
struct NANDStorySequence_t3406440365;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StoryModeUIController
struct  StoryModeUIController_t2758279528  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject StoryModeUIController::ReplayGameObject
	GameObject_t3674682005 * ___ReplayGameObject_2;
	// UnityEngine.UI.Image StoryModeUIController::ReplayImageComp
	Image_t538875265 * ___ReplayImageComp_3;
	// UnityEngine.GameObject StoryModeUIController::ExploreGameObject
	GameObject_t3674682005 * ___ExploreGameObject_4;
	// UnityEngine.UI.Image StoryModeUIController::ExploreImageComp
	Image_t538875265 * ___ExploreImageComp_5;
	// UnityEngine.GameObject StoryModeUIController::QuitGameObject
	GameObject_t3674682005 * ___QuitGameObject_6;
	// UnityEngine.UI.Image StoryModeUIController::QuitImageComp
	Image_t538875265 * ___QuitImageComp_7;
	// NANDStorySequence StoryModeUIController::NANDStorySequenceComp
	NANDStorySequence_t3406440365 * ___NANDStorySequenceComp_8;
	// System.Single StoryModeUIController::_gazeHoldTimer
	float ____gazeHoldTimer_9;
	// System.Int32 StoryModeUIController::_quiteTweenID
	int32_t ____quiteTweenID_10;
	// System.Int32 StoryModeUIController::_replayTweenID
	int32_t ____replayTweenID_11;
	// System.Int32 StoryModeUIController::_exploreTweenID
	int32_t ____exploreTweenID_12;

public:
	inline static int32_t get_offset_of_ReplayGameObject_2() { return static_cast<int32_t>(offsetof(StoryModeUIController_t2758279528, ___ReplayGameObject_2)); }
	inline GameObject_t3674682005 * get_ReplayGameObject_2() const { return ___ReplayGameObject_2; }
	inline GameObject_t3674682005 ** get_address_of_ReplayGameObject_2() { return &___ReplayGameObject_2; }
	inline void set_ReplayGameObject_2(GameObject_t3674682005 * value)
	{
		___ReplayGameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___ReplayGameObject_2, value);
	}

	inline static int32_t get_offset_of_ReplayImageComp_3() { return static_cast<int32_t>(offsetof(StoryModeUIController_t2758279528, ___ReplayImageComp_3)); }
	inline Image_t538875265 * get_ReplayImageComp_3() const { return ___ReplayImageComp_3; }
	inline Image_t538875265 ** get_address_of_ReplayImageComp_3() { return &___ReplayImageComp_3; }
	inline void set_ReplayImageComp_3(Image_t538875265 * value)
	{
		___ReplayImageComp_3 = value;
		Il2CppCodeGenWriteBarrier(&___ReplayImageComp_3, value);
	}

	inline static int32_t get_offset_of_ExploreGameObject_4() { return static_cast<int32_t>(offsetof(StoryModeUIController_t2758279528, ___ExploreGameObject_4)); }
	inline GameObject_t3674682005 * get_ExploreGameObject_4() const { return ___ExploreGameObject_4; }
	inline GameObject_t3674682005 ** get_address_of_ExploreGameObject_4() { return &___ExploreGameObject_4; }
	inline void set_ExploreGameObject_4(GameObject_t3674682005 * value)
	{
		___ExploreGameObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___ExploreGameObject_4, value);
	}

	inline static int32_t get_offset_of_ExploreImageComp_5() { return static_cast<int32_t>(offsetof(StoryModeUIController_t2758279528, ___ExploreImageComp_5)); }
	inline Image_t538875265 * get_ExploreImageComp_5() const { return ___ExploreImageComp_5; }
	inline Image_t538875265 ** get_address_of_ExploreImageComp_5() { return &___ExploreImageComp_5; }
	inline void set_ExploreImageComp_5(Image_t538875265 * value)
	{
		___ExploreImageComp_5 = value;
		Il2CppCodeGenWriteBarrier(&___ExploreImageComp_5, value);
	}

	inline static int32_t get_offset_of_QuitGameObject_6() { return static_cast<int32_t>(offsetof(StoryModeUIController_t2758279528, ___QuitGameObject_6)); }
	inline GameObject_t3674682005 * get_QuitGameObject_6() const { return ___QuitGameObject_6; }
	inline GameObject_t3674682005 ** get_address_of_QuitGameObject_6() { return &___QuitGameObject_6; }
	inline void set_QuitGameObject_6(GameObject_t3674682005 * value)
	{
		___QuitGameObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___QuitGameObject_6, value);
	}

	inline static int32_t get_offset_of_QuitImageComp_7() { return static_cast<int32_t>(offsetof(StoryModeUIController_t2758279528, ___QuitImageComp_7)); }
	inline Image_t538875265 * get_QuitImageComp_7() const { return ___QuitImageComp_7; }
	inline Image_t538875265 ** get_address_of_QuitImageComp_7() { return &___QuitImageComp_7; }
	inline void set_QuitImageComp_7(Image_t538875265 * value)
	{
		___QuitImageComp_7 = value;
		Il2CppCodeGenWriteBarrier(&___QuitImageComp_7, value);
	}

	inline static int32_t get_offset_of_NANDStorySequenceComp_8() { return static_cast<int32_t>(offsetof(StoryModeUIController_t2758279528, ___NANDStorySequenceComp_8)); }
	inline NANDStorySequence_t3406440365 * get_NANDStorySequenceComp_8() const { return ___NANDStorySequenceComp_8; }
	inline NANDStorySequence_t3406440365 ** get_address_of_NANDStorySequenceComp_8() { return &___NANDStorySequenceComp_8; }
	inline void set_NANDStorySequenceComp_8(NANDStorySequence_t3406440365 * value)
	{
		___NANDStorySequenceComp_8 = value;
		Il2CppCodeGenWriteBarrier(&___NANDStorySequenceComp_8, value);
	}

	inline static int32_t get_offset_of__gazeHoldTimer_9() { return static_cast<int32_t>(offsetof(StoryModeUIController_t2758279528, ____gazeHoldTimer_9)); }
	inline float get__gazeHoldTimer_9() const { return ____gazeHoldTimer_9; }
	inline float* get_address_of__gazeHoldTimer_9() { return &____gazeHoldTimer_9; }
	inline void set__gazeHoldTimer_9(float value)
	{
		____gazeHoldTimer_9 = value;
	}

	inline static int32_t get_offset_of__quiteTweenID_10() { return static_cast<int32_t>(offsetof(StoryModeUIController_t2758279528, ____quiteTweenID_10)); }
	inline int32_t get__quiteTweenID_10() const { return ____quiteTweenID_10; }
	inline int32_t* get_address_of__quiteTweenID_10() { return &____quiteTweenID_10; }
	inline void set__quiteTweenID_10(int32_t value)
	{
		____quiteTweenID_10 = value;
	}

	inline static int32_t get_offset_of__replayTweenID_11() { return static_cast<int32_t>(offsetof(StoryModeUIController_t2758279528, ____replayTweenID_11)); }
	inline int32_t get__replayTweenID_11() const { return ____replayTweenID_11; }
	inline int32_t* get_address_of__replayTweenID_11() { return &____replayTweenID_11; }
	inline void set__replayTweenID_11(int32_t value)
	{
		____replayTweenID_11 = value;
	}

	inline static int32_t get_offset_of__exploreTweenID_12() { return static_cast<int32_t>(offsetof(StoryModeUIController_t2758279528, ____exploreTweenID_12)); }
	inline int32_t get__exploreTweenID_12() const { return ____exploreTweenID_12; }
	inline int32_t* get_address_of__exploreTweenID_12() { return &____exploreTweenID_12; }
	inline void set__exploreTweenID_12(int32_t value)
	{
		____exploreTweenID_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
