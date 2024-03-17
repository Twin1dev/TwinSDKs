#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x708 (0x970 - 0x268)
// AnimBlueprintGeneratedClass SK_Pickaxe_Lion_AnimBP.SK_Pickaxe_Lion_AnimBP_C
class USK_Pickaxe_Lion_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_520D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_8D50838C44AF9D1DE0E0F0B928CFDF98; // 0x278(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_26C0AA3848EED348489A2C9D58E901BA; // 0x298(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_F885D8BE4E41E0AC4C2F1F986B927309; // 0x2B8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_E4F1A1A44E5CBA797024FABEB0F302C0; // 0x330(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_57AEDF414DB4EB76A7EAFBBC9D155BF7; // 0x350(0xB0)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_A5DA35424AD2DC86A0C279B34E798B69; // 0x400(0x550)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_09E7BBE9430017596BDF528EDCCD741A; // 0x950(0x20)(None)

	static class UClass* StaticClass();
	static class USK_Pickaxe_Lion_AnimBP_C* GetDefaultObj();

	void ExecuteUbergraph_SK_Pickaxe_Lion_AnimBP(int32 EntryPoint);
};

}


