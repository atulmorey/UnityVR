#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t4094781467;
// OVRCameraRig
struct OVRCameraRig_t2550404736;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Nullable_1_gen4248765687.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRPlayerController
struct  OVRPlayerController_t2265072820  : public MonoBehaviour_t1158329972
{
public:
	// System.Single OVRPlayerController::Acceleration
	float ___Acceleration_2;
	// System.Single OVRPlayerController::Damping
	float ___Damping_3;
	// System.Single OVRPlayerController::BackAndSideDampen
	float ___BackAndSideDampen_4;
	// System.Single OVRPlayerController::JumpForce
	float ___JumpForce_5;
	// System.Single OVRPlayerController::RotationAmount
	float ___RotationAmount_6;
	// System.Single OVRPlayerController::RotationRatchet
	float ___RotationRatchet_7;
	// System.Boolean OVRPlayerController::HmdResetsY
	bool ___HmdResetsY_8;
	// System.Boolean OVRPlayerController::HmdRotatesY
	bool ___HmdRotatesY_9;
	// System.Single OVRPlayerController::GravityModifier
	float ___GravityModifier_10;
	// System.Boolean OVRPlayerController::useProfileData
	bool ___useProfileData_11;
	// UnityEngine.CharacterController OVRPlayerController::Controller
	CharacterController_t4094781467 * ___Controller_12;
	// OVRCameraRig OVRPlayerController::CameraRig
	OVRCameraRig_t2550404736 * ___CameraRig_13;
	// System.Single OVRPlayerController::MoveScale
	float ___MoveScale_14;
	// UnityEngine.Vector3 OVRPlayerController::MoveThrottle
	Vector3_t2243707580  ___MoveThrottle_15;
	// System.Single OVRPlayerController::FallSpeed
	float ___FallSpeed_16;
	// System.Nullable`1<OVRPose> OVRPlayerController::InitialPose
	Nullable_1_t4248765687  ___InitialPose_17;
	// System.Single OVRPlayerController::InitialYRotation
	float ___InitialYRotation_18;
	// System.Single OVRPlayerController::MoveScaleMultiplier
	float ___MoveScaleMultiplier_19;
	// System.Single OVRPlayerController::RotationScaleMultiplier
	float ___RotationScaleMultiplier_20;
	// System.Boolean OVRPlayerController::SkipMouseRotation
	bool ___SkipMouseRotation_21;
	// System.Boolean OVRPlayerController::HaltUpdateMovement
	bool ___HaltUpdateMovement_22;
	// System.Boolean OVRPlayerController::prevHatLeft
	bool ___prevHatLeft_23;
	// System.Boolean OVRPlayerController::prevHatRight
	bool ___prevHatRight_24;
	// System.Single OVRPlayerController::SimulationRate
	float ___SimulationRate_25;

public:
	inline static int32_t get_offset_of_Acceleration_2() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___Acceleration_2)); }
	inline float get_Acceleration_2() const { return ___Acceleration_2; }
	inline float* get_address_of_Acceleration_2() { return &___Acceleration_2; }
	inline void set_Acceleration_2(float value)
	{
		___Acceleration_2 = value;
	}

	inline static int32_t get_offset_of_Damping_3() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___Damping_3)); }
	inline float get_Damping_3() const { return ___Damping_3; }
	inline float* get_address_of_Damping_3() { return &___Damping_3; }
	inline void set_Damping_3(float value)
	{
		___Damping_3 = value;
	}

	inline static int32_t get_offset_of_BackAndSideDampen_4() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___BackAndSideDampen_4)); }
	inline float get_BackAndSideDampen_4() const { return ___BackAndSideDampen_4; }
	inline float* get_address_of_BackAndSideDampen_4() { return &___BackAndSideDampen_4; }
	inline void set_BackAndSideDampen_4(float value)
	{
		___BackAndSideDampen_4 = value;
	}

	inline static int32_t get_offset_of_JumpForce_5() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___JumpForce_5)); }
	inline float get_JumpForce_5() const { return ___JumpForce_5; }
	inline float* get_address_of_JumpForce_5() { return &___JumpForce_5; }
	inline void set_JumpForce_5(float value)
	{
		___JumpForce_5 = value;
	}

	inline static int32_t get_offset_of_RotationAmount_6() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___RotationAmount_6)); }
	inline float get_RotationAmount_6() const { return ___RotationAmount_6; }
	inline float* get_address_of_RotationAmount_6() { return &___RotationAmount_6; }
	inline void set_RotationAmount_6(float value)
	{
		___RotationAmount_6 = value;
	}

	inline static int32_t get_offset_of_RotationRatchet_7() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___RotationRatchet_7)); }
	inline float get_RotationRatchet_7() const { return ___RotationRatchet_7; }
	inline float* get_address_of_RotationRatchet_7() { return &___RotationRatchet_7; }
	inline void set_RotationRatchet_7(float value)
	{
		___RotationRatchet_7 = value;
	}

	inline static int32_t get_offset_of_HmdResetsY_8() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___HmdResetsY_8)); }
	inline bool get_HmdResetsY_8() const { return ___HmdResetsY_8; }
	inline bool* get_address_of_HmdResetsY_8() { return &___HmdResetsY_8; }
	inline void set_HmdResetsY_8(bool value)
	{
		___HmdResetsY_8 = value;
	}

	inline static int32_t get_offset_of_HmdRotatesY_9() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___HmdRotatesY_9)); }
	inline bool get_HmdRotatesY_9() const { return ___HmdRotatesY_9; }
	inline bool* get_address_of_HmdRotatesY_9() { return &___HmdRotatesY_9; }
	inline void set_HmdRotatesY_9(bool value)
	{
		___HmdRotatesY_9 = value;
	}

	inline static int32_t get_offset_of_GravityModifier_10() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___GravityModifier_10)); }
	inline float get_GravityModifier_10() const { return ___GravityModifier_10; }
	inline float* get_address_of_GravityModifier_10() { return &___GravityModifier_10; }
	inline void set_GravityModifier_10(float value)
	{
		___GravityModifier_10 = value;
	}

	inline static int32_t get_offset_of_useProfileData_11() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___useProfileData_11)); }
	inline bool get_useProfileData_11() const { return ___useProfileData_11; }
	inline bool* get_address_of_useProfileData_11() { return &___useProfileData_11; }
	inline void set_useProfileData_11(bool value)
	{
		___useProfileData_11 = value;
	}

	inline static int32_t get_offset_of_Controller_12() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___Controller_12)); }
	inline CharacterController_t4094781467 * get_Controller_12() const { return ___Controller_12; }
	inline CharacterController_t4094781467 ** get_address_of_Controller_12() { return &___Controller_12; }
	inline void set_Controller_12(CharacterController_t4094781467 * value)
	{
		___Controller_12 = value;
		Il2CppCodeGenWriteBarrier(&___Controller_12, value);
	}

	inline static int32_t get_offset_of_CameraRig_13() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___CameraRig_13)); }
	inline OVRCameraRig_t2550404736 * get_CameraRig_13() const { return ___CameraRig_13; }
	inline OVRCameraRig_t2550404736 ** get_address_of_CameraRig_13() { return &___CameraRig_13; }
	inline void set_CameraRig_13(OVRCameraRig_t2550404736 * value)
	{
		___CameraRig_13 = value;
		Il2CppCodeGenWriteBarrier(&___CameraRig_13, value);
	}

	inline static int32_t get_offset_of_MoveScale_14() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___MoveScale_14)); }
	inline float get_MoveScale_14() const { return ___MoveScale_14; }
	inline float* get_address_of_MoveScale_14() { return &___MoveScale_14; }
	inline void set_MoveScale_14(float value)
	{
		___MoveScale_14 = value;
	}

	inline static int32_t get_offset_of_MoveThrottle_15() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___MoveThrottle_15)); }
	inline Vector3_t2243707580  get_MoveThrottle_15() const { return ___MoveThrottle_15; }
	inline Vector3_t2243707580 * get_address_of_MoveThrottle_15() { return &___MoveThrottle_15; }
	inline void set_MoveThrottle_15(Vector3_t2243707580  value)
	{
		___MoveThrottle_15 = value;
	}

	inline static int32_t get_offset_of_FallSpeed_16() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___FallSpeed_16)); }
	inline float get_FallSpeed_16() const { return ___FallSpeed_16; }
	inline float* get_address_of_FallSpeed_16() { return &___FallSpeed_16; }
	inline void set_FallSpeed_16(float value)
	{
		___FallSpeed_16 = value;
	}

	inline static int32_t get_offset_of_InitialPose_17() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___InitialPose_17)); }
	inline Nullable_1_t4248765687  get_InitialPose_17() const { return ___InitialPose_17; }
	inline Nullable_1_t4248765687 * get_address_of_InitialPose_17() { return &___InitialPose_17; }
	inline void set_InitialPose_17(Nullable_1_t4248765687  value)
	{
		___InitialPose_17 = value;
	}

	inline static int32_t get_offset_of_InitialYRotation_18() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___InitialYRotation_18)); }
	inline float get_InitialYRotation_18() const { return ___InitialYRotation_18; }
	inline float* get_address_of_InitialYRotation_18() { return &___InitialYRotation_18; }
	inline void set_InitialYRotation_18(float value)
	{
		___InitialYRotation_18 = value;
	}

	inline static int32_t get_offset_of_MoveScaleMultiplier_19() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___MoveScaleMultiplier_19)); }
	inline float get_MoveScaleMultiplier_19() const { return ___MoveScaleMultiplier_19; }
	inline float* get_address_of_MoveScaleMultiplier_19() { return &___MoveScaleMultiplier_19; }
	inline void set_MoveScaleMultiplier_19(float value)
	{
		___MoveScaleMultiplier_19 = value;
	}

	inline static int32_t get_offset_of_RotationScaleMultiplier_20() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___RotationScaleMultiplier_20)); }
	inline float get_RotationScaleMultiplier_20() const { return ___RotationScaleMultiplier_20; }
	inline float* get_address_of_RotationScaleMultiplier_20() { return &___RotationScaleMultiplier_20; }
	inline void set_RotationScaleMultiplier_20(float value)
	{
		___RotationScaleMultiplier_20 = value;
	}

	inline static int32_t get_offset_of_SkipMouseRotation_21() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___SkipMouseRotation_21)); }
	inline bool get_SkipMouseRotation_21() const { return ___SkipMouseRotation_21; }
	inline bool* get_address_of_SkipMouseRotation_21() { return &___SkipMouseRotation_21; }
	inline void set_SkipMouseRotation_21(bool value)
	{
		___SkipMouseRotation_21 = value;
	}

	inline static int32_t get_offset_of_HaltUpdateMovement_22() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___HaltUpdateMovement_22)); }
	inline bool get_HaltUpdateMovement_22() const { return ___HaltUpdateMovement_22; }
	inline bool* get_address_of_HaltUpdateMovement_22() { return &___HaltUpdateMovement_22; }
	inline void set_HaltUpdateMovement_22(bool value)
	{
		___HaltUpdateMovement_22 = value;
	}

	inline static int32_t get_offset_of_prevHatLeft_23() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___prevHatLeft_23)); }
	inline bool get_prevHatLeft_23() const { return ___prevHatLeft_23; }
	inline bool* get_address_of_prevHatLeft_23() { return &___prevHatLeft_23; }
	inline void set_prevHatLeft_23(bool value)
	{
		___prevHatLeft_23 = value;
	}

	inline static int32_t get_offset_of_prevHatRight_24() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___prevHatRight_24)); }
	inline bool get_prevHatRight_24() const { return ___prevHatRight_24; }
	inline bool* get_address_of_prevHatRight_24() { return &___prevHatRight_24; }
	inline void set_prevHatRight_24(bool value)
	{
		___prevHatRight_24 = value;
	}

	inline static int32_t get_offset_of_SimulationRate_25() { return static_cast<int32_t>(offsetof(OVRPlayerController_t2265072820, ___SimulationRate_25)); }
	inline float get_SimulationRate_25() const { return ___SimulationRate_25; }
	inline float* get_address_of_SimulationRate_25() { return &___SimulationRate_25; }
	inline void set_SimulationRate_25(float value)
	{
		___SimulationRate_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
