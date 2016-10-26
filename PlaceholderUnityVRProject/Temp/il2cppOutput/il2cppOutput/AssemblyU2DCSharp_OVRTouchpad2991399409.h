#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OVRTouchpadHelper
struct OVRTouchpadHelper_t2328542995;
// System.EventHandler
struct EventHandler_t277755526;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OVRTouchpad_TouchState2029813918.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRTouchpad
struct  OVRTouchpad_t2991399409  : public Il2CppObject
{
public:

public:
};

struct OVRTouchpad_t2991399409_StaticFields
{
public:
	// OVRTouchpad/TouchState OVRTouchpad::touchState
	int32_t ___touchState_0;
	// UnityEngine.Vector2 OVRTouchpad::moveAmount
	Vector2_t2243707579  ___moveAmount_1;
	// System.Single OVRTouchpad::minMovMagnitude
	float ___minMovMagnitude_2;
	// UnityEngine.Vector3 OVRTouchpad::moveAmountMouse
	Vector3_t2243707580  ___moveAmountMouse_3;
	// System.Single OVRTouchpad::minMovMagnitudeMouse
	float ___minMovMagnitudeMouse_4;
	// OVRTouchpadHelper OVRTouchpad::touchpadHelper
	OVRTouchpadHelper_t2328542995 * ___touchpadHelper_5;
	// System.EventHandler OVRTouchpad::TouchHandler
	EventHandler_t277755526 * ___TouchHandler_6;

public:
	inline static int32_t get_offset_of_touchState_0() { return static_cast<int32_t>(offsetof(OVRTouchpad_t2991399409_StaticFields, ___touchState_0)); }
	inline int32_t get_touchState_0() const { return ___touchState_0; }
	inline int32_t* get_address_of_touchState_0() { return &___touchState_0; }
	inline void set_touchState_0(int32_t value)
	{
		___touchState_0 = value;
	}

	inline static int32_t get_offset_of_moveAmount_1() { return static_cast<int32_t>(offsetof(OVRTouchpad_t2991399409_StaticFields, ___moveAmount_1)); }
	inline Vector2_t2243707579  get_moveAmount_1() const { return ___moveAmount_1; }
	inline Vector2_t2243707579 * get_address_of_moveAmount_1() { return &___moveAmount_1; }
	inline void set_moveAmount_1(Vector2_t2243707579  value)
	{
		___moveAmount_1 = value;
	}

	inline static int32_t get_offset_of_minMovMagnitude_2() { return static_cast<int32_t>(offsetof(OVRTouchpad_t2991399409_StaticFields, ___minMovMagnitude_2)); }
	inline float get_minMovMagnitude_2() const { return ___minMovMagnitude_2; }
	inline float* get_address_of_minMovMagnitude_2() { return &___minMovMagnitude_2; }
	inline void set_minMovMagnitude_2(float value)
	{
		___minMovMagnitude_2 = value;
	}

	inline static int32_t get_offset_of_moveAmountMouse_3() { return static_cast<int32_t>(offsetof(OVRTouchpad_t2991399409_StaticFields, ___moveAmountMouse_3)); }
	inline Vector3_t2243707580  get_moveAmountMouse_3() const { return ___moveAmountMouse_3; }
	inline Vector3_t2243707580 * get_address_of_moveAmountMouse_3() { return &___moveAmountMouse_3; }
	inline void set_moveAmountMouse_3(Vector3_t2243707580  value)
	{
		___moveAmountMouse_3 = value;
	}

	inline static int32_t get_offset_of_minMovMagnitudeMouse_4() { return static_cast<int32_t>(offsetof(OVRTouchpad_t2991399409_StaticFields, ___minMovMagnitudeMouse_4)); }
	inline float get_minMovMagnitudeMouse_4() const { return ___minMovMagnitudeMouse_4; }
	inline float* get_address_of_minMovMagnitudeMouse_4() { return &___minMovMagnitudeMouse_4; }
	inline void set_minMovMagnitudeMouse_4(float value)
	{
		___minMovMagnitudeMouse_4 = value;
	}

	inline static int32_t get_offset_of_touchpadHelper_5() { return static_cast<int32_t>(offsetof(OVRTouchpad_t2991399409_StaticFields, ___touchpadHelper_5)); }
	inline OVRTouchpadHelper_t2328542995 * get_touchpadHelper_5() const { return ___touchpadHelper_5; }
	inline OVRTouchpadHelper_t2328542995 ** get_address_of_touchpadHelper_5() { return &___touchpadHelper_5; }
	inline void set_touchpadHelper_5(OVRTouchpadHelper_t2328542995 * value)
	{
		___touchpadHelper_5 = value;
		Il2CppCodeGenWriteBarrier(&___touchpadHelper_5, value);
	}

	inline static int32_t get_offset_of_TouchHandler_6() { return static_cast<int32_t>(offsetof(OVRTouchpad_t2991399409_StaticFields, ___TouchHandler_6)); }
	inline EventHandler_t277755526 * get_TouchHandler_6() const { return ___TouchHandler_6; }
	inline EventHandler_t277755526 ** get_address_of_TouchHandler_6() { return &___TouchHandler_6; }
	inline void set_TouchHandler_6(EventHandler_t277755526 * value)
	{
		___TouchHandler_6 = value;
		Il2CppCodeGenWriteBarrier(&___TouchHandler_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
