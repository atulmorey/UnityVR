#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_OVRInput_OVRControllerBase2541406600.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRInput/OVRControllerGamepadDesktop
struct  OVRControllerGamepadDesktop_t2821200920  : public OVRControllerBase_t2541406600
{
public:
	// System.Boolean OVRInput/OVRControllerGamepadDesktop::initialized
	bool ___initialized_9;

public:
	inline static int32_t get_offset_of_initialized_9() { return static_cast<int32_t>(offsetof(OVRControllerGamepadDesktop_t2821200920, ___initialized_9)); }
	inline bool get_initialized_9() const { return ___initialized_9; }
	inline bool* get_address_of_initialized_9() { return &___initialized_9; }
	inline void set_initialized_9(bool value)
	{
		___initialized_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
