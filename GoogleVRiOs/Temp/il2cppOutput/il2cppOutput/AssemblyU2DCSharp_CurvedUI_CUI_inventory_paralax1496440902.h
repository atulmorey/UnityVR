#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_inventory_paralax
struct  CUI_inventory_paralax_t1496440902  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform CurvedUI.CUI_inventory_paralax::front
	Transform_t1659122786 * ___front_2;
	// UnityEngine.Transform CurvedUI.CUI_inventory_paralax::back
	Transform_t1659122786 * ___back_3;
	// UnityEngine.Vector3 CurvedUI.CUI_inventory_paralax::initFG
	Vector3_t4282066566  ___initFG_4;
	// UnityEngine.Vector3 CurvedUI.CUI_inventory_paralax::initBG
	Vector3_t4282066566  ___initBG_5;
	// System.Single CurvedUI.CUI_inventory_paralax::change
	float ___change_6;

public:
	inline static int32_t get_offset_of_front_2() { return static_cast<int32_t>(offsetof(CUI_inventory_paralax_t1496440902, ___front_2)); }
	inline Transform_t1659122786 * get_front_2() const { return ___front_2; }
	inline Transform_t1659122786 ** get_address_of_front_2() { return &___front_2; }
	inline void set_front_2(Transform_t1659122786 * value)
	{
		___front_2 = value;
		Il2CppCodeGenWriteBarrier(&___front_2, value);
	}

	inline static int32_t get_offset_of_back_3() { return static_cast<int32_t>(offsetof(CUI_inventory_paralax_t1496440902, ___back_3)); }
	inline Transform_t1659122786 * get_back_3() const { return ___back_3; }
	inline Transform_t1659122786 ** get_address_of_back_3() { return &___back_3; }
	inline void set_back_3(Transform_t1659122786 * value)
	{
		___back_3 = value;
		Il2CppCodeGenWriteBarrier(&___back_3, value);
	}

	inline static int32_t get_offset_of_initFG_4() { return static_cast<int32_t>(offsetof(CUI_inventory_paralax_t1496440902, ___initFG_4)); }
	inline Vector3_t4282066566  get_initFG_4() const { return ___initFG_4; }
	inline Vector3_t4282066566 * get_address_of_initFG_4() { return &___initFG_4; }
	inline void set_initFG_4(Vector3_t4282066566  value)
	{
		___initFG_4 = value;
	}

	inline static int32_t get_offset_of_initBG_5() { return static_cast<int32_t>(offsetof(CUI_inventory_paralax_t1496440902, ___initBG_5)); }
	inline Vector3_t4282066566  get_initBG_5() const { return ___initBG_5; }
	inline Vector3_t4282066566 * get_address_of_initBG_5() { return &___initBG_5; }
	inline void set_initBG_5(Vector3_t4282066566  value)
	{
		___initBG_5 = value;
	}

	inline static int32_t get_offset_of_change_6() { return static_cast<int32_t>(offsetof(CUI_inventory_paralax_t1496440902, ___change_6)); }
	inline float get_change_6() const { return ___change_6; }
	inline float* get_address_of_change_6() { return &___change_6; }
	inline void set_change_6(float value)
	{
		___change_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
