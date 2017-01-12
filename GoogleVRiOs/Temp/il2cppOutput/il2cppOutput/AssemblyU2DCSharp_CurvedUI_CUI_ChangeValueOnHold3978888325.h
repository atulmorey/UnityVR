#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_ChangeValueOnHold
struct  CUI_ChangeValueOnHold_t3978888325  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean CurvedUI.CUI_ChangeValueOnHold::pressed
	bool ___pressed_2;
	// UnityEngine.UI.Image CurvedUI.CUI_ChangeValueOnHold::bg
	Image_t538875265 * ___bg_3;
	// UnityEngine.Color CurvedUI.CUI_ChangeValueOnHold::SelectedColor
	Color_t4194546905  ___SelectedColor_4;
	// UnityEngine.Color CurvedUI.CUI_ChangeValueOnHold::NormalColor
	Color_t4194546905  ___NormalColor_5;
	// UnityEngine.CanvasGroup CurvedUI.CUI_ChangeValueOnHold::IntroCG
	CanvasGroup_t3702418109 * ___IntroCG_6;
	// UnityEngine.CanvasGroup CurvedUI.CUI_ChangeValueOnHold::MenuCG
	CanvasGroup_t3702418109 * ___MenuCG_7;

public:
	inline static int32_t get_offset_of_pressed_2() { return static_cast<int32_t>(offsetof(CUI_ChangeValueOnHold_t3978888325, ___pressed_2)); }
	inline bool get_pressed_2() const { return ___pressed_2; }
	inline bool* get_address_of_pressed_2() { return &___pressed_2; }
	inline void set_pressed_2(bool value)
	{
		___pressed_2 = value;
	}

	inline static int32_t get_offset_of_bg_3() { return static_cast<int32_t>(offsetof(CUI_ChangeValueOnHold_t3978888325, ___bg_3)); }
	inline Image_t538875265 * get_bg_3() const { return ___bg_3; }
	inline Image_t538875265 ** get_address_of_bg_3() { return &___bg_3; }
	inline void set_bg_3(Image_t538875265 * value)
	{
		___bg_3 = value;
		Il2CppCodeGenWriteBarrier(&___bg_3, value);
	}

	inline static int32_t get_offset_of_SelectedColor_4() { return static_cast<int32_t>(offsetof(CUI_ChangeValueOnHold_t3978888325, ___SelectedColor_4)); }
	inline Color_t4194546905  get_SelectedColor_4() const { return ___SelectedColor_4; }
	inline Color_t4194546905 * get_address_of_SelectedColor_4() { return &___SelectedColor_4; }
	inline void set_SelectedColor_4(Color_t4194546905  value)
	{
		___SelectedColor_4 = value;
	}

	inline static int32_t get_offset_of_NormalColor_5() { return static_cast<int32_t>(offsetof(CUI_ChangeValueOnHold_t3978888325, ___NormalColor_5)); }
	inline Color_t4194546905  get_NormalColor_5() const { return ___NormalColor_5; }
	inline Color_t4194546905 * get_address_of_NormalColor_5() { return &___NormalColor_5; }
	inline void set_NormalColor_5(Color_t4194546905  value)
	{
		___NormalColor_5 = value;
	}

	inline static int32_t get_offset_of_IntroCG_6() { return static_cast<int32_t>(offsetof(CUI_ChangeValueOnHold_t3978888325, ___IntroCG_6)); }
	inline CanvasGroup_t3702418109 * get_IntroCG_6() const { return ___IntroCG_6; }
	inline CanvasGroup_t3702418109 ** get_address_of_IntroCG_6() { return &___IntroCG_6; }
	inline void set_IntroCG_6(CanvasGroup_t3702418109 * value)
	{
		___IntroCG_6 = value;
		Il2CppCodeGenWriteBarrier(&___IntroCG_6, value);
	}

	inline static int32_t get_offset_of_MenuCG_7() { return static_cast<int32_t>(offsetof(CUI_ChangeValueOnHold_t3978888325, ___MenuCG_7)); }
	inline CanvasGroup_t3702418109 * get_MenuCG_7() const { return ___MenuCG_7; }
	inline CanvasGroup_t3702418109 ** get_address_of_MenuCG_7() { return &___MenuCG_7; }
	inline void set_MenuCG_7(CanvasGroup_t3702418109 * value)
	{
		___MenuCG_7 = value;
		Il2CppCodeGenWriteBarrier(&___MenuCG_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
