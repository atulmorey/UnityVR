#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t1137456562;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OVRRTOverlayConnector
struct  OVRRTOverlayConnector_t25271088  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 OVRRTOverlayConnector::alphaBorderSizePixels
	int32_t ___alphaBorderSizePixels_3;
	// System.Int32 OVRRTOverlayConnector::overlayRTIndex
	int32_t ___overlayRTIndex_4;
	// System.IntPtr[] OVRRTOverlayConnector::overlayTexturePtrs
	IntPtrU5BU5D_t169632028* ___overlayTexturePtrs_5;
	// UnityEngine.RenderTexture[] OVRRTOverlayConnector::overlayRTChain
	RenderTextureU5BU5D_t1137456562* ___overlayRTChain_6;
	// UnityEngine.GameObject OVRRTOverlayConnector::ovrOverlayObj
	GameObject_t1756533147 * ___ovrOverlayObj_7;
	// UnityEngine.RenderTexture OVRRTOverlayConnector::srcRT
	RenderTexture_t2666733923 * ___srcRT_8;
	// UnityEngine.Camera OVRRTOverlayConnector::ownerCamera
	Camera_t189460977 * ___ownerCamera_9;

public:
	inline static int32_t get_offset_of_alphaBorderSizePixels_3() { return static_cast<int32_t>(offsetof(OVRRTOverlayConnector_t25271088, ___alphaBorderSizePixels_3)); }
	inline int32_t get_alphaBorderSizePixels_3() const { return ___alphaBorderSizePixels_3; }
	inline int32_t* get_address_of_alphaBorderSizePixels_3() { return &___alphaBorderSizePixels_3; }
	inline void set_alphaBorderSizePixels_3(int32_t value)
	{
		___alphaBorderSizePixels_3 = value;
	}

	inline static int32_t get_offset_of_overlayRTIndex_4() { return static_cast<int32_t>(offsetof(OVRRTOverlayConnector_t25271088, ___overlayRTIndex_4)); }
	inline int32_t get_overlayRTIndex_4() const { return ___overlayRTIndex_4; }
	inline int32_t* get_address_of_overlayRTIndex_4() { return &___overlayRTIndex_4; }
	inline void set_overlayRTIndex_4(int32_t value)
	{
		___overlayRTIndex_4 = value;
	}

	inline static int32_t get_offset_of_overlayTexturePtrs_5() { return static_cast<int32_t>(offsetof(OVRRTOverlayConnector_t25271088, ___overlayTexturePtrs_5)); }
	inline IntPtrU5BU5D_t169632028* get_overlayTexturePtrs_5() const { return ___overlayTexturePtrs_5; }
	inline IntPtrU5BU5D_t169632028** get_address_of_overlayTexturePtrs_5() { return &___overlayTexturePtrs_5; }
	inline void set_overlayTexturePtrs_5(IntPtrU5BU5D_t169632028* value)
	{
		___overlayTexturePtrs_5 = value;
		Il2CppCodeGenWriteBarrier(&___overlayTexturePtrs_5, value);
	}

	inline static int32_t get_offset_of_overlayRTChain_6() { return static_cast<int32_t>(offsetof(OVRRTOverlayConnector_t25271088, ___overlayRTChain_6)); }
	inline RenderTextureU5BU5D_t1137456562* get_overlayRTChain_6() const { return ___overlayRTChain_6; }
	inline RenderTextureU5BU5D_t1137456562** get_address_of_overlayRTChain_6() { return &___overlayRTChain_6; }
	inline void set_overlayRTChain_6(RenderTextureU5BU5D_t1137456562* value)
	{
		___overlayRTChain_6 = value;
		Il2CppCodeGenWriteBarrier(&___overlayRTChain_6, value);
	}

	inline static int32_t get_offset_of_ovrOverlayObj_7() { return static_cast<int32_t>(offsetof(OVRRTOverlayConnector_t25271088, ___ovrOverlayObj_7)); }
	inline GameObject_t1756533147 * get_ovrOverlayObj_7() const { return ___ovrOverlayObj_7; }
	inline GameObject_t1756533147 ** get_address_of_ovrOverlayObj_7() { return &___ovrOverlayObj_7; }
	inline void set_ovrOverlayObj_7(GameObject_t1756533147 * value)
	{
		___ovrOverlayObj_7 = value;
		Il2CppCodeGenWriteBarrier(&___ovrOverlayObj_7, value);
	}

	inline static int32_t get_offset_of_srcRT_8() { return static_cast<int32_t>(offsetof(OVRRTOverlayConnector_t25271088, ___srcRT_8)); }
	inline RenderTexture_t2666733923 * get_srcRT_8() const { return ___srcRT_8; }
	inline RenderTexture_t2666733923 ** get_address_of_srcRT_8() { return &___srcRT_8; }
	inline void set_srcRT_8(RenderTexture_t2666733923 * value)
	{
		___srcRT_8 = value;
		Il2CppCodeGenWriteBarrier(&___srcRT_8, value);
	}

	inline static int32_t get_offset_of_ownerCamera_9() { return static_cast<int32_t>(offsetof(OVRRTOverlayConnector_t25271088, ___ownerCamera_9)); }
	inline Camera_t189460977 * get_ownerCamera_9() const { return ___ownerCamera_9; }
	inline Camera_t189460977 ** get_address_of_ownerCamera_9() { return &___ownerCamera_9; }
	inline void set_ownerCamera_9(Camera_t189460977 * value)
	{
		___ownerCamera_9 = value;
		Il2CppCodeGenWriteBarrier(&___ownerCamera_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
