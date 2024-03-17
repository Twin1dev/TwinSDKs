#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7B (0x42C - 0x3B1)
// BlueprintGeneratedClass CCPM_M_HenchmanTough_FX.CCPM_M_HenchmanTough_FX_C
class ACCPM_M_HenchmanTough_FX_C : public ACCPM_Base_C
{
public:
	uint8                                        Pad_6570[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Player_Super_LevelUp;                            // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_BlankEffect_Idle;                                // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  LastPawn;                                          // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAthenaItemWrapDefinition> WeaponWrapToUse;                                   // 0x3D8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UFortItem*>                     PendingItemsToWrap;                                // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        SL_LastValue;                                      // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6571[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SL_RefreshTimeHandler;                             // 0x418(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        SL_StartLevel;                                     // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SL_EndLevel;                                       // 0x424(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EndRadius;                                         // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACCPM_M_HenchmanTough_FX_C* GetDefaultObj();

	void ApplyLevelParam(int32 Level, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void ApplyOverrideToItems(TArray<class UFortItem*>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UFortItem* CallFunc_Array_Get_Item, const struct FGuid& CallFunc_GetItemGuid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayerControllerAthena* CallFunc_GetAssociatedAthenaController_AsFort_Player_Controller_Athena, bool CallFunc_IsValid_ReturnValue);
	void GetAssociatedAthenaController(class AFortPlayerControllerAthena** AsFort_Player_Controller_Athena, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AActor* CallFunc_GetVehicleActor_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1, bool K2Node_DynamicCast_bSuccess_2);
	void Death_Check(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UserConstructionScript(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1);
	void OnStatChanged_2E79BA2044449410FBBC4F88F309DC3B(class FName StatName, int32 StatValue);
	void OnPawnAndPartChanged();
	void OnActualStatChange();
	void HackyWorkaroundRefreshTimerGuy();
	void ResetSafetyGate();
	void OnPostResIn();
	void InitializeVariabels();
	void ExecuteUbergraph_CCPM_M_HenchmanTough_FX(int32 EntryPoint, float CallFunc_Conv_IntToFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable_1, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1, class FName Temp_name_Variable, int32 Temp_int_Variable, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


