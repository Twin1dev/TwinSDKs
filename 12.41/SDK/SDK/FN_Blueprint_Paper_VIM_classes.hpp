#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x510 (0x858 - 0x348)
// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{
public:
	uint8                                        Pad_6357[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_3;                        // 0x358(0x128)(None)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_2;                        // 0x480(0x128)(None)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_1;                        // 0x5A8(0x128)(None)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone;                          // 0x6D0(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x7F8(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x818(0x30)(None)
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose;                         // 0x848(0x10)(None)

	static class UClass* StaticClass();
	static class UBlueprint_Paper_VIM_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Blueprint_Paper_VIM(int32 EntryPoint);
};

}


