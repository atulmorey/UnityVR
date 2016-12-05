#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VertexAnimation
struct  VertexAnimation_t4191345184  : public MonoBehaviour_t667441552
{
public:
	// System.Single VertexAnimation::OffsetDist
	float ___OffsetDist_2;
	// UnityEngine.Mesh VertexAnimation::_mesh
	Mesh_t4241756145 * ____mesh_3;
	// UnityEngine.Vector3[] VertexAnimation::_vertices
	Vector3U5BU5D_t215400611* ____vertices_4;
	// System.Collections.Generic.List`1<System.Int32> VertexAnimation::_leftFaceVert
	List_1_t2522024052 * ____leftFaceVert_5;
	// System.Collections.Generic.List`1<System.Int32> VertexAnimation::_rightFaceVert
	List_1_t2522024052 * ____rightFaceVert_6;
	// System.Collections.Generic.List`1<System.Int32> VertexAnimation::_topFaceVert
	List_1_t2522024052 * ____topFaceVert_7;
	// System.Collections.Generic.List`1<System.Int32> VertexAnimation::_bottomeFaceVert
	List_1_t2522024052 * ____bottomeFaceVert_8;
	// System.Collections.Generic.List`1<System.Int32> VertexAnimation::_frontFaceVert
	List_1_t2522024052 * ____frontFaceVert_9;
	// System.Collections.Generic.List`1<System.Int32> VertexAnimation::_backFaceVert
	List_1_t2522024052 * ____backFaceVert_10;
	// UnityEngine.Vector3 VertexAnimation::_targetVect
	Vector3_t4282066566  ____targetVect_11;
	// System.Int32 VertexAnimation::_numVerts
	int32_t ____numVerts_12;
	// System.Single VertexAnimation::_maxX
	float ____maxX_13;
	// System.Single VertexAnimation::_minX
	float ____minX_14;
	// System.Single VertexAnimation::_maxY
	float ____maxY_15;
	// System.Single VertexAnimation::_minY
	float ____minY_16;
	// System.Single VertexAnimation::_maxZ
	float ____maxZ_17;
	// System.Single VertexAnimation::_minZ
	float ____minZ_18;

public:
	inline static int32_t get_offset_of_OffsetDist_2() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ___OffsetDist_2)); }
	inline float get_OffsetDist_2() const { return ___OffsetDist_2; }
	inline float* get_address_of_OffsetDist_2() { return &___OffsetDist_2; }
	inline void set_OffsetDist_2(float value)
	{
		___OffsetDist_2 = value;
	}

	inline static int32_t get_offset_of__mesh_3() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____mesh_3)); }
	inline Mesh_t4241756145 * get__mesh_3() const { return ____mesh_3; }
	inline Mesh_t4241756145 ** get_address_of__mesh_3() { return &____mesh_3; }
	inline void set__mesh_3(Mesh_t4241756145 * value)
	{
		____mesh_3 = value;
		Il2CppCodeGenWriteBarrier(&____mesh_3, value);
	}

	inline static int32_t get_offset_of__vertices_4() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____vertices_4)); }
	inline Vector3U5BU5D_t215400611* get__vertices_4() const { return ____vertices_4; }
	inline Vector3U5BU5D_t215400611** get_address_of__vertices_4() { return &____vertices_4; }
	inline void set__vertices_4(Vector3U5BU5D_t215400611* value)
	{
		____vertices_4 = value;
		Il2CppCodeGenWriteBarrier(&____vertices_4, value);
	}

	inline static int32_t get_offset_of__leftFaceVert_5() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____leftFaceVert_5)); }
	inline List_1_t2522024052 * get__leftFaceVert_5() const { return ____leftFaceVert_5; }
	inline List_1_t2522024052 ** get_address_of__leftFaceVert_5() { return &____leftFaceVert_5; }
	inline void set__leftFaceVert_5(List_1_t2522024052 * value)
	{
		____leftFaceVert_5 = value;
		Il2CppCodeGenWriteBarrier(&____leftFaceVert_5, value);
	}

	inline static int32_t get_offset_of__rightFaceVert_6() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____rightFaceVert_6)); }
	inline List_1_t2522024052 * get__rightFaceVert_6() const { return ____rightFaceVert_6; }
	inline List_1_t2522024052 ** get_address_of__rightFaceVert_6() { return &____rightFaceVert_6; }
	inline void set__rightFaceVert_6(List_1_t2522024052 * value)
	{
		____rightFaceVert_6 = value;
		Il2CppCodeGenWriteBarrier(&____rightFaceVert_6, value);
	}

	inline static int32_t get_offset_of__topFaceVert_7() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____topFaceVert_7)); }
	inline List_1_t2522024052 * get__topFaceVert_7() const { return ____topFaceVert_7; }
	inline List_1_t2522024052 ** get_address_of__topFaceVert_7() { return &____topFaceVert_7; }
	inline void set__topFaceVert_7(List_1_t2522024052 * value)
	{
		____topFaceVert_7 = value;
		Il2CppCodeGenWriteBarrier(&____topFaceVert_7, value);
	}

	inline static int32_t get_offset_of__bottomeFaceVert_8() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____bottomeFaceVert_8)); }
	inline List_1_t2522024052 * get__bottomeFaceVert_8() const { return ____bottomeFaceVert_8; }
	inline List_1_t2522024052 ** get_address_of__bottomeFaceVert_8() { return &____bottomeFaceVert_8; }
	inline void set__bottomeFaceVert_8(List_1_t2522024052 * value)
	{
		____bottomeFaceVert_8 = value;
		Il2CppCodeGenWriteBarrier(&____bottomeFaceVert_8, value);
	}

	inline static int32_t get_offset_of__frontFaceVert_9() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____frontFaceVert_9)); }
	inline List_1_t2522024052 * get__frontFaceVert_9() const { return ____frontFaceVert_9; }
	inline List_1_t2522024052 ** get_address_of__frontFaceVert_9() { return &____frontFaceVert_9; }
	inline void set__frontFaceVert_9(List_1_t2522024052 * value)
	{
		____frontFaceVert_9 = value;
		Il2CppCodeGenWriteBarrier(&____frontFaceVert_9, value);
	}

	inline static int32_t get_offset_of__backFaceVert_10() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____backFaceVert_10)); }
	inline List_1_t2522024052 * get__backFaceVert_10() const { return ____backFaceVert_10; }
	inline List_1_t2522024052 ** get_address_of__backFaceVert_10() { return &____backFaceVert_10; }
	inline void set__backFaceVert_10(List_1_t2522024052 * value)
	{
		____backFaceVert_10 = value;
		Il2CppCodeGenWriteBarrier(&____backFaceVert_10, value);
	}

	inline static int32_t get_offset_of__targetVect_11() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____targetVect_11)); }
	inline Vector3_t4282066566  get__targetVect_11() const { return ____targetVect_11; }
	inline Vector3_t4282066566 * get_address_of__targetVect_11() { return &____targetVect_11; }
	inline void set__targetVect_11(Vector3_t4282066566  value)
	{
		____targetVect_11 = value;
	}

	inline static int32_t get_offset_of__numVerts_12() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____numVerts_12)); }
	inline int32_t get__numVerts_12() const { return ____numVerts_12; }
	inline int32_t* get_address_of__numVerts_12() { return &____numVerts_12; }
	inline void set__numVerts_12(int32_t value)
	{
		____numVerts_12 = value;
	}

	inline static int32_t get_offset_of__maxX_13() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____maxX_13)); }
	inline float get__maxX_13() const { return ____maxX_13; }
	inline float* get_address_of__maxX_13() { return &____maxX_13; }
	inline void set__maxX_13(float value)
	{
		____maxX_13 = value;
	}

	inline static int32_t get_offset_of__minX_14() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____minX_14)); }
	inline float get__minX_14() const { return ____minX_14; }
	inline float* get_address_of__minX_14() { return &____minX_14; }
	inline void set__minX_14(float value)
	{
		____minX_14 = value;
	}

	inline static int32_t get_offset_of__maxY_15() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____maxY_15)); }
	inline float get__maxY_15() const { return ____maxY_15; }
	inline float* get_address_of__maxY_15() { return &____maxY_15; }
	inline void set__maxY_15(float value)
	{
		____maxY_15 = value;
	}

	inline static int32_t get_offset_of__minY_16() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____minY_16)); }
	inline float get__minY_16() const { return ____minY_16; }
	inline float* get_address_of__minY_16() { return &____minY_16; }
	inline void set__minY_16(float value)
	{
		____minY_16 = value;
	}

	inline static int32_t get_offset_of__maxZ_17() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____maxZ_17)); }
	inline float get__maxZ_17() const { return ____maxZ_17; }
	inline float* get_address_of__maxZ_17() { return &____maxZ_17; }
	inline void set__maxZ_17(float value)
	{
		____maxZ_17 = value;
	}

	inline static int32_t get_offset_of__minZ_18() { return static_cast<int32_t>(offsetof(VertexAnimation_t4191345184, ____minZ_18)); }
	inline float get__minZ_18() const { return ____minZ_18; }
	inline float* get_address_of__minZ_18() { return &____minZ_18; }
	inline void set__minZ_18(float value)
	{
		____minZ_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
