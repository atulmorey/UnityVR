#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_ZChangeOnHover
struct  CUI_ZChangeOnHover_t4272441587  : public MonoBehaviour_t667441552
{
public:
	// System.Single CurvedUI.CUI_ZChangeOnHover::restZ
	float ___restZ_2;
	// System.Single CurvedUI.CUI_ZChangeOnHover::OnHoverZ
	float ___OnHoverZ_3;
	// System.Boolean CurvedUI.CUI_ZChangeOnHover::Zoomed
	bool ___Zoomed_4;

public:
	inline static int32_t get_offset_of_restZ_2() { return static_cast<int32_t>(offsetof(CUI_ZChangeOnHover_t4272441587, ___restZ_2)); }
	inline float get_restZ_2() const { return ___restZ_2; }
	inline float* get_address_of_restZ_2() { return &___restZ_2; }
	inline void set_restZ_2(float value)
	{
		___restZ_2 = value;
	}

	inline static int32_t get_offset_of_OnHoverZ_3() { return static_cast<int32_t>(offsetof(CUI_ZChangeOnHover_t4272441587, ___OnHoverZ_3)); }
	inline float get_OnHoverZ_3() const { return ___OnHoverZ_3; }
	inline float* get_address_of_OnHoverZ_3() { return &___OnHoverZ_3; }
	inline void set_OnHoverZ_3(float value)
	{
		___OnHoverZ_3 = value;
	}

	inline static int32_t get_offset_of_Zoomed_4() { return static_cast<int32_t>(offsetof(CUI_ZChangeOnHover_t4272441587, ___Zoomed_4)); }
	inline bool get_Zoomed_4() const { return ___Zoomed_4; }
	inline bool* get_address_of_Zoomed_4() { return &___Zoomed_4; }
	inline void set_Zoomed_4(bool value)
	{
		___Zoomed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
