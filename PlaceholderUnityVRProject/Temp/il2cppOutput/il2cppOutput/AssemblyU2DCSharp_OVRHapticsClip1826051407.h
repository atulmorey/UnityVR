#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRHapticsClip
struct  OVRHapticsClip_t1826051407  : public Il2CppObject
{
public:
	// System.Int32 OVRHapticsClip::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_0;
	// System.Int32 OVRHapticsClip::<Capacity>k__BackingField
	int32_t ___U3CCapacityU3Ek__BackingField_1;
	// System.Byte[] OVRHapticsClip::<Samples>k__BackingField
	ByteU5BU5D_t3397334013* ___U3CSamplesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OVRHapticsClip_t1826051407, ___U3CCountU3Ek__BackingField_0)); }
	inline int32_t get_U3CCountU3Ek__BackingField_0() const { return ___U3CCountU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_0() { return &___U3CCountU3Ek__BackingField_0; }
	inline void set_U3CCountU3Ek__BackingField_0(int32_t value)
	{
		___U3CCountU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CCapacityU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OVRHapticsClip_t1826051407, ___U3CCapacityU3Ek__BackingField_1)); }
	inline int32_t get_U3CCapacityU3Ek__BackingField_1() const { return ___U3CCapacityU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CCapacityU3Ek__BackingField_1() { return &___U3CCapacityU3Ek__BackingField_1; }
	inline void set_U3CCapacityU3Ek__BackingField_1(int32_t value)
	{
		___U3CCapacityU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(OVRHapticsClip_t1826051407, ___U3CSamplesU3Ek__BackingField_2)); }
	inline ByteU5BU5D_t3397334013* get_U3CSamplesU3Ek__BackingField_2() const { return ___U3CSamplesU3Ek__BackingField_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_U3CSamplesU3Ek__BackingField_2() { return &___U3CSamplesU3Ek__BackingField_2; }
	inline void set_U3CSamplesU3Ek__BackingField_2(ByteU5BU5D_t3397334013* value)
	{
		___U3CSamplesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSamplesU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
