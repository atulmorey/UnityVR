#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2369589051;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t667441552
{
public:

public:
};

struct GameManager_t2369589051_StaticFields
{
public:
	// GameManager GameManager::Instance
	GameManager_t2369589051 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(GameManager_t2369589051_StaticFields, ___Instance_2)); }
	inline GameManager_t2369589051 * get_Instance_2() const { return ___Instance_2; }
	inline GameManager_t2369589051 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(GameManager_t2369589051 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
