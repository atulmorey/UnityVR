#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OVROverlay[]
struct OVROverlayU5BU5D_t4241618002;
// UnityEngine.Texture[]
struct TextureU5BU5D_t2474608790;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_OVROverlay_OverlayType2007690248.h"
#include "AssemblyU2DCSharp_OVROverlay_OverlayShape575632673.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVROverlay
struct  OVROverlay_t4027813699  : public MonoBehaviour_t1158329972
{
public:
	// OVROverlay/OverlayType OVROverlay::currentOverlayType
	int32_t ___currentOverlayType_4;
	// OVROverlay/OverlayShape OVROverlay::currentOverlayShape
	int32_t ___currentOverlayShape_5;
	// UnityEngine.Texture[] OVROverlay::textures
	TextureU5BU5D_t2474608790* ___textures_6;
	// UnityEngine.Texture[] OVROverlay::cachedTextures
	TextureU5BU5D_t2474608790* ___cachedTextures_7;
	// System.IntPtr[] OVROverlay::texNativePtrs
	IntPtrU5BU5D_t169632028* ___texNativePtrs_8;
	// System.Int32 OVROverlay::layerIndex
	int32_t ___layerIndex_9;
	// UnityEngine.Renderer OVROverlay::rend
	Renderer_t257310565 * ___rend_10;

public:
	inline static int32_t get_offset_of_currentOverlayType_4() { return static_cast<int32_t>(offsetof(OVROverlay_t4027813699, ___currentOverlayType_4)); }
	inline int32_t get_currentOverlayType_4() const { return ___currentOverlayType_4; }
	inline int32_t* get_address_of_currentOverlayType_4() { return &___currentOverlayType_4; }
	inline void set_currentOverlayType_4(int32_t value)
	{
		___currentOverlayType_4 = value;
	}

	inline static int32_t get_offset_of_currentOverlayShape_5() { return static_cast<int32_t>(offsetof(OVROverlay_t4027813699, ___currentOverlayShape_5)); }
	inline int32_t get_currentOverlayShape_5() const { return ___currentOverlayShape_5; }
	inline int32_t* get_address_of_currentOverlayShape_5() { return &___currentOverlayShape_5; }
	inline void set_currentOverlayShape_5(int32_t value)
	{
		___currentOverlayShape_5 = value;
	}

	inline static int32_t get_offset_of_textures_6() { return static_cast<int32_t>(offsetof(OVROverlay_t4027813699, ___textures_6)); }
	inline TextureU5BU5D_t2474608790* get_textures_6() const { return ___textures_6; }
	inline TextureU5BU5D_t2474608790** get_address_of_textures_6() { return &___textures_6; }
	inline void set_textures_6(TextureU5BU5D_t2474608790* value)
	{
		___textures_6 = value;
		Il2CppCodeGenWriteBarrier(&___textures_6, value);
	}

	inline static int32_t get_offset_of_cachedTextures_7() { return static_cast<int32_t>(offsetof(OVROverlay_t4027813699, ___cachedTextures_7)); }
	inline TextureU5BU5D_t2474608790* get_cachedTextures_7() const { return ___cachedTextures_7; }
	inline TextureU5BU5D_t2474608790** get_address_of_cachedTextures_7() { return &___cachedTextures_7; }
	inline void set_cachedTextures_7(TextureU5BU5D_t2474608790* value)
	{
		___cachedTextures_7 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTextures_7, value);
	}

	inline static int32_t get_offset_of_texNativePtrs_8() { return static_cast<int32_t>(offsetof(OVROverlay_t4027813699, ___texNativePtrs_8)); }
	inline IntPtrU5BU5D_t169632028* get_texNativePtrs_8() const { return ___texNativePtrs_8; }
	inline IntPtrU5BU5D_t169632028** get_address_of_texNativePtrs_8() { return &___texNativePtrs_8; }
	inline void set_texNativePtrs_8(IntPtrU5BU5D_t169632028* value)
	{
		___texNativePtrs_8 = value;
		Il2CppCodeGenWriteBarrier(&___texNativePtrs_8, value);
	}

	inline static int32_t get_offset_of_layerIndex_9() { return static_cast<int32_t>(offsetof(OVROverlay_t4027813699, ___layerIndex_9)); }
	inline int32_t get_layerIndex_9() const { return ___layerIndex_9; }
	inline int32_t* get_address_of_layerIndex_9() { return &___layerIndex_9; }
	inline void set_layerIndex_9(int32_t value)
	{
		___layerIndex_9 = value;
	}

	inline static int32_t get_offset_of_rend_10() { return static_cast<int32_t>(offsetof(OVROverlay_t4027813699, ___rend_10)); }
	inline Renderer_t257310565 * get_rend_10() const { return ___rend_10; }
	inline Renderer_t257310565 ** get_address_of_rend_10() { return &___rend_10; }
	inline void set_rend_10(Renderer_t257310565 * value)
	{
		___rend_10 = value;
		Il2CppCodeGenWriteBarrier(&___rend_10, value);
	}
};

struct OVROverlay_t4027813699_StaticFields
{
public:
	// OVROverlay[] OVROverlay::instances
	OVROverlayU5BU5D_t4241618002* ___instances_3;

public:
	inline static int32_t get_offset_of_instances_3() { return static_cast<int32_t>(offsetof(OVROverlay_t4027813699_StaticFields, ___instances_3)); }
	inline OVROverlayU5BU5D_t4241618002* get_instances_3() const { return ___instances_3; }
	inline OVROverlayU5BU5D_t4241618002** get_address_of_instances_3() { return &___instances_3; }
	inline void set_instances_3(OVROverlayU5BU5D_t4241618002* value)
	{
		___instances_3 = value;
		Il2CppCodeGenWriteBarrier(&___instances_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
