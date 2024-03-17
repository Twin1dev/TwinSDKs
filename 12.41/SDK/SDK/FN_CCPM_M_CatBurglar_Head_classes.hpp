#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B (0x3EC - 0x3B1)
// BlueprintGeneratedClass CCPM_M_CatBurglar_Head.CCPM_M_CatBurglar_Head_C
class ACCPM_M_CatBurglar_Head_C : public ACCPM_Base_C
{
public:
	uint8                                        Pad_71DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_BlankEffect;                                     // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  LastPawn;                                          // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SL_LastValue;                                      // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SL_RefreshTimeHandler;                             // 0x3D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        SL_StartLevel;                                     // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SL_EndLevel;                                       // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EndRadius;                                         // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACCPM_M_CatBurglar_Head_C* GetDefaultObj();

	void Death_Check(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UserConstructionScript(class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1);
	void OnStatChanged_6429FF264C5FC42E64F53EB173B73660(class FName StatName, int32 StatValue);
	void OnPawnAndPartChanged();
	void OnActualStatChange();
	void HackyWorkaroundRefreshTimerGuy();
	void OnPostResIn();
	void ResetSafetyGate();
	void ReceiveBeginPlay();
	void InitializeVariabels();
	void ExecuteUbergraph_CCPM_M_CatBurglar_Head(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable_1, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue, class FName Temp_name_Variable, int32 Temp_int_Variable, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_4, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue);
};

}


