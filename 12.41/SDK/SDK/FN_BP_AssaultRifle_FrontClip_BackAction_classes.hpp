#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x308 - 0x268)
// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C
class UBP_AssaultRifle_FrontClip_BackAction_C : public UAnimInstance
{
public:
	uint8                                        Pad_59AF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x2A8(0x18)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2C0(0x48)(None)

	static class UClass* StaticClass();
	static class UBP_AssaultRifle_FrontClip_BackAction_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction(int32 EntryPoint);
};

}


