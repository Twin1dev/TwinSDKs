#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x608 (0x870 - 0x268)
// AnimBlueprintGeneratedClass Pickaxe_Rhino_AnimBlueprint.Pickaxe_Rhino_AnimBlueprint_C
class UPickaxe_Rhino_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_28FC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_B338F36F4A96F29AF29546A430EEB6D1; // 0x278(0x20)(None)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_0A688F724C4804496F7057B1DA3573EF; // 0x298(0x48)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_69841E3A45072CCDC404A5BB8795C346; // 0x2E0(0x550)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_28CBDE064A82CB1CEAD5B4963C22704A; // 0x830(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_62E8F4EB43FE70F8EDDEF08EAD87625B; // 0x850(0x20)(None)

	static class UClass* StaticClass();
	static class UPickaxe_Rhino_AnimBlueprint_C* GetDefaultObj();

	void ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint(int32 EntryPoint);
};

}


