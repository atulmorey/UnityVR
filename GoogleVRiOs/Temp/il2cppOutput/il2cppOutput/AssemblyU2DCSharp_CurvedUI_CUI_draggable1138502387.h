#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_draggable
struct  CUI_draggable_t1138502387  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector2 CurvedUI.CUI_draggable::savedVector
	Vector2_t4282066565  ___savedVector_2;

public:
	inline static int32_t get_offset_of_savedVector_2() { return static_cast<int32_t>(offsetof(CUI_draggable_t1138502387, ___savedVector_2)); }
	inline Vector2_t4282066565  get_savedVector_2() const { return ___savedVector_2; }
	inline Vector2_t4282066565 * get_address_of_savedVector_2() { return &___savedVector_2; }
	inline void set_savedVector_2(Vector2_t4282066565  value)
	{
		___savedVector_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
