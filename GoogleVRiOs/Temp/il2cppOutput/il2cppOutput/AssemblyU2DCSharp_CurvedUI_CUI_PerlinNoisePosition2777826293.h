#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_PerlinNoisePosition
struct  CUI_PerlinNoisePosition_t2777826293  : public MonoBehaviour_t667441552
{
public:
	// System.Single CurvedUI.CUI_PerlinNoisePosition::samplingSpeed
	float ___samplingSpeed_2;
	// UnityEngine.Vector2 CurvedUI.CUI_PerlinNoisePosition::Range
	Vector2_t4282066565  ___Range_3;
	// UnityEngine.RectTransform CurvedUI.CUI_PerlinNoisePosition::rectie
	RectTransform_t972643934 * ___rectie_4;

public:
	inline static int32_t get_offset_of_samplingSpeed_2() { return static_cast<int32_t>(offsetof(CUI_PerlinNoisePosition_t2777826293, ___samplingSpeed_2)); }
	inline float get_samplingSpeed_2() const { return ___samplingSpeed_2; }
	inline float* get_address_of_samplingSpeed_2() { return &___samplingSpeed_2; }
	inline void set_samplingSpeed_2(float value)
	{
		___samplingSpeed_2 = value;
	}

	inline static int32_t get_offset_of_Range_3() { return static_cast<int32_t>(offsetof(CUI_PerlinNoisePosition_t2777826293, ___Range_3)); }
	inline Vector2_t4282066565  get_Range_3() const { return ___Range_3; }
	inline Vector2_t4282066565 * get_address_of_Range_3() { return &___Range_3; }
	inline void set_Range_3(Vector2_t4282066565  value)
	{
		___Range_3 = value;
	}

	inline static int32_t get_offset_of_rectie_4() { return static_cast<int32_t>(offsetof(CUI_PerlinNoisePosition_t2777826293, ___rectie_4)); }
	inline RectTransform_t972643934 * get_rectie_4() const { return ___rectie_4; }
	inline RectTransform_t972643934 ** get_address_of_rectie_4() { return &___rectie_4; }
	inline void set_rectie_4(RectTransform_t972643934 * value)
	{
		___rectie_4 = value;
		Il2CppCodeGenWriteBarrier(&___rectie_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
