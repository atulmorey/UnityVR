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

// CUI_touchpad
struct  CUI_touchpad_t4041943580  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.RectTransform CUI_touchpad::container
	RectTransform_t972643934 * ___container_2;
	// UnityEngine.RectTransform CUI_touchpad::dot
	RectTransform_t972643934 * ___dot_3;

public:
	inline static int32_t get_offset_of_container_2() { return static_cast<int32_t>(offsetof(CUI_touchpad_t4041943580, ___container_2)); }
	inline RectTransform_t972643934 * get_container_2() const { return ___container_2; }
	inline RectTransform_t972643934 ** get_address_of_container_2() { return &___container_2; }
	inline void set_container_2(RectTransform_t972643934 * value)
	{
		___container_2 = value;
		Il2CppCodeGenWriteBarrier(&___container_2, value);
	}

	inline static int32_t get_offset_of_dot_3() { return static_cast<int32_t>(offsetof(CUI_touchpad_t4041943580, ___dot_3)); }
	inline RectTransform_t972643934 * get_dot_3() const { return ___dot_3; }
	inline RectTransform_t972643934 ** get_address_of_dot_3() { return &___dot_3; }
	inline void set_dot_3(RectTransform_t972643934 * value)
	{
		___dot_3 = value;
		Il2CppCodeGenWriteBarrier(&___dot_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
