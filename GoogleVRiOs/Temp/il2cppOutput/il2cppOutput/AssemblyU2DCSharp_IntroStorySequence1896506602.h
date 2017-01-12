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
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.Light
struct Light_t4202674828;
// ScreenFader
struct ScreenFader_t1601131594;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntroStorySequence
struct  IntroStorySequence_t1896506602  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject IntroStorySequence::Room
	GameObject_t3674682005 * ___Room_2;
	// UnityEngine.GameObject IntroStorySequence::MainCamera
	GameObject_t3674682005 * ___MainCamera_3;
	// UnityEngine.GameObject IntroStorySequence::SamsungSSD
	GameObject_t3674682005 * ___SamsungSSD_4;
	// UnityEngine.GameObject IntroStorySequence::SamsungPointLight
	GameObject_t3674682005 * ___SamsungPointLight_5;
	// UnityEngine.GameObject IntroStorySequence::PlayCanvas
	GameObject_t3674682005 * ___PlayCanvas_6;
	// UnityEngine.GameObject IntroStorySequence::PlayButton
	GameObject_t3674682005 * ___PlayButton_7;
	// UnityEngine.Transform IntroStorySequence::StandUpTr
	Transform_t1659122786 * ___StandUpTr_8;
	// UnityEngine.Transform IntroStorySequence::WalkTr
	Transform_t1659122786 * ___WalkTr_9;
	// UnityEngine.Transform IntroStorySequence::SamsungPickUpTr
	Transform_t1659122786 * ___SamsungPickUpTr_10;
	// UnityEngine.Transform IntroStorySequence::SamsungZoomInTr
	Transform_t1659122786 * ___SamsungZoomInTr_11;
	// UnityEngine.AudioClip IntroStorySequence::Clip1
	AudioClip_t794140988 * ___Clip1_12;
	// UnityEngine.AudioClip IntroStorySequence::Clip2
	AudioClip_t794140988 * ___Clip2_13;
	// UnityEngine.AudioClip IntroStorySequence::Clip3
	AudioClip_t794140988 * ___Clip3_14;
	// UnityEngine.Light IntroStorySequence::_samsungHighlight
	Light_t4202674828 * ____samsungHighlight_15;
	// System.Int32 IntroStorySequence::_samsungHighlightTweenID
	int32_t ____samsungHighlightTweenID_16;
	// ScreenFader IntroStorySequence::_screenFader
	ScreenFader_t1601131594 * ____screenFader_17;
	// UnityEngine.AudioSource IntroStorySequence::BootAudio
	AudioSource_t1740077639 * ___BootAudio_18;

public:
	inline static int32_t get_offset_of_Room_2() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___Room_2)); }
	inline GameObject_t3674682005 * get_Room_2() const { return ___Room_2; }
	inline GameObject_t3674682005 ** get_address_of_Room_2() { return &___Room_2; }
	inline void set_Room_2(GameObject_t3674682005 * value)
	{
		___Room_2 = value;
		Il2CppCodeGenWriteBarrier(&___Room_2, value);
	}

	inline static int32_t get_offset_of_MainCamera_3() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___MainCamera_3)); }
	inline GameObject_t3674682005 * get_MainCamera_3() const { return ___MainCamera_3; }
	inline GameObject_t3674682005 ** get_address_of_MainCamera_3() { return &___MainCamera_3; }
	inline void set_MainCamera_3(GameObject_t3674682005 * value)
	{
		___MainCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___MainCamera_3, value);
	}

	inline static int32_t get_offset_of_SamsungSSD_4() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___SamsungSSD_4)); }
	inline GameObject_t3674682005 * get_SamsungSSD_4() const { return ___SamsungSSD_4; }
	inline GameObject_t3674682005 ** get_address_of_SamsungSSD_4() { return &___SamsungSSD_4; }
	inline void set_SamsungSSD_4(GameObject_t3674682005 * value)
	{
		___SamsungSSD_4 = value;
		Il2CppCodeGenWriteBarrier(&___SamsungSSD_4, value);
	}

	inline static int32_t get_offset_of_SamsungPointLight_5() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___SamsungPointLight_5)); }
	inline GameObject_t3674682005 * get_SamsungPointLight_5() const { return ___SamsungPointLight_5; }
	inline GameObject_t3674682005 ** get_address_of_SamsungPointLight_5() { return &___SamsungPointLight_5; }
	inline void set_SamsungPointLight_5(GameObject_t3674682005 * value)
	{
		___SamsungPointLight_5 = value;
		Il2CppCodeGenWriteBarrier(&___SamsungPointLight_5, value);
	}

	inline static int32_t get_offset_of_PlayCanvas_6() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___PlayCanvas_6)); }
	inline GameObject_t3674682005 * get_PlayCanvas_6() const { return ___PlayCanvas_6; }
	inline GameObject_t3674682005 ** get_address_of_PlayCanvas_6() { return &___PlayCanvas_6; }
	inline void set_PlayCanvas_6(GameObject_t3674682005 * value)
	{
		___PlayCanvas_6 = value;
		Il2CppCodeGenWriteBarrier(&___PlayCanvas_6, value);
	}

	inline static int32_t get_offset_of_PlayButton_7() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___PlayButton_7)); }
	inline GameObject_t3674682005 * get_PlayButton_7() const { return ___PlayButton_7; }
	inline GameObject_t3674682005 ** get_address_of_PlayButton_7() { return &___PlayButton_7; }
	inline void set_PlayButton_7(GameObject_t3674682005 * value)
	{
		___PlayButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___PlayButton_7, value);
	}

	inline static int32_t get_offset_of_StandUpTr_8() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___StandUpTr_8)); }
	inline Transform_t1659122786 * get_StandUpTr_8() const { return ___StandUpTr_8; }
	inline Transform_t1659122786 ** get_address_of_StandUpTr_8() { return &___StandUpTr_8; }
	inline void set_StandUpTr_8(Transform_t1659122786 * value)
	{
		___StandUpTr_8 = value;
		Il2CppCodeGenWriteBarrier(&___StandUpTr_8, value);
	}

	inline static int32_t get_offset_of_WalkTr_9() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___WalkTr_9)); }
	inline Transform_t1659122786 * get_WalkTr_9() const { return ___WalkTr_9; }
	inline Transform_t1659122786 ** get_address_of_WalkTr_9() { return &___WalkTr_9; }
	inline void set_WalkTr_9(Transform_t1659122786 * value)
	{
		___WalkTr_9 = value;
		Il2CppCodeGenWriteBarrier(&___WalkTr_9, value);
	}

	inline static int32_t get_offset_of_SamsungPickUpTr_10() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___SamsungPickUpTr_10)); }
	inline Transform_t1659122786 * get_SamsungPickUpTr_10() const { return ___SamsungPickUpTr_10; }
	inline Transform_t1659122786 ** get_address_of_SamsungPickUpTr_10() { return &___SamsungPickUpTr_10; }
	inline void set_SamsungPickUpTr_10(Transform_t1659122786 * value)
	{
		___SamsungPickUpTr_10 = value;
		Il2CppCodeGenWriteBarrier(&___SamsungPickUpTr_10, value);
	}

	inline static int32_t get_offset_of_SamsungZoomInTr_11() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___SamsungZoomInTr_11)); }
	inline Transform_t1659122786 * get_SamsungZoomInTr_11() const { return ___SamsungZoomInTr_11; }
	inline Transform_t1659122786 ** get_address_of_SamsungZoomInTr_11() { return &___SamsungZoomInTr_11; }
	inline void set_SamsungZoomInTr_11(Transform_t1659122786 * value)
	{
		___SamsungZoomInTr_11 = value;
		Il2CppCodeGenWriteBarrier(&___SamsungZoomInTr_11, value);
	}

	inline static int32_t get_offset_of_Clip1_12() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___Clip1_12)); }
	inline AudioClip_t794140988 * get_Clip1_12() const { return ___Clip1_12; }
	inline AudioClip_t794140988 ** get_address_of_Clip1_12() { return &___Clip1_12; }
	inline void set_Clip1_12(AudioClip_t794140988 * value)
	{
		___Clip1_12 = value;
		Il2CppCodeGenWriteBarrier(&___Clip1_12, value);
	}

	inline static int32_t get_offset_of_Clip2_13() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___Clip2_13)); }
	inline AudioClip_t794140988 * get_Clip2_13() const { return ___Clip2_13; }
	inline AudioClip_t794140988 ** get_address_of_Clip2_13() { return &___Clip2_13; }
	inline void set_Clip2_13(AudioClip_t794140988 * value)
	{
		___Clip2_13 = value;
		Il2CppCodeGenWriteBarrier(&___Clip2_13, value);
	}

	inline static int32_t get_offset_of_Clip3_14() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___Clip3_14)); }
	inline AudioClip_t794140988 * get_Clip3_14() const { return ___Clip3_14; }
	inline AudioClip_t794140988 ** get_address_of_Clip3_14() { return &___Clip3_14; }
	inline void set_Clip3_14(AudioClip_t794140988 * value)
	{
		___Clip3_14 = value;
		Il2CppCodeGenWriteBarrier(&___Clip3_14, value);
	}

	inline static int32_t get_offset_of__samsungHighlight_15() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ____samsungHighlight_15)); }
	inline Light_t4202674828 * get__samsungHighlight_15() const { return ____samsungHighlight_15; }
	inline Light_t4202674828 ** get_address_of__samsungHighlight_15() { return &____samsungHighlight_15; }
	inline void set__samsungHighlight_15(Light_t4202674828 * value)
	{
		____samsungHighlight_15 = value;
		Il2CppCodeGenWriteBarrier(&____samsungHighlight_15, value);
	}

	inline static int32_t get_offset_of__samsungHighlightTweenID_16() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ____samsungHighlightTweenID_16)); }
	inline int32_t get__samsungHighlightTweenID_16() const { return ____samsungHighlightTweenID_16; }
	inline int32_t* get_address_of__samsungHighlightTweenID_16() { return &____samsungHighlightTweenID_16; }
	inline void set__samsungHighlightTweenID_16(int32_t value)
	{
		____samsungHighlightTweenID_16 = value;
	}

	inline static int32_t get_offset_of__screenFader_17() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ____screenFader_17)); }
	inline ScreenFader_t1601131594 * get__screenFader_17() const { return ____screenFader_17; }
	inline ScreenFader_t1601131594 ** get_address_of__screenFader_17() { return &____screenFader_17; }
	inline void set__screenFader_17(ScreenFader_t1601131594 * value)
	{
		____screenFader_17 = value;
		Il2CppCodeGenWriteBarrier(&____screenFader_17, value);
	}

	inline static int32_t get_offset_of_BootAudio_18() { return static_cast<int32_t>(offsetof(IntroStorySequence_t1896506602, ___BootAudio_18)); }
	inline AudioSource_t1740077639 * get_BootAudio_18() const { return ___BootAudio_18; }
	inline AudioSource_t1740077639 ** get_address_of_BootAudio_18() { return &___BootAudio_18; }
	inline void set_BootAudio_18(AudioSource_t1740077639 * value)
	{
		___BootAudio_18 = value;
		Il2CppCodeGenWriteBarrier(&___BootAudio_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
