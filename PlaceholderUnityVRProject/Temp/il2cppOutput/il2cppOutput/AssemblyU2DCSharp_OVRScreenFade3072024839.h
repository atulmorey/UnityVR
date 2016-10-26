#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.YieldInstruction
struct YieldInstruction_t3462875981;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRScreenFade
struct  OVRScreenFade_t3072024839  : public MonoBehaviour_t1158329972
{
public:
	// System.Single OVRScreenFade::fadeTime
	float ___fadeTime_2;
	// UnityEngine.Color OVRScreenFade::fadeColor
	Color_t2020392075  ___fadeColor_3;
	// UnityEngine.Material OVRScreenFade::fadeMaterial
	Material_t193706927 * ___fadeMaterial_4;
	// System.Boolean OVRScreenFade::isFading
	bool ___isFading_5;
	// UnityEngine.YieldInstruction OVRScreenFade::fadeInstruction
	YieldInstruction_t3462875981 * ___fadeInstruction_6;

public:
	inline static int32_t get_offset_of_fadeTime_2() { return static_cast<int32_t>(offsetof(OVRScreenFade_t3072024839, ___fadeTime_2)); }
	inline float get_fadeTime_2() const { return ___fadeTime_2; }
	inline float* get_address_of_fadeTime_2() { return &___fadeTime_2; }
	inline void set_fadeTime_2(float value)
	{
		___fadeTime_2 = value;
	}

	inline static int32_t get_offset_of_fadeColor_3() { return static_cast<int32_t>(offsetof(OVRScreenFade_t3072024839, ___fadeColor_3)); }
	inline Color_t2020392075  get_fadeColor_3() const { return ___fadeColor_3; }
	inline Color_t2020392075 * get_address_of_fadeColor_3() { return &___fadeColor_3; }
	inline void set_fadeColor_3(Color_t2020392075  value)
	{
		___fadeColor_3 = value;
	}

	inline static int32_t get_offset_of_fadeMaterial_4() { return static_cast<int32_t>(offsetof(OVRScreenFade_t3072024839, ___fadeMaterial_4)); }
	inline Material_t193706927 * get_fadeMaterial_4() const { return ___fadeMaterial_4; }
	inline Material_t193706927 ** get_address_of_fadeMaterial_4() { return &___fadeMaterial_4; }
	inline void set_fadeMaterial_4(Material_t193706927 * value)
	{
		___fadeMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___fadeMaterial_4, value);
	}

	inline static int32_t get_offset_of_isFading_5() { return static_cast<int32_t>(offsetof(OVRScreenFade_t3072024839, ___isFading_5)); }
	inline bool get_isFading_5() const { return ___isFading_5; }
	inline bool* get_address_of_isFading_5() { return &___isFading_5; }
	inline void set_isFading_5(bool value)
	{
		___isFading_5 = value;
	}

	inline static int32_t get_offset_of_fadeInstruction_6() { return static_cast<int32_t>(offsetof(OVRScreenFade_t3072024839, ___fadeInstruction_6)); }
	inline YieldInstruction_t3462875981 * get_fadeInstruction_6() const { return ___fadeInstruction_6; }
	inline YieldInstruction_t3462875981 ** get_address_of_fadeInstruction_6() { return &___fadeInstruction_6; }
	inline void set_fadeInstruction_6(YieldInstruction_t3462875981 * value)
	{
		___fadeInstruction_6 = value;
		Il2CppCodeGenWriteBarrier(&___fadeInstruction_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
