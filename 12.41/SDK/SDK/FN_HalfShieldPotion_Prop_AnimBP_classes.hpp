#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x368 - 0x268)
// AnimBlueprintGeneratedClass HalfShieldPotion_Prop_AnimBP.HalfShieldPotion_Prop_AnimBP_C
class UHalfShieldPotion_Prop_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_62DC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2F0(0x78)(None)

	static class UClass* StaticClass();
	static class UHalfShieldPotion_Prop_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_HalfShieldPotion_Prop_AnimBP(int32 EntryPoint);
};

}


