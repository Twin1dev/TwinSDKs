#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x358 - 0x268)
// AnimBlueprintGeneratedClass SlurpJuice_Prop_AnimBP.SlurpJuice_Prop_AnimBP_C
class USlurpJuice_Prop_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_6860[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_88BDDE744224870E2C760EAC7460A594; // 0x278(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9884AB784F0D78B1AB55BD9ABAE04FAF; // 0x298(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_88BBE8574985A3AD7C7D4FB01D09E1CF; // 0x2E0(0x78)(None)

	static class UClass* StaticClass();
	static class USlurpJuice_Prop_AnimBP_C* GetDefaultObj();

	void ExecuteUbergraph_SlurpJuice_Prop_AnimBP(int32 EntryPoint);
};

}


