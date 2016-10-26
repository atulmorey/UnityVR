#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_OVRInput_RawButton1813930626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRChromaticAberration
struct  OVRChromaticAberration_t3281366634  : public MonoBehaviour_t1158329972
{
public:
	// OVRInput/RawButton OVRChromaticAberration::toggleButton
	int32_t ___toggleButton_2;
	// System.Boolean OVRChromaticAberration::chromatic
	bool ___chromatic_3;

public:
	inline static int32_t get_offset_of_toggleButton_2() { return static_cast<int32_t>(offsetof(OVRChromaticAberration_t3281366634, ___toggleButton_2)); }
	inline int32_t get_toggleButton_2() const { return ___toggleButton_2; }
	inline int32_t* get_address_of_toggleButton_2() { return &___toggleButton_2; }
	inline void set_toggleButton_2(int32_t value)
	{
		___toggleButton_2 = value;
	}

	inline static int32_t get_offset_of_chromatic_3() { return static_cast<int32_t>(offsetof(OVRChromaticAberration_t3281366634, ___chromatic_3)); }
	inline bool get_chromatic_3() const { return ___chromatic_3; }
	inline bool* get_address_of_chromatic_3() { return &___chromatic_3; }
	inline void set_chromatic_3(bool value)
	{
		___chromatic_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
