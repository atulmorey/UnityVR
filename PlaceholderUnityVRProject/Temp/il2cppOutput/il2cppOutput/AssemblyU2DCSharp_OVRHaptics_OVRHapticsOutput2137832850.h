#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker>
struct List_1_t1519578436;
// OVRHaptics/OVRHapticsOutput/NativeBuffer
struct NativeBuffer_t277332966;
// OVRHapticsClip
struct OVRHapticsClip_t1826051407;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRHaptics/OVRHapticsOutput
struct  OVRHapticsOutput_t2137832850  : public Il2CppObject
{
public:
	// System.Boolean OVRHaptics/OVRHapticsOutput::m_lowLatencyMode
	bool ___m_lowLatencyMode_0;
	// System.Int32 OVRHaptics/OVRHapticsOutput::m_prevSamplesQueued
	int32_t ___m_prevSamplesQueued_1;
	// System.Single OVRHaptics/OVRHapticsOutput::m_prevSamplesQueuedTime
	float ___m_prevSamplesQueuedTime_2;
	// System.Int32 OVRHaptics/OVRHapticsOutput::m_numPredictionHits
	int32_t ___m_numPredictionHits_3;
	// System.Int32 OVRHaptics/OVRHapticsOutput::m_numPredictionMisses
	int32_t ___m_numPredictionMisses_4;
	// System.Int32 OVRHaptics/OVRHapticsOutput::m_numUnderruns
	int32_t ___m_numUnderruns_5;
	// System.Collections.Generic.List`1<OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker> OVRHaptics/OVRHapticsOutput::m_pendingClips
	List_1_t1519578436 * ___m_pendingClips_6;
	// System.UInt32 OVRHaptics/OVRHapticsOutput::m_controller
	uint32_t ___m_controller_7;
	// OVRHaptics/OVRHapticsOutput/NativeBuffer OVRHaptics/OVRHapticsOutput::m_nativeBuffer
	NativeBuffer_t277332966 * ___m_nativeBuffer_8;
	// OVRHapticsClip OVRHaptics/OVRHapticsOutput::m_paddingClip
	OVRHapticsClip_t1826051407 * ___m_paddingClip_9;

public:
	inline static int32_t get_offset_of_m_lowLatencyMode_0() { return static_cast<int32_t>(offsetof(OVRHapticsOutput_t2137832850, ___m_lowLatencyMode_0)); }
	inline bool get_m_lowLatencyMode_0() const { return ___m_lowLatencyMode_0; }
	inline bool* get_address_of_m_lowLatencyMode_0() { return &___m_lowLatencyMode_0; }
	inline void set_m_lowLatencyMode_0(bool value)
	{
		___m_lowLatencyMode_0 = value;
	}

	inline static int32_t get_offset_of_m_prevSamplesQueued_1() { return static_cast<int32_t>(offsetof(OVRHapticsOutput_t2137832850, ___m_prevSamplesQueued_1)); }
	inline int32_t get_m_prevSamplesQueued_1() const { return ___m_prevSamplesQueued_1; }
	inline int32_t* get_address_of_m_prevSamplesQueued_1() { return &___m_prevSamplesQueued_1; }
	inline void set_m_prevSamplesQueued_1(int32_t value)
	{
		___m_prevSamplesQueued_1 = value;
	}

	inline static int32_t get_offset_of_m_prevSamplesQueuedTime_2() { return static_cast<int32_t>(offsetof(OVRHapticsOutput_t2137832850, ___m_prevSamplesQueuedTime_2)); }
	inline float get_m_prevSamplesQueuedTime_2() const { return ___m_prevSamplesQueuedTime_2; }
	inline float* get_address_of_m_prevSamplesQueuedTime_2() { return &___m_prevSamplesQueuedTime_2; }
	inline void set_m_prevSamplesQueuedTime_2(float value)
	{
		___m_prevSamplesQueuedTime_2 = value;
	}

	inline static int32_t get_offset_of_m_numPredictionHits_3() { return static_cast<int32_t>(offsetof(OVRHapticsOutput_t2137832850, ___m_numPredictionHits_3)); }
	inline int32_t get_m_numPredictionHits_3() const { return ___m_numPredictionHits_3; }
	inline int32_t* get_address_of_m_numPredictionHits_3() { return &___m_numPredictionHits_3; }
	inline void set_m_numPredictionHits_3(int32_t value)
	{
		___m_numPredictionHits_3 = value;
	}

	inline static int32_t get_offset_of_m_numPredictionMisses_4() { return static_cast<int32_t>(offsetof(OVRHapticsOutput_t2137832850, ___m_numPredictionMisses_4)); }
	inline int32_t get_m_numPredictionMisses_4() const { return ___m_numPredictionMisses_4; }
	inline int32_t* get_address_of_m_numPredictionMisses_4() { return &___m_numPredictionMisses_4; }
	inline void set_m_numPredictionMisses_4(int32_t value)
	{
		___m_numPredictionMisses_4 = value;
	}

	inline static int32_t get_offset_of_m_numUnderruns_5() { return static_cast<int32_t>(offsetof(OVRHapticsOutput_t2137832850, ___m_numUnderruns_5)); }
	inline int32_t get_m_numUnderruns_5() const { return ___m_numUnderruns_5; }
	inline int32_t* get_address_of_m_numUnderruns_5() { return &___m_numUnderruns_5; }
	inline void set_m_numUnderruns_5(int32_t value)
	{
		___m_numUnderruns_5 = value;
	}

	inline static int32_t get_offset_of_m_pendingClips_6() { return static_cast<int32_t>(offsetof(OVRHapticsOutput_t2137832850, ___m_pendingClips_6)); }
	inline List_1_t1519578436 * get_m_pendingClips_6() const { return ___m_pendingClips_6; }
	inline List_1_t1519578436 ** get_address_of_m_pendingClips_6() { return &___m_pendingClips_6; }
	inline void set_m_pendingClips_6(List_1_t1519578436 * value)
	{
		___m_pendingClips_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_pendingClips_6, value);
	}

	inline static int32_t get_offset_of_m_controller_7() { return static_cast<int32_t>(offsetof(OVRHapticsOutput_t2137832850, ___m_controller_7)); }
	inline uint32_t get_m_controller_7() const { return ___m_controller_7; }
	inline uint32_t* get_address_of_m_controller_7() { return &___m_controller_7; }
	inline void set_m_controller_7(uint32_t value)
	{
		___m_controller_7 = value;
	}

	inline static int32_t get_offset_of_m_nativeBuffer_8() { return static_cast<int32_t>(offsetof(OVRHapticsOutput_t2137832850, ___m_nativeBuffer_8)); }
	inline NativeBuffer_t277332966 * get_m_nativeBuffer_8() const { return ___m_nativeBuffer_8; }
	inline NativeBuffer_t277332966 ** get_address_of_m_nativeBuffer_8() { return &___m_nativeBuffer_8; }
	inline void set_m_nativeBuffer_8(NativeBuffer_t277332966 * value)
	{
		___m_nativeBuffer_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_nativeBuffer_8, value);
	}

	inline static int32_t get_offset_of_m_paddingClip_9() { return static_cast<int32_t>(offsetof(OVRHapticsOutput_t2137832850, ___m_paddingClip_9)); }
	inline OVRHapticsClip_t1826051407 * get_m_paddingClip_9() const { return ___m_paddingClip_9; }
	inline OVRHapticsClip_t1826051407 ** get_address_of_m_paddingClip_9() { return &___m_paddingClip_9; }
	inline void set_m_paddingClip_9(OVRHapticsClip_t1826051407 * value)
	{
		___m_paddingClip_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_paddingClip_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
