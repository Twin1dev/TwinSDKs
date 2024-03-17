#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x364 (0x77C - 0x418)
// AnimBlueprintGeneratedClass M_LRG_Buff_Cat_Tail_PostSim_AnimBP.M_LRG_Buff_Cat_Tail_PostSim_AnimBP_C
class UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_580B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x458(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x478(0x20)(None)
	uint8                                        Pad_580C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Trail                       AnimGraphNode_Trail;                               // 0x4A0(0x260)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x700(0x70)(None)
	bool                                         IsWearingCape;                                     // 0x770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsWearingBackbling;                                // 0x771(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_580D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TrailAlpha;                                        // 0x774(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RelaxSpeed;                                        // 0x778(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UM_LRG_Buff_Cat_Tail_PostSim_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void OnCharacterCustomizationLoaded();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_M_LRG_Buff_Cat_Tail_PostSim_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_CheckForBackbling_bIsWearingBackbling, bool CallFunc_CheckForBackbling_bIsBackblingLong, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetOwnerDirection_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
};

}


