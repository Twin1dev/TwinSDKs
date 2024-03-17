#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x358 - 0x268)
// AnimBlueprintGeneratedClass MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C
class UMiniShieldPotion_Prop_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5733[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_ADBF5B5247A0D734AE3EC09836B87FFF; // 0x278(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_78F97BF7428BE467D018D1901FBFBB3A; // 0x298(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_643128CD4E51CB7A8C42BF87DED7A3A0; // 0x2E0(0x78)(None)

	static class UClass* StaticClass();
	static class UMiniShieldPotion_Prop_AnimBP_C* GetDefaultObj();

	void ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP(int32 EntryPoint);
};

}


