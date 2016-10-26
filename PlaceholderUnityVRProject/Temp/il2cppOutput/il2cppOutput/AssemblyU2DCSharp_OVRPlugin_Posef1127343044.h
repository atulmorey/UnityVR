#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_OVRPlugin_Quatf4010427498.h"
#include "AssemblyU2DCSharp_OVRPlugin_Vector3f2438854983.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRPlugin/Posef
struct  Posef_t1127343044 
{
public:
	// OVRPlugin/Quatf OVRPlugin/Posef::Orientation
	Quatf_t4010427498  ___Orientation_0;
	// OVRPlugin/Vector3f OVRPlugin/Posef::Position
	Vector3f_t2438854983  ___Position_1;

public:
	inline static int32_t get_offset_of_Orientation_0() { return static_cast<int32_t>(offsetof(Posef_t1127343044, ___Orientation_0)); }
	inline Quatf_t4010427498  get_Orientation_0() const { return ___Orientation_0; }
	inline Quatf_t4010427498 * get_address_of_Orientation_0() { return &___Orientation_0; }
	inline void set_Orientation_0(Quatf_t4010427498  value)
	{
		___Orientation_0 = value;
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(Posef_t1127343044, ___Position_1)); }
	inline Vector3f_t2438854983  get_Position_1() const { return ___Position_1; }
	inline Vector3f_t2438854983 * get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(Vector3f_t2438854983  value)
	{
		___Position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: OVRPlugin/Posef
struct Posef_t1127343044_marshaled_pinvoke
{
	Quatf_t4010427498_marshaled_pinvoke ___Orientation_0;
	Vector3f_t2438854983_marshaled_pinvoke ___Position_1;
};
// Native definition for marshalling of: OVRPlugin/Posef
struct Posef_t1127343044_marshaled_com
{
	Quatf_t4010427498_marshaled_com ___Orientation_0;
	Vector3f_t2438854983_marshaled_com ___Position_1;
};
