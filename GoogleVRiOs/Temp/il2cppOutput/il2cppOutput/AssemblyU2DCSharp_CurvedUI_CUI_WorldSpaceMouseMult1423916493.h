#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<CurvedUI.CurvedUISettings>
struct List_1_t640597332;
// UnityEngine.Transform
struct Transform_t1659122786;
// CurvedUI.CurvedUISettings
struct CurvedUISettings_t3567379076;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_WorldSpaceMouseMultipleCanvases
struct  CUI_WorldSpaceMouseMultipleCanvases_t1423916493  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<CurvedUI.CurvedUISettings> CurvedUI.CUI_WorldSpaceMouseMultipleCanvases::ControlledCanvases
	List_1_t640597332 * ___ControlledCanvases_2;
	// UnityEngine.Transform CurvedUI.CUI_WorldSpaceMouseMultipleCanvases::WorldSpaceMouse
	Transform_t1659122786 * ___WorldSpaceMouse_3;
	// CurvedUI.CurvedUISettings CurvedUI.CUI_WorldSpaceMouseMultipleCanvases::MouseCanvas
	CurvedUISettings_t3567379076 * ___MouseCanvas_4;

public:
	inline static int32_t get_offset_of_ControlledCanvases_2() { return static_cast<int32_t>(offsetof(CUI_WorldSpaceMouseMultipleCanvases_t1423916493, ___ControlledCanvases_2)); }
	inline List_1_t640597332 * get_ControlledCanvases_2() const { return ___ControlledCanvases_2; }
	inline List_1_t640597332 ** get_address_of_ControlledCanvases_2() { return &___ControlledCanvases_2; }
	inline void set_ControlledCanvases_2(List_1_t640597332 * value)
	{
		___ControlledCanvases_2 = value;
		Il2CppCodeGenWriteBarrier(&___ControlledCanvases_2, value);
	}

	inline static int32_t get_offset_of_WorldSpaceMouse_3() { return static_cast<int32_t>(offsetof(CUI_WorldSpaceMouseMultipleCanvases_t1423916493, ___WorldSpaceMouse_3)); }
	inline Transform_t1659122786 * get_WorldSpaceMouse_3() const { return ___WorldSpaceMouse_3; }
	inline Transform_t1659122786 ** get_address_of_WorldSpaceMouse_3() { return &___WorldSpaceMouse_3; }
	inline void set_WorldSpaceMouse_3(Transform_t1659122786 * value)
	{
		___WorldSpaceMouse_3 = value;
		Il2CppCodeGenWriteBarrier(&___WorldSpaceMouse_3, value);
	}

	inline static int32_t get_offset_of_MouseCanvas_4() { return static_cast<int32_t>(offsetof(CUI_WorldSpaceMouseMultipleCanvases_t1423916493, ___MouseCanvas_4)); }
	inline CurvedUISettings_t3567379076 * get_MouseCanvas_4() const { return ___MouseCanvas_4; }
	inline CurvedUISettings_t3567379076 ** get_address_of_MouseCanvas_4() { return &___MouseCanvas_4; }
	inline void set_MouseCanvas_4(CurvedUISettings_t3567379076 * value)
	{
		___MouseCanvas_4 = value;
		Il2CppCodeGenWriteBarrier(&___MouseCanvas_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
