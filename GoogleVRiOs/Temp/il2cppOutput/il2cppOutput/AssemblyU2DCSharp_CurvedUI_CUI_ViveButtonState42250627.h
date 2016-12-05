#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_CurvedUI_CUI_ViveButtonState_Viv3481967731.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_ViveButtonState
struct  CUI_ViveButtonState_t42250627  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color CurvedUI.CUI_ViveButtonState::ActiveColor
	Color_t4194546905  ___ActiveColor_2;
	// UnityEngine.Color CurvedUI.CUI_ViveButtonState::InActiveColor
	Color_t4194546905  ___InActiveColor_3;
	// CurvedUI.CUI_ViveButtonState/ViveButton CurvedUI.CUI_ViveButtonState::ShowStateFor
	int32_t ___ShowStateFor_4;

public:
	inline static int32_t get_offset_of_ActiveColor_2() { return static_cast<int32_t>(offsetof(CUI_ViveButtonState_t42250627, ___ActiveColor_2)); }
	inline Color_t4194546905  get_ActiveColor_2() const { return ___ActiveColor_2; }
	inline Color_t4194546905 * get_address_of_ActiveColor_2() { return &___ActiveColor_2; }
	inline void set_ActiveColor_2(Color_t4194546905  value)
	{
		___ActiveColor_2 = value;
	}

	inline static int32_t get_offset_of_InActiveColor_3() { return static_cast<int32_t>(offsetof(CUI_ViveButtonState_t42250627, ___InActiveColor_3)); }
	inline Color_t4194546905  get_InActiveColor_3() const { return ___InActiveColor_3; }
	inline Color_t4194546905 * get_address_of_InActiveColor_3() { return &___InActiveColor_3; }
	inline void set_InActiveColor_3(Color_t4194546905  value)
	{
		___InActiveColor_3 = value;
	}

	inline static int32_t get_offset_of_ShowStateFor_4() { return static_cast<int32_t>(offsetof(CUI_ViveButtonState_t42250627, ___ShowStateFor_4)); }
	inline int32_t get_ShowStateFor_4() const { return ___ShowStateFor_4; }
	inline int32_t* get_address_of_ShowStateFor_4() { return &___ShowStateFor_4; }
	inline void set_ShowStateFor_4(int32_t value)
	{
		___ShowStateFor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
