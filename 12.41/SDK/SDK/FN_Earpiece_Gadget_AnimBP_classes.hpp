#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x318 - 0x268)
// AnimBlueprintGeneratedClass Earpiece_Gadget_AnimBP.Earpiece_Gadget_AnimBP_C
class UEarpiece_Gadget_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_7215[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2A8(0x70)(None)

	static class UClass* StaticClass();
	static class UEarpiece_Gadget_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Earpiece_Gadget_AnimBP(int32 EntryPoint);
};

}


