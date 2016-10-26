#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OVRPlugin/Vector3f[]
struct Vector3fU5BU5D_t108604862;
struct Vector3f_t2438854983_marshaled_pinvoke;
struct Vector3f_t2438854983_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_OVRPlugin_BoundaryType1171722187.h"
#include "AssemblyU2DCSharp_OVRPlugin_Vector3f2438854983.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRPlugin/BoundaryGeometry
struct  BoundaryGeometry_t1848884777 
{
public:
	// OVRPlugin/BoundaryType OVRPlugin/BoundaryGeometry::BoundaryType
	int32_t ___BoundaryType_0;
	// OVRPlugin/Vector3f[] OVRPlugin/BoundaryGeometry::Points
	Vector3fU5BU5D_t108604862* ___Points_1;
	// System.Int32 OVRPlugin/BoundaryGeometry::PointsCount
	int32_t ___PointsCount_2;

public:
	inline static int32_t get_offset_of_BoundaryType_0() { return static_cast<int32_t>(offsetof(BoundaryGeometry_t1848884777, ___BoundaryType_0)); }
	inline int32_t get_BoundaryType_0() const { return ___BoundaryType_0; }
	inline int32_t* get_address_of_BoundaryType_0() { return &___BoundaryType_0; }
	inline void set_BoundaryType_0(int32_t value)
	{
		___BoundaryType_0 = value;
	}

	inline static int32_t get_offset_of_Points_1() { return static_cast<int32_t>(offsetof(BoundaryGeometry_t1848884777, ___Points_1)); }
	inline Vector3fU5BU5D_t108604862* get_Points_1() const { return ___Points_1; }
	inline Vector3fU5BU5D_t108604862** get_address_of_Points_1() { return &___Points_1; }
	inline void set_Points_1(Vector3fU5BU5D_t108604862* value)
	{
		___Points_1 = value;
		Il2CppCodeGenWriteBarrier(&___Points_1, value);
	}

	inline static int32_t get_offset_of_PointsCount_2() { return static_cast<int32_t>(offsetof(BoundaryGeometry_t1848884777, ___PointsCount_2)); }
	inline int32_t get_PointsCount_2() const { return ___PointsCount_2; }
	inline int32_t* get_address_of_PointsCount_2() { return &___PointsCount_2; }
	inline void set_PointsCount_2(int32_t value)
	{
		___PointsCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: OVRPlugin/BoundaryGeometry
struct BoundaryGeometry_t1848884777_marshaled_pinvoke
{
	int32_t ___BoundaryType_0;
	Vector3f_t2438854983_marshaled_pinvoke ___Points_1[256];
	int32_t ___PointsCount_2;
};
// Native definition for marshalling of: OVRPlugin/BoundaryGeometry
struct BoundaryGeometry_t1848884777_marshaled_com
{
	int32_t ___BoundaryType_0;
	Vector3f_t2438854983_marshaled_com ___Points_1[256];
	int32_t ___PointsCount_2;
};
