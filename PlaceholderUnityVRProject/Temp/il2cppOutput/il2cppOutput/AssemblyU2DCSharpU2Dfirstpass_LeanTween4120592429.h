#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LTDescrImpl[]
struct LTDescrImplU5BU5D_t2132524304;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// LTDescrImpl
struct LTDescrImpl_t279532253;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Transform
struct Transform_t3275118058;
// LTDescr
struct LTDescr_t1981209097;
// System.Action`1<LTEvent>[]
struct Action_1U5BU5D_t2680260751;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TweenAction3330578889.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeanTween
struct  LeanTween_t4120592429  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct LeanTween_t4120592429_StaticFields
{
public:
	// System.Boolean LeanTween::throwErrors
	bool ___throwErrors_2;
	// System.Single LeanTween::tau
	float ___tau_3;
	// LTDescrImpl[] LeanTween::tweens
	LTDescrImplU5BU5D_t2132524304* ___tweens_4;
	// System.Int32[] LeanTween::tweensFinished
	Int32U5BU5D_t3030399641* ___tweensFinished_5;
	// LTDescrImpl LeanTween::tween
	LTDescrImpl_t279532253 * ___tween_6;
	// System.Int32 LeanTween::tweenMaxSearch
	int32_t ___tweenMaxSearch_7;
	// System.Int32 LeanTween::maxTweens
	int32_t ___maxTweens_8;
	// System.Int32 LeanTween::frameRendered
	int32_t ___frameRendered_9;
	// UnityEngine.GameObject LeanTween::_tweenEmpty
	GameObject_t1756533147 * ____tweenEmpty_10;
	// System.Single LeanTween::dtEstimated
	float ___dtEstimated_11;
	// System.Single LeanTween::dtManual
	float ___dtManual_12;
	// System.Single LeanTween::dt
	float ___dt_13;
	// System.Single LeanTween::dtActual
	float ___dtActual_14;
	// System.Int32 LeanTween::i
	int32_t ___i_15;
	// System.Int32 LeanTween::j
	int32_t ___j_16;
	// System.Int32 LeanTween::finishedCnt
	int32_t ___finishedCnt_17;
	// UnityEngine.AnimationCurve LeanTween::punch
	AnimationCurve_t3306541151 * ___punch_18;
	// UnityEngine.AnimationCurve LeanTween::shake
	AnimationCurve_t3306541151 * ___shake_19;
	// UnityEngine.Transform LeanTween::trans
	Transform_t3275118058 * ___trans_20;
	// System.Single LeanTween::timeTotal
	float ___timeTotal_21;
	// TweenAction LeanTween::tweenAction
	int32_t ___tweenAction_22;
	// System.Single LeanTween::ratioPassed
	float ___ratioPassed_23;
	// System.Single LeanTween::from
	float ___from_24;
	// System.Single LeanTween::val
	float ___val_25;
	// System.Boolean LeanTween::isTweenFinished
	bool ___isTweenFinished_26;
	// System.Int32 LeanTween::maxTweenReached
	int32_t ___maxTweenReached_27;
	// UnityEngine.Vector3 LeanTween::newVect
	Vector3_t2243707580  ___newVect_28;
	// UnityEngine.GameObject LeanTween::target
	GameObject_t1756533147 * ___target_29;
	// UnityEngine.GameObject LeanTween::customTarget
	GameObject_t1756533147 * ___customTarget_30;
	// System.Int32 LeanTween::startSearch
	int32_t ___startSearch_31;
	// LTDescr LeanTween::d
	Il2CppObject * ___d_32;
	// System.Action`1<LTEvent>[] LeanTween::eventListeners
	Action_1U5BU5D_t2680260751* ___eventListeners_33;
	// UnityEngine.GameObject[] LeanTween::goListeners
	GameObjectU5BU5D_t3057952154* ___goListeners_34;
	// System.Int32 LeanTween::eventsMaxSearch
	int32_t ___eventsMaxSearch_35;
	// System.Int32 LeanTween::EVENTS_MAX
	int32_t ___EVENTS_MAX_36;
	// System.Int32 LeanTween::LISTENERS_MAX
	int32_t ___LISTENERS_MAX_37;
	// System.Int32 LeanTween::INIT_LISTENERS_MAX
	int32_t ___INIT_LISTENERS_MAX_38;

public:
	inline static int32_t get_offset_of_throwErrors_2() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___throwErrors_2)); }
	inline bool get_throwErrors_2() const { return ___throwErrors_2; }
	inline bool* get_address_of_throwErrors_2() { return &___throwErrors_2; }
	inline void set_throwErrors_2(bool value)
	{
		___throwErrors_2 = value;
	}

	inline static int32_t get_offset_of_tau_3() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___tau_3)); }
	inline float get_tau_3() const { return ___tau_3; }
	inline float* get_address_of_tau_3() { return &___tau_3; }
	inline void set_tau_3(float value)
	{
		___tau_3 = value;
	}

	inline static int32_t get_offset_of_tweens_4() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___tweens_4)); }
	inline LTDescrImplU5BU5D_t2132524304* get_tweens_4() const { return ___tweens_4; }
	inline LTDescrImplU5BU5D_t2132524304** get_address_of_tweens_4() { return &___tweens_4; }
	inline void set_tweens_4(LTDescrImplU5BU5D_t2132524304* value)
	{
		___tweens_4 = value;
		Il2CppCodeGenWriteBarrier(&___tweens_4, value);
	}

	inline static int32_t get_offset_of_tweensFinished_5() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___tweensFinished_5)); }
	inline Int32U5BU5D_t3030399641* get_tweensFinished_5() const { return ___tweensFinished_5; }
	inline Int32U5BU5D_t3030399641** get_address_of_tweensFinished_5() { return &___tweensFinished_5; }
	inline void set_tweensFinished_5(Int32U5BU5D_t3030399641* value)
	{
		___tweensFinished_5 = value;
		Il2CppCodeGenWriteBarrier(&___tweensFinished_5, value);
	}

	inline static int32_t get_offset_of_tween_6() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___tween_6)); }
	inline LTDescrImpl_t279532253 * get_tween_6() const { return ___tween_6; }
	inline LTDescrImpl_t279532253 ** get_address_of_tween_6() { return &___tween_6; }
	inline void set_tween_6(LTDescrImpl_t279532253 * value)
	{
		___tween_6 = value;
		Il2CppCodeGenWriteBarrier(&___tween_6, value);
	}

	inline static int32_t get_offset_of_tweenMaxSearch_7() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___tweenMaxSearch_7)); }
	inline int32_t get_tweenMaxSearch_7() const { return ___tweenMaxSearch_7; }
	inline int32_t* get_address_of_tweenMaxSearch_7() { return &___tweenMaxSearch_7; }
	inline void set_tweenMaxSearch_7(int32_t value)
	{
		___tweenMaxSearch_7 = value;
	}

	inline static int32_t get_offset_of_maxTweens_8() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___maxTweens_8)); }
	inline int32_t get_maxTweens_8() const { return ___maxTweens_8; }
	inline int32_t* get_address_of_maxTweens_8() { return &___maxTweens_8; }
	inline void set_maxTweens_8(int32_t value)
	{
		___maxTweens_8 = value;
	}

	inline static int32_t get_offset_of_frameRendered_9() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___frameRendered_9)); }
	inline int32_t get_frameRendered_9() const { return ___frameRendered_9; }
	inline int32_t* get_address_of_frameRendered_9() { return &___frameRendered_9; }
	inline void set_frameRendered_9(int32_t value)
	{
		___frameRendered_9 = value;
	}

	inline static int32_t get_offset_of__tweenEmpty_10() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ____tweenEmpty_10)); }
	inline GameObject_t1756533147 * get__tweenEmpty_10() const { return ____tweenEmpty_10; }
	inline GameObject_t1756533147 ** get_address_of__tweenEmpty_10() { return &____tweenEmpty_10; }
	inline void set__tweenEmpty_10(GameObject_t1756533147 * value)
	{
		____tweenEmpty_10 = value;
		Il2CppCodeGenWriteBarrier(&____tweenEmpty_10, value);
	}

	inline static int32_t get_offset_of_dtEstimated_11() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___dtEstimated_11)); }
	inline float get_dtEstimated_11() const { return ___dtEstimated_11; }
	inline float* get_address_of_dtEstimated_11() { return &___dtEstimated_11; }
	inline void set_dtEstimated_11(float value)
	{
		___dtEstimated_11 = value;
	}

	inline static int32_t get_offset_of_dtManual_12() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___dtManual_12)); }
	inline float get_dtManual_12() const { return ___dtManual_12; }
	inline float* get_address_of_dtManual_12() { return &___dtManual_12; }
	inline void set_dtManual_12(float value)
	{
		___dtManual_12 = value;
	}

	inline static int32_t get_offset_of_dt_13() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___dt_13)); }
	inline float get_dt_13() const { return ___dt_13; }
	inline float* get_address_of_dt_13() { return &___dt_13; }
	inline void set_dt_13(float value)
	{
		___dt_13 = value;
	}

	inline static int32_t get_offset_of_dtActual_14() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___dtActual_14)); }
	inline float get_dtActual_14() const { return ___dtActual_14; }
	inline float* get_address_of_dtActual_14() { return &___dtActual_14; }
	inline void set_dtActual_14(float value)
	{
		___dtActual_14 = value;
	}

	inline static int32_t get_offset_of_i_15() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___i_15)); }
	inline int32_t get_i_15() const { return ___i_15; }
	inline int32_t* get_address_of_i_15() { return &___i_15; }
	inline void set_i_15(int32_t value)
	{
		___i_15 = value;
	}

	inline static int32_t get_offset_of_j_16() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___j_16)); }
	inline int32_t get_j_16() const { return ___j_16; }
	inline int32_t* get_address_of_j_16() { return &___j_16; }
	inline void set_j_16(int32_t value)
	{
		___j_16 = value;
	}

	inline static int32_t get_offset_of_finishedCnt_17() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___finishedCnt_17)); }
	inline int32_t get_finishedCnt_17() const { return ___finishedCnt_17; }
	inline int32_t* get_address_of_finishedCnt_17() { return &___finishedCnt_17; }
	inline void set_finishedCnt_17(int32_t value)
	{
		___finishedCnt_17 = value;
	}

	inline static int32_t get_offset_of_punch_18() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___punch_18)); }
	inline AnimationCurve_t3306541151 * get_punch_18() const { return ___punch_18; }
	inline AnimationCurve_t3306541151 ** get_address_of_punch_18() { return &___punch_18; }
	inline void set_punch_18(AnimationCurve_t3306541151 * value)
	{
		___punch_18 = value;
		Il2CppCodeGenWriteBarrier(&___punch_18, value);
	}

	inline static int32_t get_offset_of_shake_19() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___shake_19)); }
	inline AnimationCurve_t3306541151 * get_shake_19() const { return ___shake_19; }
	inline AnimationCurve_t3306541151 ** get_address_of_shake_19() { return &___shake_19; }
	inline void set_shake_19(AnimationCurve_t3306541151 * value)
	{
		___shake_19 = value;
		Il2CppCodeGenWriteBarrier(&___shake_19, value);
	}

	inline static int32_t get_offset_of_trans_20() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___trans_20)); }
	inline Transform_t3275118058 * get_trans_20() const { return ___trans_20; }
	inline Transform_t3275118058 ** get_address_of_trans_20() { return &___trans_20; }
	inline void set_trans_20(Transform_t3275118058 * value)
	{
		___trans_20 = value;
		Il2CppCodeGenWriteBarrier(&___trans_20, value);
	}

	inline static int32_t get_offset_of_timeTotal_21() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___timeTotal_21)); }
	inline float get_timeTotal_21() const { return ___timeTotal_21; }
	inline float* get_address_of_timeTotal_21() { return &___timeTotal_21; }
	inline void set_timeTotal_21(float value)
	{
		___timeTotal_21 = value;
	}

	inline static int32_t get_offset_of_tweenAction_22() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___tweenAction_22)); }
	inline int32_t get_tweenAction_22() const { return ___tweenAction_22; }
	inline int32_t* get_address_of_tweenAction_22() { return &___tweenAction_22; }
	inline void set_tweenAction_22(int32_t value)
	{
		___tweenAction_22 = value;
	}

	inline static int32_t get_offset_of_ratioPassed_23() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___ratioPassed_23)); }
	inline float get_ratioPassed_23() const { return ___ratioPassed_23; }
	inline float* get_address_of_ratioPassed_23() { return &___ratioPassed_23; }
	inline void set_ratioPassed_23(float value)
	{
		___ratioPassed_23 = value;
	}

	inline static int32_t get_offset_of_from_24() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___from_24)); }
	inline float get_from_24() const { return ___from_24; }
	inline float* get_address_of_from_24() { return &___from_24; }
	inline void set_from_24(float value)
	{
		___from_24 = value;
	}

	inline static int32_t get_offset_of_val_25() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___val_25)); }
	inline float get_val_25() const { return ___val_25; }
	inline float* get_address_of_val_25() { return &___val_25; }
	inline void set_val_25(float value)
	{
		___val_25 = value;
	}

	inline static int32_t get_offset_of_isTweenFinished_26() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___isTweenFinished_26)); }
	inline bool get_isTweenFinished_26() const { return ___isTweenFinished_26; }
	inline bool* get_address_of_isTweenFinished_26() { return &___isTweenFinished_26; }
	inline void set_isTweenFinished_26(bool value)
	{
		___isTweenFinished_26 = value;
	}

	inline static int32_t get_offset_of_maxTweenReached_27() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___maxTweenReached_27)); }
	inline int32_t get_maxTweenReached_27() const { return ___maxTweenReached_27; }
	inline int32_t* get_address_of_maxTweenReached_27() { return &___maxTweenReached_27; }
	inline void set_maxTweenReached_27(int32_t value)
	{
		___maxTweenReached_27 = value;
	}

	inline static int32_t get_offset_of_newVect_28() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___newVect_28)); }
	inline Vector3_t2243707580  get_newVect_28() const { return ___newVect_28; }
	inline Vector3_t2243707580 * get_address_of_newVect_28() { return &___newVect_28; }
	inline void set_newVect_28(Vector3_t2243707580  value)
	{
		___newVect_28 = value;
	}

	inline static int32_t get_offset_of_target_29() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___target_29)); }
	inline GameObject_t1756533147 * get_target_29() const { return ___target_29; }
	inline GameObject_t1756533147 ** get_address_of_target_29() { return &___target_29; }
	inline void set_target_29(GameObject_t1756533147 * value)
	{
		___target_29 = value;
		Il2CppCodeGenWriteBarrier(&___target_29, value);
	}

	inline static int32_t get_offset_of_customTarget_30() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___customTarget_30)); }
	inline GameObject_t1756533147 * get_customTarget_30() const { return ___customTarget_30; }
	inline GameObject_t1756533147 ** get_address_of_customTarget_30() { return &___customTarget_30; }
	inline void set_customTarget_30(GameObject_t1756533147 * value)
	{
		___customTarget_30 = value;
		Il2CppCodeGenWriteBarrier(&___customTarget_30, value);
	}

	inline static int32_t get_offset_of_startSearch_31() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___startSearch_31)); }
	inline int32_t get_startSearch_31() const { return ___startSearch_31; }
	inline int32_t* get_address_of_startSearch_31() { return &___startSearch_31; }
	inline void set_startSearch_31(int32_t value)
	{
		___startSearch_31 = value;
	}

	inline static int32_t get_offset_of_d_32() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___d_32)); }
	inline Il2CppObject * get_d_32() const { return ___d_32; }
	inline Il2CppObject ** get_address_of_d_32() { return &___d_32; }
	inline void set_d_32(Il2CppObject * value)
	{
		___d_32 = value;
		Il2CppCodeGenWriteBarrier(&___d_32, value);
	}

	inline static int32_t get_offset_of_eventListeners_33() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___eventListeners_33)); }
	inline Action_1U5BU5D_t2680260751* get_eventListeners_33() const { return ___eventListeners_33; }
	inline Action_1U5BU5D_t2680260751** get_address_of_eventListeners_33() { return &___eventListeners_33; }
	inline void set_eventListeners_33(Action_1U5BU5D_t2680260751* value)
	{
		___eventListeners_33 = value;
		Il2CppCodeGenWriteBarrier(&___eventListeners_33, value);
	}

	inline static int32_t get_offset_of_goListeners_34() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___goListeners_34)); }
	inline GameObjectU5BU5D_t3057952154* get_goListeners_34() const { return ___goListeners_34; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_goListeners_34() { return &___goListeners_34; }
	inline void set_goListeners_34(GameObjectU5BU5D_t3057952154* value)
	{
		___goListeners_34 = value;
		Il2CppCodeGenWriteBarrier(&___goListeners_34, value);
	}

	inline static int32_t get_offset_of_eventsMaxSearch_35() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___eventsMaxSearch_35)); }
	inline int32_t get_eventsMaxSearch_35() const { return ___eventsMaxSearch_35; }
	inline int32_t* get_address_of_eventsMaxSearch_35() { return &___eventsMaxSearch_35; }
	inline void set_eventsMaxSearch_35(int32_t value)
	{
		___eventsMaxSearch_35 = value;
	}

	inline static int32_t get_offset_of_EVENTS_MAX_36() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___EVENTS_MAX_36)); }
	inline int32_t get_EVENTS_MAX_36() const { return ___EVENTS_MAX_36; }
	inline int32_t* get_address_of_EVENTS_MAX_36() { return &___EVENTS_MAX_36; }
	inline void set_EVENTS_MAX_36(int32_t value)
	{
		___EVENTS_MAX_36 = value;
	}

	inline static int32_t get_offset_of_LISTENERS_MAX_37() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___LISTENERS_MAX_37)); }
	inline int32_t get_LISTENERS_MAX_37() const { return ___LISTENERS_MAX_37; }
	inline int32_t* get_address_of_LISTENERS_MAX_37() { return &___LISTENERS_MAX_37; }
	inline void set_LISTENERS_MAX_37(int32_t value)
	{
		___LISTENERS_MAX_37 = value;
	}

	inline static int32_t get_offset_of_INIT_LISTENERS_MAX_38() { return static_cast<int32_t>(offsetof(LeanTween_t4120592429_StaticFields, ___INIT_LISTENERS_MAX_38)); }
	inline int32_t get_INIT_LISTENERS_MAX_38() const { return ___INIT_LISTENERS_MAX_38; }
	inline int32_t* get_address_of_INIT_LISTENERS_MAX_38() { return &___INIT_LISTENERS_MAX_38; }
	inline void set_INIT_LISTENERS_MAX_38(int32_t value)
	{
		___INIT_LISTENERS_MAX_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
