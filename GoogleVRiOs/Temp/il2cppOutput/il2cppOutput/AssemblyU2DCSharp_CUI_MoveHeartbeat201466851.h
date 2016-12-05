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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUI_MoveHeartbeat
struct  CUI_MoveHeartbeat_t201466851  : public MonoBehaviour_t667441552
{
public:
	// System.Single CUI_MoveHeartbeat::speed
	float ___speed_2;
	// System.Boolean CUI_MoveHeartbeat::wrapAroundParent
	bool ___wrapAroundParent_3;
	// UnityEngine.RectTransform CUI_MoveHeartbeat::rectie
	RectTransform_t972643934 * ___rectie_4;
	// UnityEngine.RectTransform CUI_MoveHeartbeat::parentRectie
	RectTransform_t972643934 * ___parentRectie_5;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(CUI_MoveHeartbeat_t201466851, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_wrapAroundParent_3() { return static_cast<int32_t>(offsetof(CUI_MoveHeartbeat_t201466851, ___wrapAroundParent_3)); }
	inline bool get_wrapAroundParent_3() const { return ___wrapAroundParent_3; }
	inline bool* get_address_of_wrapAroundParent_3() { return &___wrapAroundParent_3; }
	inline void set_wrapAroundParent_3(bool value)
	{
		___wrapAroundParent_3 = value;
	}

	inline static int32_t get_offset_of_rectie_4() { return static_cast<int32_t>(offsetof(CUI_MoveHeartbeat_t201466851, ___rectie_4)); }
	inline RectTransform_t972643934 * get_rectie_4() const { return ___rectie_4; }
	inline RectTransform_t972643934 ** get_address_of_rectie_4() { return &___rectie_4; }
	inline void set_rectie_4(RectTransform_t972643934 * value)
	{
		___rectie_4 = value;
		Il2CppCodeGenWriteBarrier(&___rectie_4, value);
	}

	inline static int32_t get_offset_of_parentRectie_5() { return static_cast<int32_t>(offsetof(CUI_MoveHeartbeat_t201466851, ___parentRectie_5)); }
	inline RectTransform_t972643934 * get_parentRectie_5() const { return ___parentRectie_5; }
	inline RectTransform_t972643934 ** get_address_of_parentRectie_5() { return &___parentRectie_5; }
	inline void set_parentRectie_5(RectTransform_t972643934 * value)
	{
		___parentRectie_5 = value;
		Il2CppCodeGenWriteBarrier(&___parentRectie_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
