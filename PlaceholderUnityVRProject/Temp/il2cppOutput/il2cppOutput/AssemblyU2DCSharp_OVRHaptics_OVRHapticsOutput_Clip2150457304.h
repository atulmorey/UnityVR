#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OVRHapticsClip
struct OVRHapticsClip_t1826051407;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker
struct  ClipPlaybackTracker_t2150457304  : public Il2CppObject
{
public:
	// System.Int32 OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker::<ReadCount>k__BackingField
	int32_t ___U3CReadCountU3Ek__BackingField_0;
	// OVRHapticsClip OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker::<Clip>k__BackingField
	OVRHapticsClip_t1826051407 * ___U3CClipU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CReadCountU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ClipPlaybackTracker_t2150457304, ___U3CReadCountU3Ek__BackingField_0)); }
	inline int32_t get_U3CReadCountU3Ek__BackingField_0() const { return ___U3CReadCountU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CReadCountU3Ek__BackingField_0() { return &___U3CReadCountU3Ek__BackingField_0; }
	inline void set_U3CReadCountU3Ek__BackingField_0(int32_t value)
	{
		___U3CReadCountU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CClipU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ClipPlaybackTracker_t2150457304, ___U3CClipU3Ek__BackingField_1)); }
	inline OVRHapticsClip_t1826051407 * get_U3CClipU3Ek__BackingField_1() const { return ___U3CClipU3Ek__BackingField_1; }
	inline OVRHapticsClip_t1826051407 ** get_address_of_U3CClipU3Ek__BackingField_1() { return &___U3CClipU3Ek__BackingField_1; }
	inline void set_U3CClipU3Ek__BackingField_1(OVRHapticsClip_t1826051407 * value)
	{
		___U3CClipU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CClipU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
