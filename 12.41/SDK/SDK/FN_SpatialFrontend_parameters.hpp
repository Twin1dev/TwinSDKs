#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function SpatialFrontend.SpatialFrontend_C.OnEventLevelTransitionComplete
struct USpatialFrontend_C_OnEventLevelTransitionComplete_Params
{
public:
	struct FGameplayTag                          ActiveCamera;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function SpatialFrontend.SpatialFrontend_C.OnEventLevelTransitionBegin
struct USpatialFrontend_C_OnEventLevelTransitionBegin_Params
{
public:
	struct FGameplayTag                          TargetCamera;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class AFortEventLevelNavigationActor*        TargetNavActor;                                    // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function SpatialFrontend.SpatialFrontend_C.ExecuteUbergraph_SpatialFrontend
struct USpatialFrontend_C_ExecuteUbergraph_SpatialFrontend_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_ActiveCamera;                         // 0x4(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_TargetCamera;                         // 0xC(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_533D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortEventLevelNavigationActor*        K2Node_Event_TargetNavActor;                       // 0x18(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_533E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortEventLevelNavigationDisplayDetails CallFunc_GetDisplayDetails_ReturnValue;            // 0x28(0x10)(None)
	class UBPS12MainRoomPOITag_C*                K2Node_DynamicCast_AsBPS12Main_Room_POITag;        // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_533F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Len_ReturnValue;                          // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


