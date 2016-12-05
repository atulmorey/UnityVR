#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFlyBy
struct  CameraFlyBy_t3703728101  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CameraFlyBy::MainCamera
	GameObject_t3674682005 * ___MainCamera_2;
	// UnityEngine.Transform[] CameraFlyBy::CameraFlyByPoints
	TransformU5BU5D_t3792884695* ___CameraFlyByPoints_3;
	// System.Single CameraFlyBy::_flyByTime
	float ____flyByTime_4;

public:
	inline static int32_t get_offset_of_MainCamera_2() { return static_cast<int32_t>(offsetof(CameraFlyBy_t3703728101, ___MainCamera_2)); }
	inline GameObject_t3674682005 * get_MainCamera_2() const { return ___MainCamera_2; }
	inline GameObject_t3674682005 ** get_address_of_MainCamera_2() { return &___MainCamera_2; }
	inline void set_MainCamera_2(GameObject_t3674682005 * value)
	{
		___MainCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___MainCamera_2, value);
	}

	inline static int32_t get_offset_of_CameraFlyByPoints_3() { return static_cast<int32_t>(offsetof(CameraFlyBy_t3703728101, ___CameraFlyByPoints_3)); }
	inline TransformU5BU5D_t3792884695* get_CameraFlyByPoints_3() const { return ___CameraFlyByPoints_3; }
	inline TransformU5BU5D_t3792884695** get_address_of_CameraFlyByPoints_3() { return &___CameraFlyByPoints_3; }
	inline void set_CameraFlyByPoints_3(TransformU5BU5D_t3792884695* value)
	{
		___CameraFlyByPoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___CameraFlyByPoints_3, value);
	}

	inline static int32_t get_offset_of__flyByTime_4() { return static_cast<int32_t>(offsetof(CameraFlyBy_t3703728101, ____flyByTime_4)); }
	inline float get__flyByTime_4() const { return ____flyByTime_4; }
	inline float* get_address_of__flyByTime_4() { return &____flyByTime_4; }
	inline void set__flyByTime_4(float value)
	{
		____flyByTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
