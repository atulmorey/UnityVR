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

#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CurvedUIPointerEventData
struct  CurvedUIPointerEventData_t1201498120  : public PointerEventData_t1848751023
{
public:
	// UnityEngine.GameObject CurvedUI.CurvedUIPointerEventData::Controller
	GameObject_t3674682005 * ___Controller_23;
	// UnityEngine.Vector2 CurvedUI.CurvedUIPointerEventData::TouchPadAxis
	Vector2_t4282066565  ___TouchPadAxis_24;

public:
	inline static int32_t get_offset_of_Controller_23() { return static_cast<int32_t>(offsetof(CurvedUIPointerEventData_t1201498120, ___Controller_23)); }
	inline GameObject_t3674682005 * get_Controller_23() const { return ___Controller_23; }
	inline GameObject_t3674682005 ** get_address_of_Controller_23() { return &___Controller_23; }
	inline void set_Controller_23(GameObject_t3674682005 * value)
	{
		___Controller_23 = value;
		Il2CppCodeGenWriteBarrier(&___Controller_23, value);
	}

	inline static int32_t get_offset_of_TouchPadAxis_24() { return static_cast<int32_t>(offsetof(CurvedUIPointerEventData_t1201498120, ___TouchPadAxis_24)); }
	inline Vector2_t4282066565  get_TouchPadAxis_24() const { return ___TouchPadAxis_24; }
	inline Vector2_t4282066565 * get_address_of_TouchPadAxis_24() { return &___TouchPadAxis_24; }
	inline void set_TouchPadAxis_24(Vector2_t4282066565  value)
	{
		___TouchPadAxis_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
