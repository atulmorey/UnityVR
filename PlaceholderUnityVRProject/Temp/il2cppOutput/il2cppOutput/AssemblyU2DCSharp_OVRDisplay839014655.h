#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OVRDisplay/EyeRenderDesc[]
struct EyeRenderDescU5BU5D_t3631173523;
// System.Action
struct Action_t3226471752;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRDisplay
struct  OVRDisplay_t839014655  : public Il2CppObject
{
public:
	// System.Boolean OVRDisplay::needsConfigureTexture
	bool ___needsConfigureTexture_0;
	// OVRDisplay/EyeRenderDesc[] OVRDisplay::eyeDescs
	EyeRenderDescU5BU5D_t3631173523* ___eyeDescs_1;
	// System.Action OVRDisplay::RecenteredPose
	Action_t3226471752 * ___RecenteredPose_2;

public:
	inline static int32_t get_offset_of_needsConfigureTexture_0() { return static_cast<int32_t>(offsetof(OVRDisplay_t839014655, ___needsConfigureTexture_0)); }
	inline bool get_needsConfigureTexture_0() const { return ___needsConfigureTexture_0; }
	inline bool* get_address_of_needsConfigureTexture_0() { return &___needsConfigureTexture_0; }
	inline void set_needsConfigureTexture_0(bool value)
	{
		___needsConfigureTexture_0 = value;
	}

	inline static int32_t get_offset_of_eyeDescs_1() { return static_cast<int32_t>(offsetof(OVRDisplay_t839014655, ___eyeDescs_1)); }
	inline EyeRenderDescU5BU5D_t3631173523* get_eyeDescs_1() const { return ___eyeDescs_1; }
	inline EyeRenderDescU5BU5D_t3631173523** get_address_of_eyeDescs_1() { return &___eyeDescs_1; }
	inline void set_eyeDescs_1(EyeRenderDescU5BU5D_t3631173523* value)
	{
		___eyeDescs_1 = value;
		Il2CppCodeGenWriteBarrier(&___eyeDescs_1, value);
	}

	inline static int32_t get_offset_of_RecenteredPose_2() { return static_cast<int32_t>(offsetof(OVRDisplay_t839014655, ___RecenteredPose_2)); }
	inline Action_t3226471752 * get_RecenteredPose_2() const { return ___RecenteredPose_2; }
	inline Action_t3226471752 ** get_address_of_RecenteredPose_2() { return &___RecenteredPose_2; }
	inline void set_RecenteredPose_2(Action_t3226471752 * value)
	{
		___RecenteredPose_2 = value;
		Il2CppCodeGenWriteBarrier(&___RecenteredPose_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
