#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CurvedUI.CUI_CameraController
struct CUI_CameraController_t4178186209;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvedUI.CUI_CameraController
struct  CUI_CameraController_t4178186209  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform CurvedUI.CUI_CameraController::CameraObject
	Transform_t1659122786 * ___CameraObject_3;
	// System.Single CurvedUI.CUI_CameraController::rotationMargin
	float ___rotationMargin_4;

public:
	inline static int32_t get_offset_of_CameraObject_3() { return static_cast<int32_t>(offsetof(CUI_CameraController_t4178186209, ___CameraObject_3)); }
	inline Transform_t1659122786 * get_CameraObject_3() const { return ___CameraObject_3; }
	inline Transform_t1659122786 ** get_address_of_CameraObject_3() { return &___CameraObject_3; }
	inline void set_CameraObject_3(Transform_t1659122786 * value)
	{
		___CameraObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___CameraObject_3, value);
	}

	inline static int32_t get_offset_of_rotationMargin_4() { return static_cast<int32_t>(offsetof(CUI_CameraController_t4178186209, ___rotationMargin_4)); }
	inline float get_rotationMargin_4() const { return ___rotationMargin_4; }
	inline float* get_address_of_rotationMargin_4() { return &___rotationMargin_4; }
	inline void set_rotationMargin_4(float value)
	{
		___rotationMargin_4 = value;
	}
};

struct CUI_CameraController_t4178186209_StaticFields
{
public:
	// CurvedUI.CUI_CameraController CurvedUI.CUI_CameraController::instance
	CUI_CameraController_t4178186209 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(CUI_CameraController_t4178186209_StaticFields, ___instance_2)); }
	inline CUI_CameraController_t4178186209 * get_instance_2() const { return ___instance_2; }
	inline CUI_CameraController_t4178186209 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(CUI_CameraController_t4178186209 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
