#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA71 - 0xA71)
// BlueprintGeneratedClass GA_Ranged_ExplosiveBow_Athena_Tina.GA_Ranged_ExplosiveBow_Athena_Tina_C
class UGA_Ranged_ExplosiveBow_Athena_Tina_C : public UGA_Ranged_GenericProjectileExplosive_Athena_C
{
public:

	static class UClass* StaticClass();
	static class UGA_Ranged_ExplosiveBow_Athena_Tina_C* GetDefaultObj();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, const struct FGameplayAttribute& Attribute, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsBotControlled_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void K2_CommitExecute(bool CallFunc_IsServer_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
};

}


