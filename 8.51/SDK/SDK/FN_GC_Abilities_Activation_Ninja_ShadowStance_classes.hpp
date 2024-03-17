#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x498 - 0x338)
// BlueprintGeneratedClass GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C
class AGC_Abilities_Activation_Ninja_ShadowStance_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Animate_Ninja_ShadowStance_Dissolve_Inverse_Translucent_Shader_Opacity_BB0AFCD34C230AA0288885A106CC422E; // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Animate_Ninja_ShadowStance_Dissolve_NinjaDissolve_BB0AFCD34C230AA0288885A106CC422E; // 0x344(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Animate_Ninja_ShadowStance_Dissolve__Direction_BB0AFCD34C230AA0288885A106CC422E; // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Animate_Ninja_ShadowStance_Dissolve;               // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       MyTarget;                                          // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Shadow_Stance_Material;                            // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Ninja_Dissolve_Material;                           // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShadowStanceVisibility;                            // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D3D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            OG_Head_Materials;                                 // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UMaterial*, class UMaterialInterface*> DissolveMaterialMap;                               // 0x388(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>        Duplicate_Meshes;                                  // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            OG_Body_Materials;                                 // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            OG_Hat_Materials;                                  // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            OG_Backpack_Materials;                             // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            OG_Charm_Materials;                                // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            OG_Face_Materials;                                 // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      Dissolve_MIDs;                                     // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                Duplicate_Head;                                    // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Duplicate_Body;                                    // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Duplicate_Hat;                                     // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Duplicate_Backpack;                                // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Duplicate_Charm;                                   // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Duplicate_Face;                                    // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      Duplicate_MIDs;                                    // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      Previous_Weapon_MID;                               // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AGC_Abilities_Activation_Ninja_ShadowStance_C* GetDefaultObj();

	void Restore_Material_on_Weapon_Mesh(class AFortPlayerPawn* Player_Pawn, class AFortWeapon* Weapon_to_Restore__Defaults_to_Current_, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class AFortWeapon* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Override_Material_and_Copy_Parameters_on_Weapon_Mesh(class AFortPlayerPawn* Player_Pawn, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
	void Restore_OG_Materials(class AFortPlayerPawn* Ninja_Pawn, int32 Counter, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_4, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_4, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInterface* CallFunc_Array_Get_Item_1, int32 Temp_int_Array_Index_Variable_2, class UMaterialInterface* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_1, class UMaterialInterface* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UMaterialInterface* CallFunc_Array_Get_Item_4, int32 Temp_int_Array_Index_Variable_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item_5, class UMaterialInterface* CallFunc_Array_Get_Item_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_4, class UMaterialInterface* CallFunc_Array_Get_Item_7, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, class UMaterialInterface* CallFunc_Array_Get_Item_8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_5, class UMaterialInterface* CallFunc_Array_Get_Item_9, class UMaterialInterface* CallFunc_Array_Get_Item_10, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, class UMaterialInterface* CallFunc_Array_Get_Item_11, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5);
	void Destroy_Duplicate_Mesh(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5);
	void Create_Duplicate_Mesh(class AFortPlayerPawn* NinjaPawn, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_3, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_4, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_5, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_5, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_7, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FTransform& Temp_struct_Variable, class UMaterialInterface* CallFunc_Array_Get_Item_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Array_Index_Variable_2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_8, class UMaterialInterface* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_1, class UMaterialInterface* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FTransform& Temp_struct_Variable_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue_3, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue_1, int32 Temp_int_Array_Index_Variable_4, class UMaterialInterface* CallFunc_Array_Get_Item_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, int32 Temp_int_Array_Index_Variable_5, class UMaterialInterface* CallFunc_Array_Get_Item_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_4, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_10, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, const struct FTransform& Temp_struct_Variable_2, const struct FTransform& Temp_struct_Variable_3, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue_2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue_3, const struct FTransform& Temp_struct_Variable_4, bool CallFunc_K2_AttachToComponent_ReturnValue_2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, const struct FTransform& Temp_struct_Variable_5, bool CallFunc_K2_AttachToComponent_ReturnValue_4, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue_5, bool CallFunc_K2_AttachToComponent_ReturnValue_5);
	void Override_Material_to_Dissolve_Material(class AFortPlayerPawn* Ninja_Pawn, int32 Counter, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_3, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_3, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_5, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_5, int32 Temp_int_Array_Index_Variable, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, class UMaterialInterface* CallFunc_Array_Get_Item_1, class UMaterialInterface* CallFunc_Array_Get_Item_2, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2, bool K2Node_DynamicCast_bSuccess_2, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue_1, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue_2, class UMaterialInterface* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Array_Index_Variable_3, class UMaterialInterface* CallFunc_Array_Get_Item_3, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3, bool K2Node_DynamicCast_bSuccess_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UMaterialInterface* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_4, class UMaterialInterface* CallFunc_Array_Get_Item_4, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue_2, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_2, class UMaterialInterface* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, int32 Temp_int_Array_Index_Variable_5, int32 CallFunc_Array_Add_ReturnValue_2, class UMaterialInterface* CallFunc_Array_Get_Item_5, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_5, bool K2Node_DynamicCast_bSuccess_5, class UMaterial* CallFunc_GetBaseMaterial_ReturnValue_5, class UMaterialInterface* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_5, class UMaterialInterface* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, class UMaterialInterface* CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_5);
	void Save_Material(class AFortPlayerPawn* Ninja_Pawn, int32 Counter, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_4, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_4, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInterface* CallFunc_Array_Get_Item_1, int32 Temp_int_Array_Index_Variable_2, class UMaterialInterface* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, class UMaterialInterface* CallFunc_Array_Get_Item_3, int32 Temp_int_Array_Index_Variable_4, class UMaterialInterface* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_3, class UMaterialInterface* CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Array_Add_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_5);
	void Animate_Ninja_ShadowStance_Dissolve__FinishedFunc();
	void Animate_Ninja_ShadowStance_Dissolve__UpdateFunc();
	void Shadow_Stance_Dissolve_Timeline(bool Reverse);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ExecuteUbergraph_GC_Abilities_Activation_Ninja_ShadowStance(int32 EntryPoint, bool K2Node_CustomEvent_Reverse, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, class AFortWeapon* K2Node_CustomEvent_NewWeapon, class AFortWeapon* K2Node_CustomEvent_PrevWeapon, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


