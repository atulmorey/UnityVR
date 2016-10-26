#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRDisplay/LatencyData
struct  LatencyData_t1215445784 
{
public:
	// System.Single OVRDisplay/LatencyData::render
	float ___render_0;
	// System.Single OVRDisplay/LatencyData::timeWarp
	float ___timeWarp_1;
	// System.Single OVRDisplay/LatencyData::postPresent
	float ___postPresent_2;
	// System.Single OVRDisplay/LatencyData::renderError
	float ___renderError_3;
	// System.Single OVRDisplay/LatencyData::timeWarpError
	float ___timeWarpError_4;

public:
	inline static int32_t get_offset_of_render_0() { return static_cast<int32_t>(offsetof(LatencyData_t1215445784, ___render_0)); }
	inline float get_render_0() const { return ___render_0; }
	inline float* get_address_of_render_0() { return &___render_0; }
	inline void set_render_0(float value)
	{
		___render_0 = value;
	}

	inline static int32_t get_offset_of_timeWarp_1() { return static_cast<int32_t>(offsetof(LatencyData_t1215445784, ___timeWarp_1)); }
	inline float get_timeWarp_1() const { return ___timeWarp_1; }
	inline float* get_address_of_timeWarp_1() { return &___timeWarp_1; }
	inline void set_timeWarp_1(float value)
	{
		___timeWarp_1 = value;
	}

	inline static int32_t get_offset_of_postPresent_2() { return static_cast<int32_t>(offsetof(LatencyData_t1215445784, ___postPresent_2)); }
	inline float get_postPresent_2() const { return ___postPresent_2; }
	inline float* get_address_of_postPresent_2() { return &___postPresent_2; }
	inline void set_postPresent_2(float value)
	{
		___postPresent_2 = value;
	}

	inline static int32_t get_offset_of_renderError_3() { return static_cast<int32_t>(offsetof(LatencyData_t1215445784, ___renderError_3)); }
	inline float get_renderError_3() const { return ___renderError_3; }
	inline float* get_address_of_renderError_3() { return &___renderError_3; }
	inline void set_renderError_3(float value)
	{
		___renderError_3 = value;
	}

	inline static int32_t get_offset_of_timeWarpError_4() { return static_cast<int32_t>(offsetof(LatencyData_t1215445784, ___timeWarpError_4)); }
	inline float get_timeWarpError_4() const { return ___timeWarpError_4; }
	inline float* get_address_of_timeWarpError_4() { return &___timeWarpError_4; }
	inline void set_timeWarpError_4(float value)
	{
		___timeWarpError_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: OVRDisplay/LatencyData
struct LatencyData_t1215445784_marshaled_pinvoke
{
	float ___render_0;
	float ___timeWarp_1;
	float ___postPresent_2;
	float ___renderError_3;
	float ___timeWarpError_4;
};
// Native definition for marshalling of: OVRDisplay/LatencyData
struct LatencyData_t1215445784_marshaled_com
{
	float ___render_0;
	float ___timeWarp_1;
	float ___postPresent_2;
	float ___renderError_3;
	float ___timeWarpError_4;
};
