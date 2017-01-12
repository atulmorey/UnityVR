#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;
// System.Collections.Generic.List`1<ScreenFadeControl>
struct List_1_t86239717;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFader
struct  ScreenFader_t1601131594  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean ScreenFader::fadeIn
	bool ___fadeIn_2;
	// System.Single ScreenFader::fadeTime
	float ___fadeTime_3;
	// UnityEngine.Color ScreenFader::fadeColor
	Color_t4194546905  ___fadeColor_4;
	// UnityEngine.Material ScreenFader::fadeMaterial
	Material_t3870600107 * ___fadeMaterial_5;
	// System.Boolean ScreenFader::faded
	bool ___faded_6;
	// System.Boolean ScreenFader::lastFadeIn
	bool ___lastFadeIn_7;
	// System.Collections.Generic.List`1<ScreenFadeControl> ScreenFader::fadeControls
	List_1_t86239717 * ___fadeControls_8;

public:
	inline static int32_t get_offset_of_fadeIn_2() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___fadeIn_2)); }
	inline bool get_fadeIn_2() const { return ___fadeIn_2; }
	inline bool* get_address_of_fadeIn_2() { return &___fadeIn_2; }
	inline void set_fadeIn_2(bool value)
	{
		___fadeIn_2 = value;
	}

	inline static int32_t get_offset_of_fadeTime_3() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___fadeTime_3)); }
	inline float get_fadeTime_3() const { return ___fadeTime_3; }
	inline float* get_address_of_fadeTime_3() { return &___fadeTime_3; }
	inline void set_fadeTime_3(float value)
	{
		___fadeTime_3 = value;
	}

	inline static int32_t get_offset_of_fadeColor_4() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___fadeColor_4)); }
	inline Color_t4194546905  get_fadeColor_4() const { return ___fadeColor_4; }
	inline Color_t4194546905 * get_address_of_fadeColor_4() { return &___fadeColor_4; }
	inline void set_fadeColor_4(Color_t4194546905  value)
	{
		___fadeColor_4 = value;
	}

	inline static int32_t get_offset_of_fadeMaterial_5() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___fadeMaterial_5)); }
	inline Material_t3870600107 * get_fadeMaterial_5() const { return ___fadeMaterial_5; }
	inline Material_t3870600107 ** get_address_of_fadeMaterial_5() { return &___fadeMaterial_5; }
	inline void set_fadeMaterial_5(Material_t3870600107 * value)
	{
		___fadeMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___fadeMaterial_5, value);
	}

	inline static int32_t get_offset_of_faded_6() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___faded_6)); }
	inline bool get_faded_6() const { return ___faded_6; }
	inline bool* get_address_of_faded_6() { return &___faded_6; }
	inline void set_faded_6(bool value)
	{
		___faded_6 = value;
	}

	inline static int32_t get_offset_of_lastFadeIn_7() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___lastFadeIn_7)); }
	inline bool get_lastFadeIn_7() const { return ___lastFadeIn_7; }
	inline bool* get_address_of_lastFadeIn_7() { return &___lastFadeIn_7; }
	inline void set_lastFadeIn_7(bool value)
	{
		___lastFadeIn_7 = value;
	}

	inline static int32_t get_offset_of_fadeControls_8() { return static_cast<int32_t>(offsetof(ScreenFader_t1601131594, ___fadeControls_8)); }
	inline List_1_t86239717 * get_fadeControls_8() const { return ___fadeControls_8; }
	inline List_1_t86239717 ** get_address_of_fadeControls_8() { return &___fadeControls_8; }
	inline void set_fadeControls_8(List_1_t86239717 * value)
	{
		___fadeControls_8 = value;
		Il2CppCodeGenWriteBarrier(&___fadeControls_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
