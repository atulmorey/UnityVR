﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t1755874712;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRPlugin/OVRP_0_1_2
struct  OVRP_0_1_2_t440756962  : public Il2CppObject
{
public:

public:
};

struct OVRP_0_1_2_t440756962_StaticFields
{
public:
	// System.Version OVRPlugin/OVRP_0_1_2::version
	Version_t1755874712 * ___version_0;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(OVRP_0_1_2_t440756962_StaticFields, ___version_0)); }
	inline Version_t1755874712 * get_version_0() const { return ___version_0; }
	inline Version_t1755874712 ** get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(Version_t1755874712 * value)
	{
		___version_0 = value;
		Il2CppCodeGenWriteBarrier(&___version_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif