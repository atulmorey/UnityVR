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
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_GunMovement
struct  CUI_GunMovement_t1242167957  : public MonoBehaviour_t667441552
{
public:
	// CurvedUI.CurvedUISettings CurvedUI.CUI_GunMovement::mySettings
	CurvedUISettings_t3567379076 * ___mySettings_2;
	// UnityEngine.Transform CurvedUI.CUI_GunMovement::pivot
	Transform_t1659122786 * ___pivot_3;
	// System.Single CurvedUI.CUI_GunMovement::sensitivity
	float ___sensitivity_4;
	// UnityEngine.Vector3 CurvedUI.CUI_GunMovement::lastMouse
	Vector3_t4282066566  ___lastMouse_5;

public:
	inline static int32_t get_offset_of_mySettings_2() { return static_cast<int32_t>(offsetof(CUI_GunMovement_t1242167957, ___mySettings_2)); }
	inline CurvedUISettings_t3567379076 * get_mySettings_2() const { return ___mySettings_2; }
	inline CurvedUISettings_t3567379076 ** get_address_of_mySettings_2() { return &___mySettings_2; }
	inline void set_mySettings_2(CurvedUISettings_t3567379076 * value)
	{
		___mySettings_2 = value;
		Il2CppCodeGenWriteBarrier(&___mySettings_2, value);
	}

	inline static int32_t get_offset_of_pivot_3() { return static_cast<int32_t>(offsetof(CUI_GunMovement_t1242167957, ___pivot_3)); }
	inline Transform_t1659122786 * get_pivot_3() const { return ___pivot_3; }
	inline Transform_t1659122786 ** get_address_of_pivot_3() { return &___pivot_3; }
	inline void set_pivot_3(Transform_t1659122786 * value)
	{
		___pivot_3 = value;
		Il2CppCodeGenWriteBarrier(&___pivot_3, value);
	}

	inline static int32_t get_offset_of_sensitivity_4() { return static_cast<int32_t>(offsetof(CUI_GunMovement_t1242167957, ___sensitivity_4)); }
	inline float get_sensitivity_4() const { return ___sensitivity_4; }
	inline float* get_address_of_sensitivity_4() { return &___sensitivity_4; }
	inline void set_sensitivity_4(float value)
	{
		___sensitivity_4 = value;
	}

	inline static int32_t get_offset_of_lastMouse_5() { return static_cast<int32_t>(offsetof(CUI_GunMovement_t1242167957, ___lastMouse_5)); }
	inline Vector3_t4282066566  get_lastMouse_5() const { return ___lastMouse_5; }
	inline Vector3_t4282066566 * get_address_of_lastMouse_5() { return &___lastMouse_5; }
	inline void set_lastMouse_5(Vector3_t4282066566  value)
	{
		___lastMouse_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
