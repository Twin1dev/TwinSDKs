#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x358 - 0x268)
// AnimBlueprintGeneratedClass HalfShieldPotion_Prop_AnimBP.HalfShieldPotion_Prop_AnimBP_C
class UHalfShieldPotion_Prop_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_6861[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_D18361C34D981BDD1A63009152AAF787; // 0x278(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4E170F124EACAF56EFA1518CC3C8608F; // 0x298(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1388951E4BA0BDBA8187FB9DC79ADE82; // 0x2E0(0x78)(None)

	static class UClass* StaticClass();
	static class UHalfShieldPotion_Prop_AnimBP_C* GetDefaultObj();

	void ExecuteUbergraph_HalfShieldPotion_Prop_AnimBP(int32 EntryPoint);
};

}


