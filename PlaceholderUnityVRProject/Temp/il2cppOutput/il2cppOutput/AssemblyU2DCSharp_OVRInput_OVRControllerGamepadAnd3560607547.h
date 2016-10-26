#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_OVRInput_OVRControllerBase2541406600.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRInput/OVRControllerGamepadAndroid
struct  OVRControllerGamepadAndroid_t3560607547  : public OVRControllerBase_t2541406600
{
public:
	// System.Boolean OVRInput/OVRControllerGamepadAndroid::joystickDetected
	bool ___joystickDetected_8;
	// System.Single OVRInput/OVRControllerGamepadAndroid::joystickCheckInterval
	float ___joystickCheckInterval_9;
	// System.Single OVRInput/OVRControllerGamepadAndroid::joystickCheckTime
	float ___joystickCheckTime_10;

public:
	inline static int32_t get_offset_of_joystickDetected_8() { return static_cast<int32_t>(offsetof(OVRControllerGamepadAndroid_t3560607547, ___joystickDetected_8)); }
	inline bool get_joystickDetected_8() const { return ___joystickDetected_8; }
	inline bool* get_address_of_joystickDetected_8() { return &___joystickDetected_8; }
	inline void set_joystickDetected_8(bool value)
	{
		___joystickDetected_8 = value;
	}

	inline static int32_t get_offset_of_joystickCheckInterval_9() { return static_cast<int32_t>(offsetof(OVRControllerGamepadAndroid_t3560607547, ___joystickCheckInterval_9)); }
	inline float get_joystickCheckInterval_9() const { return ___joystickCheckInterval_9; }
	inline float* get_address_of_joystickCheckInterval_9() { return &___joystickCheckInterval_9; }
	inline void set_joystickCheckInterval_9(float value)
	{
		___joystickCheckInterval_9 = value;
	}

	inline static int32_t get_offset_of_joystickCheckTime_10() { return static_cast<int32_t>(offsetof(OVRControllerGamepadAndroid_t3560607547, ___joystickCheckTime_10)); }
	inline float get_joystickCheckTime_10() const { return ___joystickCheckTime_10; }
	inline float* get_address_of_joystickCheckTime_10() { return &___joystickCheckTime_10; }
	inline void set_joystickCheckTime_10(float value)
	{
		___joystickCheckTime_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
