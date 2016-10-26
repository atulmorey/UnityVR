#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OVRInput/OVRControllerBase/VirtualButtonMap
struct VirtualButtonMap_t2609492970;
// OVRInput/OVRControllerBase/VirtualTouchMap
struct VirtualTouchMap_t879134549;
// OVRInput/OVRControllerBase/VirtualNearTouchMap
struct VirtualNearTouchMap_t1695610657;
// OVRInput/OVRControllerBase/VirtualAxis1DMap
struct VirtualAxis1DMap_t1794721354;
// OVRInput/OVRControllerBase/VirtualAxis2DMap
struct VirtualAxis2DMap_t1794713929;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OVRInput_Controller4215116408.h"
#include "AssemblyU2DCSharp_OVRPlugin_ControllerState4225754152.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRInput/OVRControllerBase
struct  OVRControllerBase_t2541406600  : public Il2CppObject
{
public:
	// OVRInput/Controller OVRInput/OVRControllerBase::controllerType
	int32_t ___controllerType_0;
	// OVRInput/OVRControllerBase/VirtualButtonMap OVRInput/OVRControllerBase::buttonMap
	VirtualButtonMap_t2609492970 * ___buttonMap_1;
	// OVRInput/OVRControllerBase/VirtualTouchMap OVRInput/OVRControllerBase::touchMap
	VirtualTouchMap_t879134549 * ___touchMap_2;
	// OVRInput/OVRControllerBase/VirtualNearTouchMap OVRInput/OVRControllerBase::nearTouchMap
	VirtualNearTouchMap_t1695610657 * ___nearTouchMap_3;
	// OVRInput/OVRControllerBase/VirtualAxis1DMap OVRInput/OVRControllerBase::axis1DMap
	VirtualAxis1DMap_t1794721354 * ___axis1DMap_4;
	// OVRInput/OVRControllerBase/VirtualAxis2DMap OVRInput/OVRControllerBase::axis2DMap
	VirtualAxis2DMap_t1794713929 * ___axis2DMap_5;
	// OVRPlugin/ControllerState OVRInput/OVRControllerBase::previousState
	ControllerState_t4225754152  ___previousState_6;
	// OVRPlugin/ControllerState OVRInput/OVRControllerBase::currentState
	ControllerState_t4225754152  ___currentState_7;

public:
	inline static int32_t get_offset_of_controllerType_0() { return static_cast<int32_t>(offsetof(OVRControllerBase_t2541406600, ___controllerType_0)); }
	inline int32_t get_controllerType_0() const { return ___controllerType_0; }
	inline int32_t* get_address_of_controllerType_0() { return &___controllerType_0; }
	inline void set_controllerType_0(int32_t value)
	{
		___controllerType_0 = value;
	}

	inline static int32_t get_offset_of_buttonMap_1() { return static_cast<int32_t>(offsetof(OVRControllerBase_t2541406600, ___buttonMap_1)); }
	inline VirtualButtonMap_t2609492970 * get_buttonMap_1() const { return ___buttonMap_1; }
	inline VirtualButtonMap_t2609492970 ** get_address_of_buttonMap_1() { return &___buttonMap_1; }
	inline void set_buttonMap_1(VirtualButtonMap_t2609492970 * value)
	{
		___buttonMap_1 = value;
		Il2CppCodeGenWriteBarrier(&___buttonMap_1, value);
	}

	inline static int32_t get_offset_of_touchMap_2() { return static_cast<int32_t>(offsetof(OVRControllerBase_t2541406600, ___touchMap_2)); }
	inline VirtualTouchMap_t879134549 * get_touchMap_2() const { return ___touchMap_2; }
	inline VirtualTouchMap_t879134549 ** get_address_of_touchMap_2() { return &___touchMap_2; }
	inline void set_touchMap_2(VirtualTouchMap_t879134549 * value)
	{
		___touchMap_2 = value;
		Il2CppCodeGenWriteBarrier(&___touchMap_2, value);
	}

	inline static int32_t get_offset_of_nearTouchMap_3() { return static_cast<int32_t>(offsetof(OVRControllerBase_t2541406600, ___nearTouchMap_3)); }
	inline VirtualNearTouchMap_t1695610657 * get_nearTouchMap_3() const { return ___nearTouchMap_3; }
	inline VirtualNearTouchMap_t1695610657 ** get_address_of_nearTouchMap_3() { return &___nearTouchMap_3; }
	inline void set_nearTouchMap_3(VirtualNearTouchMap_t1695610657 * value)
	{
		___nearTouchMap_3 = value;
		Il2CppCodeGenWriteBarrier(&___nearTouchMap_3, value);
	}

	inline static int32_t get_offset_of_axis1DMap_4() { return static_cast<int32_t>(offsetof(OVRControllerBase_t2541406600, ___axis1DMap_4)); }
	inline VirtualAxis1DMap_t1794721354 * get_axis1DMap_4() const { return ___axis1DMap_4; }
	inline VirtualAxis1DMap_t1794721354 ** get_address_of_axis1DMap_4() { return &___axis1DMap_4; }
	inline void set_axis1DMap_4(VirtualAxis1DMap_t1794721354 * value)
	{
		___axis1DMap_4 = value;
		Il2CppCodeGenWriteBarrier(&___axis1DMap_4, value);
	}

	inline static int32_t get_offset_of_axis2DMap_5() { return static_cast<int32_t>(offsetof(OVRControllerBase_t2541406600, ___axis2DMap_5)); }
	inline VirtualAxis2DMap_t1794713929 * get_axis2DMap_5() const { return ___axis2DMap_5; }
	inline VirtualAxis2DMap_t1794713929 ** get_address_of_axis2DMap_5() { return &___axis2DMap_5; }
	inline void set_axis2DMap_5(VirtualAxis2DMap_t1794713929 * value)
	{
		___axis2DMap_5 = value;
		Il2CppCodeGenWriteBarrier(&___axis2DMap_5, value);
	}

	inline static int32_t get_offset_of_previousState_6() { return static_cast<int32_t>(offsetof(OVRControllerBase_t2541406600, ___previousState_6)); }
	inline ControllerState_t4225754152  get_previousState_6() const { return ___previousState_6; }
	inline ControllerState_t4225754152 * get_address_of_previousState_6() { return &___previousState_6; }
	inline void set_previousState_6(ControllerState_t4225754152  value)
	{
		___previousState_6 = value;
	}

	inline static int32_t get_offset_of_currentState_7() { return static_cast<int32_t>(offsetof(OVRControllerBase_t2541406600, ___currentState_7)); }
	inline ControllerState_t4225754152  get_currentState_7() const { return ___currentState_7; }
	inline ControllerState_t4225754152 * get_address_of_currentState_7() { return &___currentState_7; }
	inline void set_currentState_7(ControllerState_t4225754152  value)
	{
		___currentState_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
