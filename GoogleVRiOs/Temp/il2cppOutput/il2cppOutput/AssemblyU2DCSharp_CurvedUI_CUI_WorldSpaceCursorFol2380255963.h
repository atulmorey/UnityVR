#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CurvedUI.CurvedUISettings
struct CurvedUISettings_t3567379076;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_WorldSpaceCursorFollow
struct  CUI_WorldSpaceCursorFollow_t2380255963  : public MonoBehaviour_t667441552
{
public:
	// CurvedUI.CurvedUISettings CurvedUI.CUI_WorldSpaceCursorFollow::mySettings
	CurvedUISettings_t3567379076 * ___mySettings_2;

public:
	inline static int32_t get_offset_of_mySettings_2() { return static_cast<int32_t>(offsetof(CUI_WorldSpaceCursorFollow_t2380255963, ___mySettings_2)); }
	inline CurvedUISettings_t3567379076 * get_mySettings_2() const { return ___mySettings_2; }
	inline CurvedUISettings_t3567379076 ** get_address_of_mySettings_2() { return &___mySettings_2; }
	inline void set_mySettings_2(CurvedUISettings_t3567379076 * value)
	{
		___mySettings_2 = value;
		Il2CppCodeGenWriteBarrier(&___mySettings_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
