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

// 0x28 (0x28 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingDiveJumpingLayer
struct USwimmingAnimBP_C_SwimmingDiveJumpingLayer_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingDiveJumping;                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         IsHidingInPropLayer2;                              // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_454A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MainInstanceDiveJumpLayerAlpha;                    // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             SwimmingDiveJumpingLayer;                          // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingFullBodyAdditiveLayer
struct USwimmingAnimBP_C_SwimmingFullBodyAdditiveLayer_Params
{
public:
	struct FPoseLink                             PassThroughFullBodyAdditive;                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingFullBodyAdditiveLayer;                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingAdditiveLayer
struct USwimmingAnimBP_C_SwimmingAdditiveLayer_Params
{
public:
	struct FPoseLink                             IdleAdditive_Cache;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementAdditiveLayerPose_Cache;                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             FullBody;                                          // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        PlayMeleeAttackAOLayer;                            // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DisableArmsHeadAdditiveCurveAlphaLayer;            // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DisableIKRootAdditiveCurveAlphaLayer;              // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocomotionAdditiveAlphaLayer;                      // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MainInstanceAdditiveLayerAlpha;                    // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4550[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             UpperAndLowerBody_Cache;                           // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SprintingPose_PostMask_Cache;                      // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingAdditiveLayer;                             // 0x68(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingLowerBodyLayer
struct USwimmingAnimBP_C_SwimmingLowerBodyLayer_Params
{
public:
	struct FPoseLink                             UpperBody_Cache;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             PreUpperBodySlot_Cache;                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             PassThroughSwimmingLowerBody;                      // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingLowerBodyLayer;                            // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingUpperBodyPoseNonTargetingLayer
struct USwimmingAnimBP_C_SwimmingUpperBodyPoseNonTargetingLayer_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingUpperBodyPoseNonTargeting;      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingUpperBodyPoseNonTargetingLayer;            // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingUpperBodyPoseTargetingLayer
struct USwimmingAnimBP_C_SwimmingUpperBodyPoseTargetingLayer_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingUpperBodyPoseTargeting;         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingUpperBodyPoseTargetingLayer;               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingMovementAdditiveLayerPose
struct USwimmingAnimBP_C_SwimmingMovementAdditiveLayerPose_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingMovementAdditive;               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingMovementAdditiveLayerPose;                 // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingSprintLayer
struct USwimmingAnimBP_C_SwimmingSprintLayer_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingSprint;                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         IsHidingInPropLayer;                               // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_455B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             SwimmingSprintLayer;                               // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingLayer
struct USwimmingAnimBP_C_SwimmingLayer_Params
{
public:
	struct FPoseLink                             MainPlayerAnimBP;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingLayer;                                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimGraph
struct USwimmingAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x16 (0x16 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.ExecuteUbergraph_SwimmingAnimBP
struct USwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4567[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetRelevantAnimTime_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4568[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetRelevantAnimTime_ReturnValue_1;        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


