#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "AssemblyU2DCSharp_OVRPlatformMenu_eHandler3803644747.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRPlatformMenu
struct  OVRPlatformMenu_t285831749  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject OVRPlatformMenu::cursorTimer
	GameObject_t1756533147 * ___cursorTimer_2;
	// UnityEngine.Color OVRPlatformMenu::cursorTimerColor
	Color_t2020392075  ___cursorTimerColor_3;
	// System.Single OVRPlatformMenu::fixedDepth
	float ___fixedDepth_4;
	// UnityEngine.KeyCode OVRPlatformMenu::keyCode
	int32_t ___keyCode_5;
	// OVRPlatformMenu/eHandler OVRPlatformMenu::doubleTapHandler
	int32_t ___doubleTapHandler_6;
	// OVRPlatformMenu/eHandler OVRPlatformMenu::shortPressHandler
	int32_t ___shortPressHandler_7;
	// OVRPlatformMenu/eHandler OVRPlatformMenu::longPressHandler
	int32_t ___longPressHandler_8;
	// UnityEngine.GameObject OVRPlatformMenu::instantiatedCursorTimer
	GameObject_t1756533147 * ___instantiatedCursorTimer_9;
	// UnityEngine.Material OVRPlatformMenu::cursorTimerMaterial
	Material_t193706927 * ___cursorTimerMaterial_10;
	// System.Single OVRPlatformMenu::doubleTapDelay
	float ___doubleTapDelay_11;
	// System.Single OVRPlatformMenu::shortPressDelay
	float ___shortPressDelay_12;
	// System.Single OVRPlatformMenu::longPressDelay
	float ___longPressDelay_13;
	// System.Int32 OVRPlatformMenu::downCount
	int32_t ___downCount_14;
	// System.Int32 OVRPlatformMenu::upCount
	int32_t ___upCount_15;
	// System.Single OVRPlatformMenu::initialDownTime
	float ___initialDownTime_16;
	// System.Boolean OVRPlatformMenu::waitForUp
	bool ___waitForUp_17;

public:
	inline static int32_t get_offset_of_cursorTimer_2() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___cursorTimer_2)); }
	inline GameObject_t1756533147 * get_cursorTimer_2() const { return ___cursorTimer_2; }
	inline GameObject_t1756533147 ** get_address_of_cursorTimer_2() { return &___cursorTimer_2; }
	inline void set_cursorTimer_2(GameObject_t1756533147 * value)
	{
		___cursorTimer_2 = value;
		Il2CppCodeGenWriteBarrier(&___cursorTimer_2, value);
	}

	inline static int32_t get_offset_of_cursorTimerColor_3() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___cursorTimerColor_3)); }
	inline Color_t2020392075  get_cursorTimerColor_3() const { return ___cursorTimerColor_3; }
	inline Color_t2020392075 * get_address_of_cursorTimerColor_3() { return &___cursorTimerColor_3; }
	inline void set_cursorTimerColor_3(Color_t2020392075  value)
	{
		___cursorTimerColor_3 = value;
	}

	inline static int32_t get_offset_of_fixedDepth_4() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___fixedDepth_4)); }
	inline float get_fixedDepth_4() const { return ___fixedDepth_4; }
	inline float* get_address_of_fixedDepth_4() { return &___fixedDepth_4; }
	inline void set_fixedDepth_4(float value)
	{
		___fixedDepth_4 = value;
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_doubleTapHandler_6() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___doubleTapHandler_6)); }
	inline int32_t get_doubleTapHandler_6() const { return ___doubleTapHandler_6; }
	inline int32_t* get_address_of_doubleTapHandler_6() { return &___doubleTapHandler_6; }
	inline void set_doubleTapHandler_6(int32_t value)
	{
		___doubleTapHandler_6 = value;
	}

	inline static int32_t get_offset_of_shortPressHandler_7() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___shortPressHandler_7)); }
	inline int32_t get_shortPressHandler_7() const { return ___shortPressHandler_7; }
	inline int32_t* get_address_of_shortPressHandler_7() { return &___shortPressHandler_7; }
	inline void set_shortPressHandler_7(int32_t value)
	{
		___shortPressHandler_7 = value;
	}

	inline static int32_t get_offset_of_longPressHandler_8() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___longPressHandler_8)); }
	inline int32_t get_longPressHandler_8() const { return ___longPressHandler_8; }
	inline int32_t* get_address_of_longPressHandler_8() { return &___longPressHandler_8; }
	inline void set_longPressHandler_8(int32_t value)
	{
		___longPressHandler_8 = value;
	}

	inline static int32_t get_offset_of_instantiatedCursorTimer_9() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___instantiatedCursorTimer_9)); }
	inline GameObject_t1756533147 * get_instantiatedCursorTimer_9() const { return ___instantiatedCursorTimer_9; }
	inline GameObject_t1756533147 ** get_address_of_instantiatedCursorTimer_9() { return &___instantiatedCursorTimer_9; }
	inline void set_instantiatedCursorTimer_9(GameObject_t1756533147 * value)
	{
		___instantiatedCursorTimer_9 = value;
		Il2CppCodeGenWriteBarrier(&___instantiatedCursorTimer_9, value);
	}

	inline static int32_t get_offset_of_cursorTimerMaterial_10() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___cursorTimerMaterial_10)); }
	inline Material_t193706927 * get_cursorTimerMaterial_10() const { return ___cursorTimerMaterial_10; }
	inline Material_t193706927 ** get_address_of_cursorTimerMaterial_10() { return &___cursorTimerMaterial_10; }
	inline void set_cursorTimerMaterial_10(Material_t193706927 * value)
	{
		___cursorTimerMaterial_10 = value;
		Il2CppCodeGenWriteBarrier(&___cursorTimerMaterial_10, value);
	}

	inline static int32_t get_offset_of_doubleTapDelay_11() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___doubleTapDelay_11)); }
	inline float get_doubleTapDelay_11() const { return ___doubleTapDelay_11; }
	inline float* get_address_of_doubleTapDelay_11() { return &___doubleTapDelay_11; }
	inline void set_doubleTapDelay_11(float value)
	{
		___doubleTapDelay_11 = value;
	}

	inline static int32_t get_offset_of_shortPressDelay_12() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___shortPressDelay_12)); }
	inline float get_shortPressDelay_12() const { return ___shortPressDelay_12; }
	inline float* get_address_of_shortPressDelay_12() { return &___shortPressDelay_12; }
	inline void set_shortPressDelay_12(float value)
	{
		___shortPressDelay_12 = value;
	}

	inline static int32_t get_offset_of_longPressDelay_13() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___longPressDelay_13)); }
	inline float get_longPressDelay_13() const { return ___longPressDelay_13; }
	inline float* get_address_of_longPressDelay_13() { return &___longPressDelay_13; }
	inline void set_longPressDelay_13(float value)
	{
		___longPressDelay_13 = value;
	}

	inline static int32_t get_offset_of_downCount_14() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___downCount_14)); }
	inline int32_t get_downCount_14() const { return ___downCount_14; }
	inline int32_t* get_address_of_downCount_14() { return &___downCount_14; }
	inline void set_downCount_14(int32_t value)
	{
		___downCount_14 = value;
	}

	inline static int32_t get_offset_of_upCount_15() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___upCount_15)); }
	inline int32_t get_upCount_15() const { return ___upCount_15; }
	inline int32_t* get_address_of_upCount_15() { return &___upCount_15; }
	inline void set_upCount_15(int32_t value)
	{
		___upCount_15 = value;
	}

	inline static int32_t get_offset_of_initialDownTime_16() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___initialDownTime_16)); }
	inline float get_initialDownTime_16() const { return ___initialDownTime_16; }
	inline float* get_address_of_initialDownTime_16() { return &___initialDownTime_16; }
	inline void set_initialDownTime_16(float value)
	{
		___initialDownTime_16 = value;
	}

	inline static int32_t get_offset_of_waitForUp_17() { return static_cast<int32_t>(offsetof(OVRPlatformMenu_t285831749, ___waitForUp_17)); }
	inline bool get_waitForUp_17() const { return ___waitForUp_17; }
	inline bool* get_address_of_waitForUp_17() { return &___waitForUp_17; }
	inline void set_waitForUp_17(bool value)
	{
		___waitForUp_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
