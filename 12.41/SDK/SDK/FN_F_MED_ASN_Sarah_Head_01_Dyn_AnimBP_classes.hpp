#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x840 (0xC58 - 0x418)
// AnimBlueprintGeneratedClass F_MED_ASN_Sarah_Head_01_Dyn_AnimBP.F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C
class UF_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_71B5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x428(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x448(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4B8(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x4E8(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x508(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x5A8(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x5D0(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x688(0x28)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x6B0(0x5A0)(None)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0xC50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UF_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Dyn_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}


