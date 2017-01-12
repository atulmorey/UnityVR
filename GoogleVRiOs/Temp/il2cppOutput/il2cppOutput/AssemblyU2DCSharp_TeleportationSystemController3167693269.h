#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Teleport[]
struct TeleportU5BU5D_t1938722602;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Events.UnityAction
struct UnityAction_t594794173;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TeleportationSystemController
struct  TeleportationSystemController_t3167693269  : public MonoBehaviour_t667441552
{
public:
	// Teleport[] TeleportationSystemController::TeleportPoints
	TeleportU5BU5D_t1938722602* ___TeleportPoints_2;
	// UnityEngine.GameObject TeleportationSystemController::StoryModeUICanvas
	GameObject_t3674682005 * ___StoryModeUICanvas_3;
	// UnityEngine.GameObject TeleportationSystemController::MainCamera
	GameObject_t3674682005 * ___MainCamera_4;
	// UnityEngine.Events.UnityAction TeleportationSystemController::_teleportListner
	UnityAction_t594794173 * ____teleportListner_5;
	// System.Int32 TeleportationSystemController::counter
	int32_t ___counter_6;

public:
	inline static int32_t get_offset_of_TeleportPoints_2() { return static_cast<int32_t>(offsetof(TeleportationSystemController_t3167693269, ___TeleportPoints_2)); }
	inline TeleportU5BU5D_t1938722602* get_TeleportPoints_2() const { return ___TeleportPoints_2; }
	inline TeleportU5BU5D_t1938722602** get_address_of_TeleportPoints_2() { return &___TeleportPoints_2; }
	inline void set_TeleportPoints_2(TeleportU5BU5D_t1938722602* value)
	{
		___TeleportPoints_2 = value;
		Il2CppCodeGenWriteBarrier(&___TeleportPoints_2, value);
	}

	inline static int32_t get_offset_of_StoryModeUICanvas_3() { return static_cast<int32_t>(offsetof(TeleportationSystemController_t3167693269, ___StoryModeUICanvas_3)); }
	inline GameObject_t3674682005 * get_StoryModeUICanvas_3() const { return ___StoryModeUICanvas_3; }
	inline GameObject_t3674682005 ** get_address_of_StoryModeUICanvas_3() { return &___StoryModeUICanvas_3; }
	inline void set_StoryModeUICanvas_3(GameObject_t3674682005 * value)
	{
		___StoryModeUICanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___StoryModeUICanvas_3, value);
	}

	inline static int32_t get_offset_of_MainCamera_4() { return static_cast<int32_t>(offsetof(TeleportationSystemController_t3167693269, ___MainCamera_4)); }
	inline GameObject_t3674682005 * get_MainCamera_4() const { return ___MainCamera_4; }
	inline GameObject_t3674682005 ** get_address_of_MainCamera_4() { return &___MainCamera_4; }
	inline void set_MainCamera_4(GameObject_t3674682005 * value)
	{
		___MainCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___MainCamera_4, value);
	}

	inline static int32_t get_offset_of__teleportListner_5() { return static_cast<int32_t>(offsetof(TeleportationSystemController_t3167693269, ____teleportListner_5)); }
	inline UnityAction_t594794173 * get__teleportListner_5() const { return ____teleportListner_5; }
	inline UnityAction_t594794173 ** get_address_of__teleportListner_5() { return &____teleportListner_5; }
	inline void set__teleportListner_5(UnityAction_t594794173 * value)
	{
		____teleportListner_5 = value;
		Il2CppCodeGenWriteBarrier(&____teleportListner_5, value);
	}

	inline static int32_t get_offset_of_counter_6() { return static_cast<int32_t>(offsetof(TeleportationSystemController_t3167693269, ___counter_6)); }
	inline int32_t get_counter_6() const { return ___counter_6; }
	inline int32_t* get_address_of_counter_6() { return &___counter_6; }
	inline void set_counter_6(int32_t value)
	{
		___counter_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
