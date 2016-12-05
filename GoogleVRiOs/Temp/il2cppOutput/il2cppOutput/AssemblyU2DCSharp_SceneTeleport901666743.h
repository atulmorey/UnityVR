#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneTeleport
struct  SceneTeleport_t901666743  : public MonoBehaviour_t667441552
{
public:
	// System.String SceneTeleport::TargetScene
	String_t* ___TargetScene_2;
	// UnityEngine.UI.Image SceneTeleport::_fillImage
	Image_t538875265 * ____fillImage_3;
	// UnityEngine.UI.Text SceneTeleport::_sceneTitle
	Text_t9039225 * ____sceneTitle_4;
	// System.Boolean SceneTeleport::_isGazeOnButton
	bool ____isGazeOnButton_5;
	// System.Single SceneTeleport::_fillAmount
	float ____fillAmount_6;
	// System.Single SceneTeleport::_fillTime
	float ____fillTime_7;
	// System.Int32 SceneTeleport::_tweenID
	int32_t ____tweenID_8;

public:
	inline static int32_t get_offset_of_TargetScene_2() { return static_cast<int32_t>(offsetof(SceneTeleport_t901666743, ___TargetScene_2)); }
	inline String_t* get_TargetScene_2() const { return ___TargetScene_2; }
	inline String_t** get_address_of_TargetScene_2() { return &___TargetScene_2; }
	inline void set_TargetScene_2(String_t* value)
	{
		___TargetScene_2 = value;
		Il2CppCodeGenWriteBarrier(&___TargetScene_2, value);
	}

	inline static int32_t get_offset_of__fillImage_3() { return static_cast<int32_t>(offsetof(SceneTeleport_t901666743, ____fillImage_3)); }
	inline Image_t538875265 * get__fillImage_3() const { return ____fillImage_3; }
	inline Image_t538875265 ** get_address_of__fillImage_3() { return &____fillImage_3; }
	inline void set__fillImage_3(Image_t538875265 * value)
	{
		____fillImage_3 = value;
		Il2CppCodeGenWriteBarrier(&____fillImage_3, value);
	}

	inline static int32_t get_offset_of__sceneTitle_4() { return static_cast<int32_t>(offsetof(SceneTeleport_t901666743, ____sceneTitle_4)); }
	inline Text_t9039225 * get__sceneTitle_4() const { return ____sceneTitle_4; }
	inline Text_t9039225 ** get_address_of__sceneTitle_4() { return &____sceneTitle_4; }
	inline void set__sceneTitle_4(Text_t9039225 * value)
	{
		____sceneTitle_4 = value;
		Il2CppCodeGenWriteBarrier(&____sceneTitle_4, value);
	}

	inline static int32_t get_offset_of__isGazeOnButton_5() { return static_cast<int32_t>(offsetof(SceneTeleport_t901666743, ____isGazeOnButton_5)); }
	inline bool get__isGazeOnButton_5() const { return ____isGazeOnButton_5; }
	inline bool* get_address_of__isGazeOnButton_5() { return &____isGazeOnButton_5; }
	inline void set__isGazeOnButton_5(bool value)
	{
		____isGazeOnButton_5 = value;
	}

	inline static int32_t get_offset_of__fillAmount_6() { return static_cast<int32_t>(offsetof(SceneTeleport_t901666743, ____fillAmount_6)); }
	inline float get__fillAmount_6() const { return ____fillAmount_6; }
	inline float* get_address_of__fillAmount_6() { return &____fillAmount_6; }
	inline void set__fillAmount_6(float value)
	{
		____fillAmount_6 = value;
	}

	inline static int32_t get_offset_of__fillTime_7() { return static_cast<int32_t>(offsetof(SceneTeleport_t901666743, ____fillTime_7)); }
	inline float get__fillTime_7() const { return ____fillTime_7; }
	inline float* get_address_of__fillTime_7() { return &____fillTime_7; }
	inline void set__fillTime_7(float value)
	{
		____fillTime_7 = value;
	}

	inline static int32_t get_offset_of__tweenID_8() { return static_cast<int32_t>(offsetof(SceneTeleport_t901666743, ____tweenID_8)); }
	inline int32_t get__tweenID_8() const { return ____tweenID_8; }
	inline int32_t* get_address_of__tweenID_8() { return &____tweenID_8; }
	inline void set__tweenID_8(int32_t value)
	{
		____tweenID_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
