#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<OVRInput/OVRControllerBase>
struct List_1_t1910527732;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OVRInput_Controller4215116408.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRInput
struct  OVRInput_t1009233347  : public Il2CppObject
{
public:

public:
};

struct OVRInput_t1009233347_StaticFields
{
public:
	// System.Single OVRInput::AXIS_AS_BUTTON_THRESHOLD
	float ___AXIS_AS_BUTTON_THRESHOLD_0;
	// System.Single OVRInput::AXIS_DEADZONE_THRESHOLD
	float ___AXIS_DEADZONE_THRESHOLD_1;
	// System.Collections.Generic.List`1<OVRInput/OVRControllerBase> OVRInput::controllers
	List_1_t1910527732 * ___controllers_2;
	// OVRInput/Controller OVRInput::activeControllerType
	int32_t ___activeControllerType_3;
	// OVRInput/Controller OVRInput::connectedControllerTypes
	int32_t ___connectedControllerTypes_4;
	// System.Boolean OVRInput::useFixedPoses
	bool ___useFixedPoses_5;
	// System.Int32 OVRInput::fixedUpdateCount
	int32_t ___fixedUpdateCount_6;

public:
	inline static int32_t get_offset_of_AXIS_AS_BUTTON_THRESHOLD_0() { return static_cast<int32_t>(offsetof(OVRInput_t1009233347_StaticFields, ___AXIS_AS_BUTTON_THRESHOLD_0)); }
	inline float get_AXIS_AS_BUTTON_THRESHOLD_0() const { return ___AXIS_AS_BUTTON_THRESHOLD_0; }
	inline float* get_address_of_AXIS_AS_BUTTON_THRESHOLD_0() { return &___AXIS_AS_BUTTON_THRESHOLD_0; }
	inline void set_AXIS_AS_BUTTON_THRESHOLD_0(float value)
	{
		___AXIS_AS_BUTTON_THRESHOLD_0 = value;
	}

	inline static int32_t get_offset_of_AXIS_DEADZONE_THRESHOLD_1() { return static_cast<int32_t>(offsetof(OVRInput_t1009233347_StaticFields, ___AXIS_DEADZONE_THRESHOLD_1)); }
	inline float get_AXIS_DEADZONE_THRESHOLD_1() const { return ___AXIS_DEADZONE_THRESHOLD_1; }
	inline float* get_address_of_AXIS_DEADZONE_THRESHOLD_1() { return &___AXIS_DEADZONE_THRESHOLD_1; }
	inline void set_AXIS_DEADZONE_THRESHOLD_1(float value)
	{
		___AXIS_DEADZONE_THRESHOLD_1 = value;
	}

	inline static int32_t get_offset_of_controllers_2() { return static_cast<int32_t>(offsetof(OVRInput_t1009233347_StaticFields, ___controllers_2)); }
	inline List_1_t1910527732 * get_controllers_2() const { return ___controllers_2; }
	inline List_1_t1910527732 ** get_address_of_controllers_2() { return &___controllers_2; }
	inline void set_controllers_2(List_1_t1910527732 * value)
	{
		___controllers_2 = value;
		Il2CppCodeGenWriteBarrier(&___controllers_2, value);
	}

	inline static int32_t get_offset_of_activeControllerType_3() { return static_cast<int32_t>(offsetof(OVRInput_t1009233347_StaticFields, ___activeControllerType_3)); }
	inline int32_t get_activeControllerType_3() const { return ___activeControllerType_3; }
	inline int32_t* get_address_of_activeControllerType_3() { return &___activeControllerType_3; }
	inline void set_activeControllerType_3(int32_t value)
	{
		___activeControllerType_3 = value;
	}

	inline static int32_t get_offset_of_connectedControllerTypes_4() { return static_cast<int32_t>(offsetof(OVRInput_t1009233347_StaticFields, ___connectedControllerTypes_4)); }
	inline int32_t get_connectedControllerTypes_4() const { return ___connectedControllerTypes_4; }
	inline int32_t* get_address_of_connectedControllerTypes_4() { return &___connectedControllerTypes_4; }
	inline void set_connectedControllerTypes_4(int32_t value)
	{
		___connectedControllerTypes_4 = value;
	}

	inline static int32_t get_offset_of_useFixedPoses_5() { return static_cast<int32_t>(offsetof(OVRInput_t1009233347_StaticFields, ___useFixedPoses_5)); }
	inline bool get_useFixedPoses_5() const { return ___useFixedPoses_5; }
	inline bool* get_address_of_useFixedPoses_5() { return &___useFixedPoses_5; }
	inline void set_useFixedPoses_5(bool value)
	{
		___useFixedPoses_5 = value;
	}

	inline static int32_t get_offset_of_fixedUpdateCount_6() { return static_cast<int32_t>(offsetof(OVRInput_t1009233347_StaticFields, ___fixedUpdateCount_6)); }
	inline int32_t get_fixedUpdateCount_6() const { return ___fixedUpdateCount_6; }
	inline int32_t* get_address_of_fixedUpdateCount_6() { return &___fixedUpdateCount_6; }
	inline void set_fixedUpdateCount_6(int32_t value)
	{
		___fixedUpdateCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
