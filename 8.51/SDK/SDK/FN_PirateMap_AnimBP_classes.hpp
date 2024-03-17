#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F8 - 0x268)
// AnimBlueprintGeneratedClass PirateMap_AnimBP.PirateMap_AnimBP_C
class UPirateMap_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5BC3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_C558A1E6443A631BD99890BE66F17199; // 0x278(0x20)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_DB629CDD46FE06085060519A2C3FDC9F; // 0x298(0x18)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_BD7EF89C478A36A3A875DEBF385F5C3B; // 0x2B0(0x48)(None)

	static class UClass* StaticClass();
	static class UPirateMap_AnimBP_C* GetDefaultObj();

	void ExecuteUbergraph_PirateMap_AnimBP(int32 EntryPoint);
};

}


