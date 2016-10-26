#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRCubemapCapture
struct  OVRCubemapCapture_t3921300156  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean OVRCubemapCapture::autoTriggerAfterLaunch
	bool ___autoTriggerAfterLaunch_2;
	// System.Single OVRCubemapCapture::autoTriggerDelay
	float ___autoTriggerDelay_3;
	// System.Single OVRCubemapCapture::autoTriggerElapse
	float ___autoTriggerElapse_4;
	// UnityEngine.KeyCode OVRCubemapCapture::triggeredByKey
	int32_t ___triggeredByKey_5;
	// System.String OVRCubemapCapture::pathName
	String_t* ___pathName_6;
	// System.Int32 OVRCubemapCapture::cubemapSize
	int32_t ___cubemapSize_7;

public:
	inline static int32_t get_offset_of_autoTriggerAfterLaunch_2() { return static_cast<int32_t>(offsetof(OVRCubemapCapture_t3921300156, ___autoTriggerAfterLaunch_2)); }
	inline bool get_autoTriggerAfterLaunch_2() const { return ___autoTriggerAfterLaunch_2; }
	inline bool* get_address_of_autoTriggerAfterLaunch_2() { return &___autoTriggerAfterLaunch_2; }
	inline void set_autoTriggerAfterLaunch_2(bool value)
	{
		___autoTriggerAfterLaunch_2 = value;
	}

	inline static int32_t get_offset_of_autoTriggerDelay_3() { return static_cast<int32_t>(offsetof(OVRCubemapCapture_t3921300156, ___autoTriggerDelay_3)); }
	inline float get_autoTriggerDelay_3() const { return ___autoTriggerDelay_3; }
	inline float* get_address_of_autoTriggerDelay_3() { return &___autoTriggerDelay_3; }
	inline void set_autoTriggerDelay_3(float value)
	{
		___autoTriggerDelay_3 = value;
	}

	inline static int32_t get_offset_of_autoTriggerElapse_4() { return static_cast<int32_t>(offsetof(OVRCubemapCapture_t3921300156, ___autoTriggerElapse_4)); }
	inline float get_autoTriggerElapse_4() const { return ___autoTriggerElapse_4; }
	inline float* get_address_of_autoTriggerElapse_4() { return &___autoTriggerElapse_4; }
	inline void set_autoTriggerElapse_4(float value)
	{
		___autoTriggerElapse_4 = value;
	}

	inline static int32_t get_offset_of_triggeredByKey_5() { return static_cast<int32_t>(offsetof(OVRCubemapCapture_t3921300156, ___triggeredByKey_5)); }
	inline int32_t get_triggeredByKey_5() const { return ___triggeredByKey_5; }
	inline int32_t* get_address_of_triggeredByKey_5() { return &___triggeredByKey_5; }
	inline void set_triggeredByKey_5(int32_t value)
	{
		___triggeredByKey_5 = value;
	}

	inline static int32_t get_offset_of_pathName_6() { return static_cast<int32_t>(offsetof(OVRCubemapCapture_t3921300156, ___pathName_6)); }
	inline String_t* get_pathName_6() const { return ___pathName_6; }
	inline String_t** get_address_of_pathName_6() { return &___pathName_6; }
	inline void set_pathName_6(String_t* value)
	{
		___pathName_6 = value;
		Il2CppCodeGenWriteBarrier(&___pathName_6, value);
	}

	inline static int32_t get_offset_of_cubemapSize_7() { return static_cast<int32_t>(offsetof(OVRCubemapCapture_t3921300156, ___cubemapSize_7)); }
	inline int32_t get_cubemapSize_7() const { return ___cubemapSize_7; }
	inline int32_t* get_address_of_cubemapSize_7() { return &___cubemapSize_7; }
	inline void set_cubemapSize_7(int32_t value)
	{
		___cubemapSize_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
