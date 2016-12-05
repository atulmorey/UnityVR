#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUI_CameraRotationOnButtonHeld
struct  CUI_CameraRotationOnButtonHeld_t189964657  : public MonoBehaviour_t667441552
{
public:
	// System.Single CUI_CameraRotationOnButtonHeld::Sensitivity
	float ___Sensitivity_2;
	// UnityEngine.Vector3 CUI_CameraRotationOnButtonHeld::oldMousePos
	Vector3_t4282066566  ___oldMousePos_3;
	// System.Boolean CUI_CameraRotationOnButtonHeld::move
	bool ___move_4;

public:
	inline static int32_t get_offset_of_Sensitivity_2() { return static_cast<int32_t>(offsetof(CUI_CameraRotationOnButtonHeld_t189964657, ___Sensitivity_2)); }
	inline float get_Sensitivity_2() const { return ___Sensitivity_2; }
	inline float* get_address_of_Sensitivity_2() { return &___Sensitivity_2; }
	inline void set_Sensitivity_2(float value)
	{
		___Sensitivity_2 = value;
	}

	inline static int32_t get_offset_of_oldMousePos_3() { return static_cast<int32_t>(offsetof(CUI_CameraRotationOnButtonHeld_t189964657, ___oldMousePos_3)); }
	inline Vector3_t4282066566  get_oldMousePos_3() const { return ___oldMousePos_3; }
	inline Vector3_t4282066566 * get_address_of_oldMousePos_3() { return &___oldMousePos_3; }
	inline void set_oldMousePos_3(Vector3_t4282066566  value)
	{
		___oldMousePos_3 = value;
	}

	inline static int32_t get_offset_of_move_4() { return static_cast<int32_t>(offsetof(CUI_CameraRotationOnButtonHeld_t189964657, ___move_4)); }
	inline bool get_move_4() const { return ___move_4; }
	inline bool* get_address_of_move_4() { return &___move_4; }
	inline void set_move_4(bool value)
	{
		___move_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
