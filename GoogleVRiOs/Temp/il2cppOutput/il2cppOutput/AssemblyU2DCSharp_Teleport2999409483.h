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
// GameManager
struct GameManager_t2369589051;
// ScreenFader
struct ScreenFader_t1601131594;
// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Teleport
struct  Teleport_t2999409483  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Teleport::MainCamera
	GameObject_t3674682005 * ___MainCamera_2;
	// System.Boolean Teleport::isTriggered
	bool ___isTriggered_3;
	// UnityEngine.Vector3 Teleport::_cubeStartingPos
	Vector3_t4282066566  ____cubeStartingPos_4;
	// UnityEngine.Vector3 Teleport::_mainCamStartingPos
	Vector3_t4282066566  ____mainCamStartingPos_5;
	// System.Single Teleport::_portSpeed
	float ____portSpeed_6;
	// GameManager Teleport::_gameManager
	GameManager_t2369589051 * ____gameManager_7;
	// ScreenFader Teleport::_screenFader
	ScreenFader_t1601131594 * ____screenFader_8;
	// System.Single Teleport::_camFadeTime
	float ____camFadeTime_9;
	// UnityEngine.Material Teleport::_currentMat
	Material_t3870600107 * ____currentMat_10;
	// System.Int32 Teleport::_tweenID
	int32_t ____tweenID_11;
	// System.Single Teleport::_gazeTimer
	float ____gazeTimer_12;

public:
	inline static int32_t get_offset_of_MainCamera_2() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ___MainCamera_2)); }
	inline GameObject_t3674682005 * get_MainCamera_2() const { return ___MainCamera_2; }
	inline GameObject_t3674682005 ** get_address_of_MainCamera_2() { return &___MainCamera_2; }
	inline void set_MainCamera_2(GameObject_t3674682005 * value)
	{
		___MainCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___MainCamera_2, value);
	}

	inline static int32_t get_offset_of_isTriggered_3() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ___isTriggered_3)); }
	inline bool get_isTriggered_3() const { return ___isTriggered_3; }
	inline bool* get_address_of_isTriggered_3() { return &___isTriggered_3; }
	inline void set_isTriggered_3(bool value)
	{
		___isTriggered_3 = value;
	}

	inline static int32_t get_offset_of__cubeStartingPos_4() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____cubeStartingPos_4)); }
	inline Vector3_t4282066566  get__cubeStartingPos_4() const { return ____cubeStartingPos_4; }
	inline Vector3_t4282066566 * get_address_of__cubeStartingPos_4() { return &____cubeStartingPos_4; }
	inline void set__cubeStartingPos_4(Vector3_t4282066566  value)
	{
		____cubeStartingPos_4 = value;
	}

	inline static int32_t get_offset_of__mainCamStartingPos_5() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____mainCamStartingPos_5)); }
	inline Vector3_t4282066566  get__mainCamStartingPos_5() const { return ____mainCamStartingPos_5; }
	inline Vector3_t4282066566 * get_address_of__mainCamStartingPos_5() { return &____mainCamStartingPos_5; }
	inline void set__mainCamStartingPos_5(Vector3_t4282066566  value)
	{
		____mainCamStartingPos_5 = value;
	}

	inline static int32_t get_offset_of__portSpeed_6() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____portSpeed_6)); }
	inline float get__portSpeed_6() const { return ____portSpeed_6; }
	inline float* get_address_of__portSpeed_6() { return &____portSpeed_6; }
	inline void set__portSpeed_6(float value)
	{
		____portSpeed_6 = value;
	}

	inline static int32_t get_offset_of__gameManager_7() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____gameManager_7)); }
	inline GameManager_t2369589051 * get__gameManager_7() const { return ____gameManager_7; }
	inline GameManager_t2369589051 ** get_address_of__gameManager_7() { return &____gameManager_7; }
	inline void set__gameManager_7(GameManager_t2369589051 * value)
	{
		____gameManager_7 = value;
		Il2CppCodeGenWriteBarrier(&____gameManager_7, value);
	}

	inline static int32_t get_offset_of__screenFader_8() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____screenFader_8)); }
	inline ScreenFader_t1601131594 * get__screenFader_8() const { return ____screenFader_8; }
	inline ScreenFader_t1601131594 ** get_address_of__screenFader_8() { return &____screenFader_8; }
	inline void set__screenFader_8(ScreenFader_t1601131594 * value)
	{
		____screenFader_8 = value;
		Il2CppCodeGenWriteBarrier(&____screenFader_8, value);
	}

	inline static int32_t get_offset_of__camFadeTime_9() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____camFadeTime_9)); }
	inline float get__camFadeTime_9() const { return ____camFadeTime_9; }
	inline float* get_address_of__camFadeTime_9() { return &____camFadeTime_9; }
	inline void set__camFadeTime_9(float value)
	{
		____camFadeTime_9 = value;
	}

	inline static int32_t get_offset_of__currentMat_10() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____currentMat_10)); }
	inline Material_t3870600107 * get__currentMat_10() const { return ____currentMat_10; }
	inline Material_t3870600107 ** get_address_of__currentMat_10() { return &____currentMat_10; }
	inline void set__currentMat_10(Material_t3870600107 * value)
	{
		____currentMat_10 = value;
		Il2CppCodeGenWriteBarrier(&____currentMat_10, value);
	}

	inline static int32_t get_offset_of__tweenID_11() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____tweenID_11)); }
	inline int32_t get__tweenID_11() const { return ____tweenID_11; }
	inline int32_t* get_address_of__tweenID_11() { return &____tweenID_11; }
	inline void set__tweenID_11(int32_t value)
	{
		____tweenID_11 = value;
	}

	inline static int32_t get_offset_of__gazeTimer_12() { return static_cast<int32_t>(offsetof(Teleport_t2999409483, ____gazeTimer_12)); }
	inline float get__gazeTimer_12() const { return ____gazeTimer_12; }
	inline float* get_address_of__gazeTimer_12() { return &____gazeTimer_12; }
	inline void set__gazeTimer_12(float value)
	{
		____gazeTimer_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
