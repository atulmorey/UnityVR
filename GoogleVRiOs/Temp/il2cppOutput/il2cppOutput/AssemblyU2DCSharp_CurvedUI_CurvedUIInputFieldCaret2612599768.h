#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t609046876;
// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CurvedUIInputFieldCaret
struct  CurvedUIInputFieldCaret_t2612599768  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.InputField CurvedUI.CurvedUIInputFieldCaret::myField
	InputField_t609046876 * ___myField_2;
	// UnityEngine.RectTransform CurvedUI.CurvedUIInputFieldCaret::myCaret
	RectTransform_t972643934 * ___myCaret_3;
	// UnityEngine.Color CurvedUI.CurvedUIInputFieldCaret::origCaretColor
	Color_t4194546905  ___origCaretColor_4;
	// UnityEngine.Color CurvedUI.CurvedUIInputFieldCaret::origSelectionColor
	Color_t4194546905  ___origSelectionColor_5;
	// System.Boolean CurvedUI.CurvedUIInputFieldCaret::selected
	bool ___selected_6;
	// System.Boolean CurvedUI.CurvedUIInputFieldCaret::selectingText
	bool ___selectingText_7;

public:
	inline static int32_t get_offset_of_myField_2() { return static_cast<int32_t>(offsetof(CurvedUIInputFieldCaret_t2612599768, ___myField_2)); }
	inline InputField_t609046876 * get_myField_2() const { return ___myField_2; }
	inline InputField_t609046876 ** get_address_of_myField_2() { return &___myField_2; }
	inline void set_myField_2(InputField_t609046876 * value)
	{
		___myField_2 = value;
		Il2CppCodeGenWriteBarrier(&___myField_2, value);
	}

	inline static int32_t get_offset_of_myCaret_3() { return static_cast<int32_t>(offsetof(CurvedUIInputFieldCaret_t2612599768, ___myCaret_3)); }
	inline RectTransform_t972643934 * get_myCaret_3() const { return ___myCaret_3; }
	inline RectTransform_t972643934 ** get_address_of_myCaret_3() { return &___myCaret_3; }
	inline void set_myCaret_3(RectTransform_t972643934 * value)
	{
		___myCaret_3 = value;
		Il2CppCodeGenWriteBarrier(&___myCaret_3, value);
	}

	inline static int32_t get_offset_of_origCaretColor_4() { return static_cast<int32_t>(offsetof(CurvedUIInputFieldCaret_t2612599768, ___origCaretColor_4)); }
	inline Color_t4194546905  get_origCaretColor_4() const { return ___origCaretColor_4; }
	inline Color_t4194546905 * get_address_of_origCaretColor_4() { return &___origCaretColor_4; }
	inline void set_origCaretColor_4(Color_t4194546905  value)
	{
		___origCaretColor_4 = value;
	}

	inline static int32_t get_offset_of_origSelectionColor_5() { return static_cast<int32_t>(offsetof(CurvedUIInputFieldCaret_t2612599768, ___origSelectionColor_5)); }
	inline Color_t4194546905  get_origSelectionColor_5() const { return ___origSelectionColor_5; }
	inline Color_t4194546905 * get_address_of_origSelectionColor_5() { return &___origSelectionColor_5; }
	inline void set_origSelectionColor_5(Color_t4194546905  value)
	{
		___origSelectionColor_5 = value;
	}

	inline static int32_t get_offset_of_selected_6() { return static_cast<int32_t>(offsetof(CurvedUIInputFieldCaret_t2612599768, ___selected_6)); }
	inline bool get_selected_6() const { return ___selected_6; }
	inline bool* get_address_of_selected_6() { return &___selected_6; }
	inline void set_selected_6(bool value)
	{
		___selected_6 = value;
	}

	inline static int32_t get_offset_of_selectingText_7() { return static_cast<int32_t>(offsetof(CurvedUIInputFieldCaret_t2612599768, ___selectingText_7)); }
	inline bool get_selectingText_7() const { return ___selectingText_7; }
	inline bool* get_address_of_selectingText_7() { return &___selectingText_7; }
	inline void set_selectingText_7(bool value)
	{
		___selectingText_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
