#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64CC (0x693C - 0x470)
// AnimBlueprintGeneratedClass F_MED_Desert_Ops_Camo_Hair_AnimBP.F_MED_Desert_Ops_Camo_Hair_AnimBP_C
class UF_MED_Desert_Ops_Camo_Hair_AnimBP_C : public UCustomCharacterPartAnimInstance_DesertOpsCamoHair
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x478(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x580(0x108)(None)
	uint8                                        Pad_7210[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_6;                            // 0x690(0x1B0)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_5;                            // 0x840(0x1B0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x9F0(0x108)(None)
	uint8                                        Pad_7211[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_5;                         // 0xB00(0x5A0)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_4;                         // 0x10A0(0x5A0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x1640(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1748(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x1850(0x20)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt;                      // 0x1870(0xA0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x1910(0x20)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_4;                            // 0x1930(0x1B0)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_4;                  // 0x1AE0(0x140)(ContainsInstancedReference)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_3;                  // 0x1C20(0x140)(ContainsInstancedReference)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_8;                      // 0x1D60(0x440)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x21A0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x21C0(0x20)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_7;                      // 0x21E0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_6;                      // 0x2620(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5;                      // 0x2A60(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4;                      // 0x2EA0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3;                      // 0x32E0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_2;                      // 0x3720(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x3B60(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x3FA0(0x440)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_2;                  // 0x43E0(0x140)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x4520(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x4540(0x20)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_3;                            // 0x4560(0x1B0)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_2;                            // 0x4710(0x1B0)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_1;                            // 0x48C0(0x1B0)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x4A70(0x1B0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4C20(0xA0)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_1;                  // 0x4CC0(0x140)(ContainsInstancedReference)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_3;                         // 0x4E00(0x5A0)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_2;                         // 0x53A0(0x5A0)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_1;                         // 0x5940(0x5A0)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x5EE0(0x5A0)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0x6480(0x108)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x6588(0x140)(ContainsInstancedReference)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x66C8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x67D0(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x68D8(0x30)(None)
	bool                                         Long_hair_active;                                  // 0x6908(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7212[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                Mesh_To_Copy;                                      // 0x6910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArmSwingDelta_r;                                   // 0x6918(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArmSwingDelta_l;                                   // 0x691C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Active_hair_index;                                 // 0x6920(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Vest_active;                                       // 0x6924(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7213[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        No_vest_alpha;                                     // 0x6928(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hat_active;                                        // 0x692C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7214[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        No_hat_alpha;                                      // 0x6930(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        No_hat_short_alpha;                                // 0x6934(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Helmet_hairc_alpha;                                // 0x6938(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UF_MED_Desert_Ops_Camo_Hair_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void OnCharacterCustomizationLoaded();
	void ExecuteUbergraph_F_MED_Desert_Ops_Camo_Hair_AnimBP(int32 EntryPoint, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_1, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_1, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_2, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_2, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_3, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_3, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_4, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_4, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_5, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_5, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_6, bool CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue_6);
};

}


