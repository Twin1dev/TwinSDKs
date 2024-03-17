#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x454 - 0x408)
// BlueprintGeneratedClass CCPM_M_BuffCat_FX.CCPM_M_BuffCat_FX_C
class ACCPM_M_BuffCat_FX_C : public ACCPM_Parent_WatchCosmeticStat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Player_Super_LevelUp;                            // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Skeleton_BuffCat_Top;                            // 0x418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_BuffCat_Update;                                  // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_MED_The_Golden_Skeleton_Glow;                    // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  LastPawn;                                          // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Kill;                                              // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SL_LastValue;                                      // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SL_RefreshTimeHandler;                             // 0x440(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        SL_StartLevel;                                     // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SL_EndLevel;                                       // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EndRadius;                                         // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACCPM_M_BuffCat_FX_C* GetDefaultObj();

	void Death_Check(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UserConstructionScript(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1);
	void OnStatChanged_168684444EA6A0EA706C04B4FCB6F5DE(class FName StatName, int32 StatValue);
	void OnStatChanged_54972B074DDF6ACBB3E4E18C62C90A22(class FName StatName, int32 StatValue);
	void Kill__1();
	void UpdateBasedOnKills();
	void Kill__2();
	void Kill__3();
	void Kill__4();
	void Kill__5();
	void OnPawnAndPartChanged();
	void ActivatingCosmeticState(int32 StageNumBeingActivated);
	void OnActualStatChange();
	void HackyWorkaroundRefreshTimerGuy();
	void ResetSafetyGate();
	void OnPostResIn();
	void InitializeVariabels();
	void ExecuteUbergraph_CCPM_M_BuffCat_FX(int32 EntryPoint, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class FName Temp_name_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 K2Node_Event_StageNumBeingActivated, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_1, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_2, class FName Temp_name_Variable_1, int32 Temp_int_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_5, class FName K2Node_CustomEvent_StatName_1, int32 K2Node_CustomEvent_StatValue_1);
};

}


