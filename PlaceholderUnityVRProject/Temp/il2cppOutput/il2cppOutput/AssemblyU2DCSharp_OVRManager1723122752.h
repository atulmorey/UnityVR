#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OVRProfile
struct OVRProfile_t1138729578;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>
struct IEnumerable_1_t481588022;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;
// OVRManager
struct OVRManager_t1723122752;
// OVRDisplay
struct OVRDisplay_t839014655;
// OVRTracker
struct OVRTracker_t2380562897;
// OVRBoundary
struct OVRBoundary_t3841068229;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_OVRManager_TrackingOrigin2291850242.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRManager
struct  OVRManager_t1723122752  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean OVRManager::_isPaused
	bool ____isPaused_3;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Camera> OVRManager::disabledCameras
	Il2CppObject* ___disabledCameras_4;
	// System.Single OVRManager::prevTimeScale
	float ___prevTimeScale_5;
	// System.Boolean OVRManager::queueAhead
	bool ___queueAhead_12;
	// System.Boolean OVRManager::useRecommendedMSAALevel
	bool ___useRecommendedMSAALevel_13;
	// System.Boolean OVRManager::enableAdaptiveResolution
	bool ___enableAdaptiveResolution_14;
	// System.Single OVRManager::maxRenderScale
	float ___maxRenderScale_15;
	// System.Single OVRManager::minRenderScale
	float ___minRenderScale_16;
	// OVRManager/TrackingOrigin OVRManager::_trackingOriginType
	int32_t ____trackingOriginType_17;
	// System.Boolean OVRManager::usePositionTracking
	bool ___usePositionTracking_18;
	// System.Boolean OVRManager::useIPDInPositionTracking
	bool ___useIPDInPositionTracking_19;
	// System.Boolean OVRManager::resetTrackerOnLoad
	bool ___resetTrackerOnLoad_20;
	// System.Boolean OVRManager::<isSupportedPlatform>k__BackingField
	bool ___U3CisSupportedPlatformU3Ek__BackingField_45;

public:
	inline static int32_t get_offset_of__isPaused_3() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ____isPaused_3)); }
	inline bool get__isPaused_3() const { return ____isPaused_3; }
	inline bool* get_address_of__isPaused_3() { return &____isPaused_3; }
	inline void set__isPaused_3(bool value)
	{
		____isPaused_3 = value;
	}

	inline static int32_t get_offset_of_disabledCameras_4() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ___disabledCameras_4)); }
	inline Il2CppObject* get_disabledCameras_4() const { return ___disabledCameras_4; }
	inline Il2CppObject** get_address_of_disabledCameras_4() { return &___disabledCameras_4; }
	inline void set_disabledCameras_4(Il2CppObject* value)
	{
		___disabledCameras_4 = value;
		Il2CppCodeGenWriteBarrier(&___disabledCameras_4, value);
	}

	inline static int32_t get_offset_of_prevTimeScale_5() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ___prevTimeScale_5)); }
	inline float get_prevTimeScale_5() const { return ___prevTimeScale_5; }
	inline float* get_address_of_prevTimeScale_5() { return &___prevTimeScale_5; }
	inline void set_prevTimeScale_5(float value)
	{
		___prevTimeScale_5 = value;
	}

	inline static int32_t get_offset_of_queueAhead_12() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ___queueAhead_12)); }
	inline bool get_queueAhead_12() const { return ___queueAhead_12; }
	inline bool* get_address_of_queueAhead_12() { return &___queueAhead_12; }
	inline void set_queueAhead_12(bool value)
	{
		___queueAhead_12 = value;
	}

	inline static int32_t get_offset_of_useRecommendedMSAALevel_13() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ___useRecommendedMSAALevel_13)); }
	inline bool get_useRecommendedMSAALevel_13() const { return ___useRecommendedMSAALevel_13; }
	inline bool* get_address_of_useRecommendedMSAALevel_13() { return &___useRecommendedMSAALevel_13; }
	inline void set_useRecommendedMSAALevel_13(bool value)
	{
		___useRecommendedMSAALevel_13 = value;
	}

	inline static int32_t get_offset_of_enableAdaptiveResolution_14() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ___enableAdaptiveResolution_14)); }
	inline bool get_enableAdaptiveResolution_14() const { return ___enableAdaptiveResolution_14; }
	inline bool* get_address_of_enableAdaptiveResolution_14() { return &___enableAdaptiveResolution_14; }
	inline void set_enableAdaptiveResolution_14(bool value)
	{
		___enableAdaptiveResolution_14 = value;
	}

	inline static int32_t get_offset_of_maxRenderScale_15() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ___maxRenderScale_15)); }
	inline float get_maxRenderScale_15() const { return ___maxRenderScale_15; }
	inline float* get_address_of_maxRenderScale_15() { return &___maxRenderScale_15; }
	inline void set_maxRenderScale_15(float value)
	{
		___maxRenderScale_15 = value;
	}

	inline static int32_t get_offset_of_minRenderScale_16() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ___minRenderScale_16)); }
	inline float get_minRenderScale_16() const { return ___minRenderScale_16; }
	inline float* get_address_of_minRenderScale_16() { return &___minRenderScale_16; }
	inline void set_minRenderScale_16(float value)
	{
		___minRenderScale_16 = value;
	}

	inline static int32_t get_offset_of__trackingOriginType_17() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ____trackingOriginType_17)); }
	inline int32_t get__trackingOriginType_17() const { return ____trackingOriginType_17; }
	inline int32_t* get_address_of__trackingOriginType_17() { return &____trackingOriginType_17; }
	inline void set__trackingOriginType_17(int32_t value)
	{
		____trackingOriginType_17 = value;
	}

	inline static int32_t get_offset_of_usePositionTracking_18() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ___usePositionTracking_18)); }
	inline bool get_usePositionTracking_18() const { return ___usePositionTracking_18; }
	inline bool* get_address_of_usePositionTracking_18() { return &___usePositionTracking_18; }
	inline void set_usePositionTracking_18(bool value)
	{
		___usePositionTracking_18 = value;
	}

	inline static int32_t get_offset_of_useIPDInPositionTracking_19() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ___useIPDInPositionTracking_19)); }
	inline bool get_useIPDInPositionTracking_19() const { return ___useIPDInPositionTracking_19; }
	inline bool* get_address_of_useIPDInPositionTracking_19() { return &___useIPDInPositionTracking_19; }
	inline void set_useIPDInPositionTracking_19(bool value)
	{
		___useIPDInPositionTracking_19 = value;
	}

	inline static int32_t get_offset_of_resetTrackerOnLoad_20() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ___resetTrackerOnLoad_20)); }
	inline bool get_resetTrackerOnLoad_20() const { return ___resetTrackerOnLoad_20; }
	inline bool* get_address_of_resetTrackerOnLoad_20() { return &___resetTrackerOnLoad_20; }
	inline void set_resetTrackerOnLoad_20(bool value)
	{
		___resetTrackerOnLoad_20 = value;
	}

	inline static int32_t get_offset_of_U3CisSupportedPlatformU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752, ___U3CisSupportedPlatformU3Ek__BackingField_45)); }
	inline bool get_U3CisSupportedPlatformU3Ek__BackingField_45() const { return ___U3CisSupportedPlatformU3Ek__BackingField_45; }
	inline bool* get_address_of_U3CisSupportedPlatformU3Ek__BackingField_45() { return &___U3CisSupportedPlatformU3Ek__BackingField_45; }
	inline void set_U3CisSupportedPlatformU3Ek__BackingField_45(bool value)
	{
		___U3CisSupportedPlatformU3Ek__BackingField_45 = value;
	}
};

struct OVRManager_t1723122752_StaticFields
{
public:
	// OVRProfile OVRManager::_profile
	OVRProfile_t1138729578 * ____profile_2;
	// System.Boolean OVRManager::_isHmdPresentCached
	bool ____isHmdPresentCached_6;
	// System.Boolean OVRManager::_isHmdPresent
	bool ____isHmdPresent_7;
	// System.Boolean OVRManager::_wasHmdPresent
	bool ____wasHmdPresent_8;
	// System.Boolean OVRManager::_hasVrFocusCached
	bool ____hasVrFocusCached_9;
	// System.Boolean OVRManager::_hasVrFocus
	bool ____hasVrFocus_10;
	// System.Boolean OVRManager::_hadVrFocus
	bool ____hadVrFocus_11;
	// System.Boolean OVRManager::_isUserPresentCached
	bool ____isUserPresentCached_21;
	// System.Boolean OVRManager::_isUserPresent
	bool ____isUserPresent_22;
	// System.Boolean OVRManager::_wasUserPresent
	bool ____wasUserPresent_23;
	// System.Boolean OVRManager::prevAudioOutIdIsCached
	bool ___prevAudioOutIdIsCached_24;
	// System.Boolean OVRManager::prevAudioInIdIsCached
	bool ___prevAudioInIdIsCached_25;
	// System.String OVRManager::prevAudioOutId
	String_t* ___prevAudioOutId_26;
	// System.String OVRManager::prevAudioInId
	String_t* ___prevAudioInId_27;
	// System.Boolean OVRManager::wasPositionTracked
	bool ___wasPositionTracked_28;
	// System.Boolean OVRManager::runInBackground
	bool ___runInBackground_29;
	// System.Action OVRManager::HMDAcquired
	Action_t3226471752 * ___HMDAcquired_30;
	// System.Action OVRManager::HMDLost
	Action_t3226471752 * ___HMDLost_31;
	// System.Action OVRManager::HMDMounted
	Action_t3226471752 * ___HMDMounted_32;
	// System.Action OVRManager::HMDUnmounted
	Action_t3226471752 * ___HMDUnmounted_33;
	// System.Action OVRManager::VrFocusAcquired
	Action_t3226471752 * ___VrFocusAcquired_34;
	// System.Action OVRManager::VrFocusLost
	Action_t3226471752 * ___VrFocusLost_35;
	// System.Action OVRManager::AudioOutChanged
	Action_t3226471752 * ___AudioOutChanged_36;
	// System.Action OVRManager::AudioInChanged
	Action_t3226471752 * ___AudioInChanged_37;
	// System.Action OVRManager::TrackingAcquired
	Action_t3226471752 * ___TrackingAcquired_38;
	// System.Action OVRManager::TrackingLost
	Action_t3226471752 * ___TrackingLost_39;
	// System.Action OVRManager::HSWDismissed
	Action_t3226471752 * ___HSWDismissed_40;
	// OVRManager OVRManager::<instance>k__BackingField
	OVRManager_t1723122752 * ___U3CinstanceU3Ek__BackingField_41;
	// OVRDisplay OVRManager::<display>k__BackingField
	OVRDisplay_t839014655 * ___U3CdisplayU3Ek__BackingField_42;
	// OVRTracker OVRManager::<tracker>k__BackingField
	OVRTracker_t2380562897 * ___U3CtrackerU3Ek__BackingField_43;
	// OVRBoundary OVRManager::<boundary>k__BackingField
	OVRBoundary_t3841068229 * ___U3CboundaryU3Ek__BackingField_44;

public:
	inline static int32_t get_offset_of__profile_2() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ____profile_2)); }
	inline OVRProfile_t1138729578 * get__profile_2() const { return ____profile_2; }
	inline OVRProfile_t1138729578 ** get_address_of__profile_2() { return &____profile_2; }
	inline void set__profile_2(OVRProfile_t1138729578 * value)
	{
		____profile_2 = value;
		Il2CppCodeGenWriteBarrier(&____profile_2, value);
	}

	inline static int32_t get_offset_of__isHmdPresentCached_6() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ____isHmdPresentCached_6)); }
	inline bool get__isHmdPresentCached_6() const { return ____isHmdPresentCached_6; }
	inline bool* get_address_of__isHmdPresentCached_6() { return &____isHmdPresentCached_6; }
	inline void set__isHmdPresentCached_6(bool value)
	{
		____isHmdPresentCached_6 = value;
	}

	inline static int32_t get_offset_of__isHmdPresent_7() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ____isHmdPresent_7)); }
	inline bool get__isHmdPresent_7() const { return ____isHmdPresent_7; }
	inline bool* get_address_of__isHmdPresent_7() { return &____isHmdPresent_7; }
	inline void set__isHmdPresent_7(bool value)
	{
		____isHmdPresent_7 = value;
	}

	inline static int32_t get_offset_of__wasHmdPresent_8() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ____wasHmdPresent_8)); }
	inline bool get__wasHmdPresent_8() const { return ____wasHmdPresent_8; }
	inline bool* get_address_of__wasHmdPresent_8() { return &____wasHmdPresent_8; }
	inline void set__wasHmdPresent_8(bool value)
	{
		____wasHmdPresent_8 = value;
	}

	inline static int32_t get_offset_of__hasVrFocusCached_9() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ____hasVrFocusCached_9)); }
	inline bool get__hasVrFocusCached_9() const { return ____hasVrFocusCached_9; }
	inline bool* get_address_of__hasVrFocusCached_9() { return &____hasVrFocusCached_9; }
	inline void set__hasVrFocusCached_9(bool value)
	{
		____hasVrFocusCached_9 = value;
	}

	inline static int32_t get_offset_of__hasVrFocus_10() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ____hasVrFocus_10)); }
	inline bool get__hasVrFocus_10() const { return ____hasVrFocus_10; }
	inline bool* get_address_of__hasVrFocus_10() { return &____hasVrFocus_10; }
	inline void set__hasVrFocus_10(bool value)
	{
		____hasVrFocus_10 = value;
	}

	inline static int32_t get_offset_of__hadVrFocus_11() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ____hadVrFocus_11)); }
	inline bool get__hadVrFocus_11() const { return ____hadVrFocus_11; }
	inline bool* get_address_of__hadVrFocus_11() { return &____hadVrFocus_11; }
	inline void set__hadVrFocus_11(bool value)
	{
		____hadVrFocus_11 = value;
	}

	inline static int32_t get_offset_of__isUserPresentCached_21() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ____isUserPresentCached_21)); }
	inline bool get__isUserPresentCached_21() const { return ____isUserPresentCached_21; }
	inline bool* get_address_of__isUserPresentCached_21() { return &____isUserPresentCached_21; }
	inline void set__isUserPresentCached_21(bool value)
	{
		____isUserPresentCached_21 = value;
	}

	inline static int32_t get_offset_of__isUserPresent_22() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ____isUserPresent_22)); }
	inline bool get__isUserPresent_22() const { return ____isUserPresent_22; }
	inline bool* get_address_of__isUserPresent_22() { return &____isUserPresent_22; }
	inline void set__isUserPresent_22(bool value)
	{
		____isUserPresent_22 = value;
	}

	inline static int32_t get_offset_of__wasUserPresent_23() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ____wasUserPresent_23)); }
	inline bool get__wasUserPresent_23() const { return ____wasUserPresent_23; }
	inline bool* get_address_of__wasUserPresent_23() { return &____wasUserPresent_23; }
	inline void set__wasUserPresent_23(bool value)
	{
		____wasUserPresent_23 = value;
	}

	inline static int32_t get_offset_of_prevAudioOutIdIsCached_24() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___prevAudioOutIdIsCached_24)); }
	inline bool get_prevAudioOutIdIsCached_24() const { return ___prevAudioOutIdIsCached_24; }
	inline bool* get_address_of_prevAudioOutIdIsCached_24() { return &___prevAudioOutIdIsCached_24; }
	inline void set_prevAudioOutIdIsCached_24(bool value)
	{
		___prevAudioOutIdIsCached_24 = value;
	}

	inline static int32_t get_offset_of_prevAudioInIdIsCached_25() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___prevAudioInIdIsCached_25)); }
	inline bool get_prevAudioInIdIsCached_25() const { return ___prevAudioInIdIsCached_25; }
	inline bool* get_address_of_prevAudioInIdIsCached_25() { return &___prevAudioInIdIsCached_25; }
	inline void set_prevAudioInIdIsCached_25(bool value)
	{
		___prevAudioInIdIsCached_25 = value;
	}

	inline static int32_t get_offset_of_prevAudioOutId_26() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___prevAudioOutId_26)); }
	inline String_t* get_prevAudioOutId_26() const { return ___prevAudioOutId_26; }
	inline String_t** get_address_of_prevAudioOutId_26() { return &___prevAudioOutId_26; }
	inline void set_prevAudioOutId_26(String_t* value)
	{
		___prevAudioOutId_26 = value;
		Il2CppCodeGenWriteBarrier(&___prevAudioOutId_26, value);
	}

	inline static int32_t get_offset_of_prevAudioInId_27() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___prevAudioInId_27)); }
	inline String_t* get_prevAudioInId_27() const { return ___prevAudioInId_27; }
	inline String_t** get_address_of_prevAudioInId_27() { return &___prevAudioInId_27; }
	inline void set_prevAudioInId_27(String_t* value)
	{
		___prevAudioInId_27 = value;
		Il2CppCodeGenWriteBarrier(&___prevAudioInId_27, value);
	}

	inline static int32_t get_offset_of_wasPositionTracked_28() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___wasPositionTracked_28)); }
	inline bool get_wasPositionTracked_28() const { return ___wasPositionTracked_28; }
	inline bool* get_address_of_wasPositionTracked_28() { return &___wasPositionTracked_28; }
	inline void set_wasPositionTracked_28(bool value)
	{
		___wasPositionTracked_28 = value;
	}

	inline static int32_t get_offset_of_runInBackground_29() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___runInBackground_29)); }
	inline bool get_runInBackground_29() const { return ___runInBackground_29; }
	inline bool* get_address_of_runInBackground_29() { return &___runInBackground_29; }
	inline void set_runInBackground_29(bool value)
	{
		___runInBackground_29 = value;
	}

	inline static int32_t get_offset_of_HMDAcquired_30() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___HMDAcquired_30)); }
	inline Action_t3226471752 * get_HMDAcquired_30() const { return ___HMDAcquired_30; }
	inline Action_t3226471752 ** get_address_of_HMDAcquired_30() { return &___HMDAcquired_30; }
	inline void set_HMDAcquired_30(Action_t3226471752 * value)
	{
		___HMDAcquired_30 = value;
		Il2CppCodeGenWriteBarrier(&___HMDAcquired_30, value);
	}

	inline static int32_t get_offset_of_HMDLost_31() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___HMDLost_31)); }
	inline Action_t3226471752 * get_HMDLost_31() const { return ___HMDLost_31; }
	inline Action_t3226471752 ** get_address_of_HMDLost_31() { return &___HMDLost_31; }
	inline void set_HMDLost_31(Action_t3226471752 * value)
	{
		___HMDLost_31 = value;
		Il2CppCodeGenWriteBarrier(&___HMDLost_31, value);
	}

	inline static int32_t get_offset_of_HMDMounted_32() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___HMDMounted_32)); }
	inline Action_t3226471752 * get_HMDMounted_32() const { return ___HMDMounted_32; }
	inline Action_t3226471752 ** get_address_of_HMDMounted_32() { return &___HMDMounted_32; }
	inline void set_HMDMounted_32(Action_t3226471752 * value)
	{
		___HMDMounted_32 = value;
		Il2CppCodeGenWriteBarrier(&___HMDMounted_32, value);
	}

	inline static int32_t get_offset_of_HMDUnmounted_33() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___HMDUnmounted_33)); }
	inline Action_t3226471752 * get_HMDUnmounted_33() const { return ___HMDUnmounted_33; }
	inline Action_t3226471752 ** get_address_of_HMDUnmounted_33() { return &___HMDUnmounted_33; }
	inline void set_HMDUnmounted_33(Action_t3226471752 * value)
	{
		___HMDUnmounted_33 = value;
		Il2CppCodeGenWriteBarrier(&___HMDUnmounted_33, value);
	}

	inline static int32_t get_offset_of_VrFocusAcquired_34() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___VrFocusAcquired_34)); }
	inline Action_t3226471752 * get_VrFocusAcquired_34() const { return ___VrFocusAcquired_34; }
	inline Action_t3226471752 ** get_address_of_VrFocusAcquired_34() { return &___VrFocusAcquired_34; }
	inline void set_VrFocusAcquired_34(Action_t3226471752 * value)
	{
		___VrFocusAcquired_34 = value;
		Il2CppCodeGenWriteBarrier(&___VrFocusAcquired_34, value);
	}

	inline static int32_t get_offset_of_VrFocusLost_35() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___VrFocusLost_35)); }
	inline Action_t3226471752 * get_VrFocusLost_35() const { return ___VrFocusLost_35; }
	inline Action_t3226471752 ** get_address_of_VrFocusLost_35() { return &___VrFocusLost_35; }
	inline void set_VrFocusLost_35(Action_t3226471752 * value)
	{
		___VrFocusLost_35 = value;
		Il2CppCodeGenWriteBarrier(&___VrFocusLost_35, value);
	}

	inline static int32_t get_offset_of_AudioOutChanged_36() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___AudioOutChanged_36)); }
	inline Action_t3226471752 * get_AudioOutChanged_36() const { return ___AudioOutChanged_36; }
	inline Action_t3226471752 ** get_address_of_AudioOutChanged_36() { return &___AudioOutChanged_36; }
	inline void set_AudioOutChanged_36(Action_t3226471752 * value)
	{
		___AudioOutChanged_36 = value;
		Il2CppCodeGenWriteBarrier(&___AudioOutChanged_36, value);
	}

	inline static int32_t get_offset_of_AudioInChanged_37() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___AudioInChanged_37)); }
	inline Action_t3226471752 * get_AudioInChanged_37() const { return ___AudioInChanged_37; }
	inline Action_t3226471752 ** get_address_of_AudioInChanged_37() { return &___AudioInChanged_37; }
	inline void set_AudioInChanged_37(Action_t3226471752 * value)
	{
		___AudioInChanged_37 = value;
		Il2CppCodeGenWriteBarrier(&___AudioInChanged_37, value);
	}

	inline static int32_t get_offset_of_TrackingAcquired_38() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___TrackingAcquired_38)); }
	inline Action_t3226471752 * get_TrackingAcquired_38() const { return ___TrackingAcquired_38; }
	inline Action_t3226471752 ** get_address_of_TrackingAcquired_38() { return &___TrackingAcquired_38; }
	inline void set_TrackingAcquired_38(Action_t3226471752 * value)
	{
		___TrackingAcquired_38 = value;
		Il2CppCodeGenWriteBarrier(&___TrackingAcquired_38, value);
	}

	inline static int32_t get_offset_of_TrackingLost_39() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___TrackingLost_39)); }
	inline Action_t3226471752 * get_TrackingLost_39() const { return ___TrackingLost_39; }
	inline Action_t3226471752 ** get_address_of_TrackingLost_39() { return &___TrackingLost_39; }
	inline void set_TrackingLost_39(Action_t3226471752 * value)
	{
		___TrackingLost_39 = value;
		Il2CppCodeGenWriteBarrier(&___TrackingLost_39, value);
	}

	inline static int32_t get_offset_of_HSWDismissed_40() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___HSWDismissed_40)); }
	inline Action_t3226471752 * get_HSWDismissed_40() const { return ___HSWDismissed_40; }
	inline Action_t3226471752 ** get_address_of_HSWDismissed_40() { return &___HSWDismissed_40; }
	inline void set_HSWDismissed_40(Action_t3226471752 * value)
	{
		___HSWDismissed_40 = value;
		Il2CppCodeGenWriteBarrier(&___HSWDismissed_40, value);
	}

	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___U3CinstanceU3Ek__BackingField_41)); }
	inline OVRManager_t1723122752 * get_U3CinstanceU3Ek__BackingField_41() const { return ___U3CinstanceU3Ek__BackingField_41; }
	inline OVRManager_t1723122752 ** get_address_of_U3CinstanceU3Ek__BackingField_41() { return &___U3CinstanceU3Ek__BackingField_41; }
	inline void set_U3CinstanceU3Ek__BackingField_41(OVRManager_t1723122752 * value)
	{
		___U3CinstanceU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier(&___U3CinstanceU3Ek__BackingField_41, value);
	}

	inline static int32_t get_offset_of_U3CdisplayU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___U3CdisplayU3Ek__BackingField_42)); }
	inline OVRDisplay_t839014655 * get_U3CdisplayU3Ek__BackingField_42() const { return ___U3CdisplayU3Ek__BackingField_42; }
	inline OVRDisplay_t839014655 ** get_address_of_U3CdisplayU3Ek__BackingField_42() { return &___U3CdisplayU3Ek__BackingField_42; }
	inline void set_U3CdisplayU3Ek__BackingField_42(OVRDisplay_t839014655 * value)
	{
		___U3CdisplayU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdisplayU3Ek__BackingField_42, value);
	}

	inline static int32_t get_offset_of_U3CtrackerU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___U3CtrackerU3Ek__BackingField_43)); }
	inline OVRTracker_t2380562897 * get_U3CtrackerU3Ek__BackingField_43() const { return ___U3CtrackerU3Ek__BackingField_43; }
	inline OVRTracker_t2380562897 ** get_address_of_U3CtrackerU3Ek__BackingField_43() { return &___U3CtrackerU3Ek__BackingField_43; }
	inline void set_U3CtrackerU3Ek__BackingField_43(OVRTracker_t2380562897 * value)
	{
		___U3CtrackerU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtrackerU3Ek__BackingField_43, value);
	}

	inline static int32_t get_offset_of_U3CboundaryU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(OVRManager_t1723122752_StaticFields, ___U3CboundaryU3Ek__BackingField_44)); }
	inline OVRBoundary_t3841068229 * get_U3CboundaryU3Ek__BackingField_44() const { return ___U3CboundaryU3Ek__BackingField_44; }
	inline OVRBoundary_t3841068229 ** get_address_of_U3CboundaryU3Ek__BackingField_44() { return &___U3CboundaryU3Ek__BackingField_44; }
	inline void set_U3CboundaryU3Ek__BackingField_44(OVRBoundary_t3841068229 * value)
	{
		___U3CboundaryU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier(&___U3CboundaryU3Ek__BackingField_44, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
