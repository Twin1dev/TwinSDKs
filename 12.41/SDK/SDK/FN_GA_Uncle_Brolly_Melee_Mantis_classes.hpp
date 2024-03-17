#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA60 - 0xA50)
// BlueprintGeneratedClass GA_Uncle_Brolly_Melee_Mantis.GA_Uncle_Brolly_Melee_Mantis_C
class UGA_Uncle_Brolly_Melee_Mantis_C : public UFortGameplayAbility_Mantis
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerCharacter;                                   // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Uncle_Brolly_Melee_Mantis_C* GetDefaultObj();

	void K2_ActivateAbility();
	void BP_OnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Uncle_Brolly_Melee_Mantis(int32 EntryPoint, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, class AB_UncleBrolly_C* K2Node_DynamicCast_AsB_Uncle_Brolly, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetDataHandle, const struct FGameplayTag& K2Node_Event_ApplicationTag, float CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue_1, bool K2Node_Event_bWasCancelled, class AB_UncleBrolly_C* K2Node_DynamicCast_AsB_Uncle_Brolly_1, bool K2Node_DynamicCast_bSuccess_2);
};

}


