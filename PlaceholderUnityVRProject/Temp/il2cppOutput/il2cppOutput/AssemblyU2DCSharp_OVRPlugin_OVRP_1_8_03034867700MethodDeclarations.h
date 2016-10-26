#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OVRPlugin_Bool1828096409.h"
#include "AssemblyU2DCSharp_OVRPlugin_BoundaryTestResult830279820.h"
#include "AssemblyU2DCSharp_OVRPlugin_Node4200749027.h"
#include "AssemblyU2DCSharp_OVRPlugin_BoundaryType1171722187.h"
#include "AssemblyU2DCSharp_OVRPlugin_Vector3f2438854983.h"
#include "AssemblyU2DCSharp_OVRPlugin_BoundaryLookAndFeel962285245.h"
#include "AssemblyU2DCSharp_OVRPlugin_BoundaryGeometry1848884777.h"
#include "AssemblyU2DCSharp_OVRPlugin_Posef1127343044.h"

// System.Void OVRPlugin/OVRP_1_8_0::.cctor()
extern "C"  void OVRP_1_8_0__cctor_m1762109094 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_8_0::ovrp_GetBoundaryConfigured()
extern "C"  int32_t OVRP_1_8_0_ovrp_GetBoundaryConfigured_m1902734185 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/BoundaryTestResult OVRPlugin/OVRP_1_8_0::ovrp_TestBoundaryNode(OVRPlugin/Node,OVRPlugin/BoundaryType)
extern "C"  BoundaryTestResult_t830279820  OVRP_1_8_0_ovrp_TestBoundaryNode_m820263810 (Il2CppObject * __this /* static, unused */, int32_t ___nodeId0, int32_t ___boundaryType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/BoundaryTestResult OVRPlugin/OVRP_1_8_0::ovrp_TestBoundaryPoint(OVRPlugin/Vector3f,OVRPlugin/BoundaryType)
extern "C"  BoundaryTestResult_t830279820  OVRP_1_8_0_ovrp_TestBoundaryPoint_m1730988236 (Il2CppObject * __this /* static, unused */, Vector3f_t2438854983  ___point0, int32_t ___boundaryType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_8_0::ovrp_SetBoundaryLookAndFeel(OVRPlugin/BoundaryLookAndFeel)
extern "C"  int32_t OVRP_1_8_0_ovrp_SetBoundaryLookAndFeel_m4157920058 (Il2CppObject * __this /* static, unused */, BoundaryLookAndFeel_t962285245  ___lookAndFeel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_8_0::ovrp_ResetBoundaryLookAndFeel()
extern "C"  int32_t OVRP_1_8_0_ovrp_ResetBoundaryLookAndFeel_m3736467034 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/BoundaryGeometry OVRPlugin/OVRP_1_8_0::ovrp_GetBoundaryGeometry(OVRPlugin/BoundaryType)
extern "C"  BoundaryGeometry_t1848884777  OVRP_1_8_0_ovrp_GetBoundaryGeometry_m4222927822 (Il2CppObject * __this /* static, unused */, int32_t ___boundaryType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Vector3f OVRPlugin/OVRP_1_8_0::ovrp_GetBoundaryDimensions(OVRPlugin/BoundaryType)
extern "C"  Vector3f_t2438854983  OVRP_1_8_0_ovrp_GetBoundaryDimensions_m3114098869 (Il2CppObject * __this /* static, unused */, int32_t ___boundaryType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_8_0::ovrp_GetBoundaryVisible()
extern "C"  int32_t OVRP_1_8_0_ovrp_GetBoundaryVisible_m3244457135 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_8_0::ovrp_SetBoundaryVisible(OVRPlugin/Bool)
extern "C"  int32_t OVRP_1_8_0_ovrp_SetBoundaryVisible_m4071015624 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Bool OVRPlugin/OVRP_1_8_0::ovrp_Update2(System.Int32,System.Int32,System.Double)
extern "C"  int32_t OVRP_1_8_0_ovrp_Update2_m2755126348 (Il2CppObject * __this /* static, unused */, int32_t ___stateId0, int32_t ___frameIndex1, double ___predictionSeconds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Posef OVRPlugin/OVRP_1_8_0::ovrp_GetNodePose2(System.Int32,OVRPlugin/Node)
extern "C"  Posef_t1127343044  OVRP_1_8_0_ovrp_GetNodePose2_m774583463 (Il2CppObject * __this /* static, unused */, int32_t ___stateId0, int32_t ___nodeId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Posef OVRPlugin/OVRP_1_8_0::ovrp_GetNodeVelocity2(System.Int32,OVRPlugin/Node)
extern "C"  Posef_t1127343044  OVRP_1_8_0_ovrp_GetNodeVelocity2_m960949053 (Il2CppObject * __this /* static, unused */, int32_t ___stateId0, int32_t ___nodeId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OVRPlugin/Posef OVRPlugin/OVRP_1_8_0::ovrp_GetNodeAcceleration2(System.Int32,OVRPlugin/Node)
extern "C"  Posef_t1127343044  OVRP_1_8_0_ovrp_GetNodeAcceleration2_m3359426730 (Il2CppObject * __this /* static, unused */, int32_t ___stateId0, int32_t ___nodeId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
