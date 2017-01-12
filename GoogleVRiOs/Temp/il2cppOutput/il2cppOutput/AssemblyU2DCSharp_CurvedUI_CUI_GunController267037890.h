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
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t3285738888;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_GunController
struct  CUI_GunController_t267037890  : public MonoBehaviour_t667441552
{
public:
	// CurvedUI.CurvedUISettings CurvedUI.CUI_GunController::ControlledCanvas
	CurvedUISettings_t3567379076 * ___ControlledCanvas_2;
	// UnityEngine.Transform CurvedUI.CUI_GunController::LaserBeamTransform
	Transform_t1659122786 * ___LaserBeamTransform_3;

public:
	inline static int32_t get_offset_of_ControlledCanvas_2() { return static_cast<int32_t>(offsetof(CUI_GunController_t267037890, ___ControlledCanvas_2)); }
	inline CurvedUISettings_t3567379076 * get_ControlledCanvas_2() const { return ___ControlledCanvas_2; }
	inline CurvedUISettings_t3567379076 ** get_address_of_ControlledCanvas_2() { return &___ControlledCanvas_2; }
	inline void set_ControlledCanvas_2(CurvedUISettings_t3567379076 * value)
	{
		___ControlledCanvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___ControlledCanvas_2, value);
	}

	inline static int32_t get_offset_of_LaserBeamTransform_3() { return static_cast<int32_t>(offsetof(CUI_GunController_t267037890, ___LaserBeamTransform_3)); }
	inline Transform_t1659122786 * get_LaserBeamTransform_3() const { return ___LaserBeamTransform_3; }
	inline Transform_t1659122786 ** get_address_of_LaserBeamTransform_3() { return &___LaserBeamTransform_3; }
	inline void set_LaserBeamTransform_3(Transform_t1659122786 * value)
	{
		___LaserBeamTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___LaserBeamTransform_3, value);
	}
};

struct CUI_GunController_t267037890_StaticFields
{
public:
	// System.Predicate`1<UnityEngine.GameObject> CurvedUI.CUI_GunController::<>f__am$cache2
	Predicate_1_t3285738888 * ___U3CU3Ef__amU24cache2_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_4() { return static_cast<int32_t>(offsetof(CUI_GunController_t267037890_StaticFields, ___U3CU3Ef__amU24cache2_4)); }
	inline Predicate_1_t3285738888 * get_U3CU3Ef__amU24cache2_4() const { return ___U3CU3Ef__amU24cache2_4; }
	inline Predicate_1_t3285738888 ** get_address_of_U3CU3Ef__amU24cache2_4() { return &___U3CU3Ef__amU24cache2_4; }
	inline void set_U3CU3Ef__amU24cache2_4(Predicate_1_t3285738888 * value)
	{
		___U3CU3Ef__amU24cache2_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
