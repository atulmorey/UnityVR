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
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SequenceManager
struct  SequenceManager_t2814565516  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject SequenceManager::MainCam
	GameObject_t3674682005 * ___MainCam_2;
	// UnityEngine.Transform SequenceManager::IntroStartTr
	Transform_t1659122786 * ___IntroStartTr_3;
	// UnityEngine.Transform SequenceManager::IntroEndTr
	Transform_t1659122786 * ___IntroEndTr_4;
	// System.Single SequenceManager::IntroTimeInSec
	float ___IntroTimeInSec_5;

public:
	inline static int32_t get_offset_of_MainCam_2() { return static_cast<int32_t>(offsetof(SequenceManager_t2814565516, ___MainCam_2)); }
	inline GameObject_t3674682005 * get_MainCam_2() const { return ___MainCam_2; }
	inline GameObject_t3674682005 ** get_address_of_MainCam_2() { return &___MainCam_2; }
	inline void set_MainCam_2(GameObject_t3674682005 * value)
	{
		___MainCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___MainCam_2, value);
	}

	inline static int32_t get_offset_of_IntroStartTr_3() { return static_cast<int32_t>(offsetof(SequenceManager_t2814565516, ___IntroStartTr_3)); }
	inline Transform_t1659122786 * get_IntroStartTr_3() const { return ___IntroStartTr_3; }
	inline Transform_t1659122786 ** get_address_of_IntroStartTr_3() { return &___IntroStartTr_3; }
	inline void set_IntroStartTr_3(Transform_t1659122786 * value)
	{
		___IntroStartTr_3 = value;
		Il2CppCodeGenWriteBarrier(&___IntroStartTr_3, value);
	}

	inline static int32_t get_offset_of_IntroEndTr_4() { return static_cast<int32_t>(offsetof(SequenceManager_t2814565516, ___IntroEndTr_4)); }
	inline Transform_t1659122786 * get_IntroEndTr_4() const { return ___IntroEndTr_4; }
	inline Transform_t1659122786 ** get_address_of_IntroEndTr_4() { return &___IntroEndTr_4; }
	inline void set_IntroEndTr_4(Transform_t1659122786 * value)
	{
		___IntroEndTr_4 = value;
		Il2CppCodeGenWriteBarrier(&___IntroEndTr_4, value);
	}

	inline static int32_t get_offset_of_IntroTimeInSec_5() { return static_cast<int32_t>(offsetof(SequenceManager_t2814565516, ___IntroTimeInSec_5)); }
	inline float get_IntroTimeInSec_5() const { return ___IntroTimeInSec_5; }
	inline float* get_address_of_IntroTimeInSec_5() { return &___IntroTimeInSec_5; }
	inline void set_IntroTimeInSec_5(float value)
	{
		___IntroTimeInSec_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
