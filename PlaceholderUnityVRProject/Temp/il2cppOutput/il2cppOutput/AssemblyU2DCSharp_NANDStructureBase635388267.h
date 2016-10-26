#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NANDStructureBase
struct  NANDStructureBase_t635388267  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject NANDStructureBase::PFilmTemplate
	GameObject_t1756533147 * ___PFilmTemplate_2;
	// UnityEngine.GameObject NANDStructureBase::NFilmTemplate
	GameObject_t1756533147 * ___NFilmTemplate_3;
	// UnityEngine.Transform NANDStructureBase::StartPos
	Transform_t3275118058 * ___StartPos_4;
	// System.Int32 NANDStructureBase::PNLayerNum
	int32_t ___PNLayerNum_5;
	// UnityEngine.GameObject NANDStructureBase::BaseFilmGO
	GameObject_t1756533147 * ___BaseFilmGO_6;
	// UnityEngine.GameObject[] NANDStructureBase::PNGOs
	GameObjectU5BU5D_t3057952154* ___PNGOs_7;
	// System.Single NANDStructureBase::scaleZ
	float ___scaleZ_8;
	// System.Single NANDStructureBase::posY
	float ___posY_9;
	// System.Single NANDStructureBase::posZ
	float ___posZ_10;

public:
	inline static int32_t get_offset_of_PFilmTemplate_2() { return static_cast<int32_t>(offsetof(NANDStructureBase_t635388267, ___PFilmTemplate_2)); }
	inline GameObject_t1756533147 * get_PFilmTemplate_2() const { return ___PFilmTemplate_2; }
	inline GameObject_t1756533147 ** get_address_of_PFilmTemplate_2() { return &___PFilmTemplate_2; }
	inline void set_PFilmTemplate_2(GameObject_t1756533147 * value)
	{
		___PFilmTemplate_2 = value;
		Il2CppCodeGenWriteBarrier(&___PFilmTemplate_2, value);
	}

	inline static int32_t get_offset_of_NFilmTemplate_3() { return static_cast<int32_t>(offsetof(NANDStructureBase_t635388267, ___NFilmTemplate_3)); }
	inline GameObject_t1756533147 * get_NFilmTemplate_3() const { return ___NFilmTemplate_3; }
	inline GameObject_t1756533147 ** get_address_of_NFilmTemplate_3() { return &___NFilmTemplate_3; }
	inline void set_NFilmTemplate_3(GameObject_t1756533147 * value)
	{
		___NFilmTemplate_3 = value;
		Il2CppCodeGenWriteBarrier(&___NFilmTemplate_3, value);
	}

	inline static int32_t get_offset_of_StartPos_4() { return static_cast<int32_t>(offsetof(NANDStructureBase_t635388267, ___StartPos_4)); }
	inline Transform_t3275118058 * get_StartPos_4() const { return ___StartPos_4; }
	inline Transform_t3275118058 ** get_address_of_StartPos_4() { return &___StartPos_4; }
	inline void set_StartPos_4(Transform_t3275118058 * value)
	{
		___StartPos_4 = value;
		Il2CppCodeGenWriteBarrier(&___StartPos_4, value);
	}

	inline static int32_t get_offset_of_PNLayerNum_5() { return static_cast<int32_t>(offsetof(NANDStructureBase_t635388267, ___PNLayerNum_5)); }
	inline int32_t get_PNLayerNum_5() const { return ___PNLayerNum_5; }
	inline int32_t* get_address_of_PNLayerNum_5() { return &___PNLayerNum_5; }
	inline void set_PNLayerNum_5(int32_t value)
	{
		___PNLayerNum_5 = value;
	}

	inline static int32_t get_offset_of_BaseFilmGO_6() { return static_cast<int32_t>(offsetof(NANDStructureBase_t635388267, ___BaseFilmGO_6)); }
	inline GameObject_t1756533147 * get_BaseFilmGO_6() const { return ___BaseFilmGO_6; }
	inline GameObject_t1756533147 ** get_address_of_BaseFilmGO_6() { return &___BaseFilmGO_6; }
	inline void set_BaseFilmGO_6(GameObject_t1756533147 * value)
	{
		___BaseFilmGO_6 = value;
		Il2CppCodeGenWriteBarrier(&___BaseFilmGO_6, value);
	}

	inline static int32_t get_offset_of_PNGOs_7() { return static_cast<int32_t>(offsetof(NANDStructureBase_t635388267, ___PNGOs_7)); }
	inline GameObjectU5BU5D_t3057952154* get_PNGOs_7() const { return ___PNGOs_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_PNGOs_7() { return &___PNGOs_7; }
	inline void set_PNGOs_7(GameObjectU5BU5D_t3057952154* value)
	{
		___PNGOs_7 = value;
		Il2CppCodeGenWriteBarrier(&___PNGOs_7, value);
	}

	inline static int32_t get_offset_of_scaleZ_8() { return static_cast<int32_t>(offsetof(NANDStructureBase_t635388267, ___scaleZ_8)); }
	inline float get_scaleZ_8() const { return ___scaleZ_8; }
	inline float* get_address_of_scaleZ_8() { return &___scaleZ_8; }
	inline void set_scaleZ_8(float value)
	{
		___scaleZ_8 = value;
	}

	inline static int32_t get_offset_of_posY_9() { return static_cast<int32_t>(offsetof(NANDStructureBase_t635388267, ___posY_9)); }
	inline float get_posY_9() const { return ___posY_9; }
	inline float* get_address_of_posY_9() { return &___posY_9; }
	inline void set_posY_9(float value)
	{
		___posY_9 = value;
	}

	inline static int32_t get_offset_of_posZ_10() { return static_cast<int32_t>(offsetof(NANDStructureBase_t635388267, ___posZ_10)); }
	inline float get_posZ_10() const { return ___posZ_10; }
	inline float* get_address_of_posZ_10() { return &___posZ_10; }
	inline void set_posZ_10(float value)
	{
		___posZ_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
