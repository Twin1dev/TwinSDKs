#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0xAA0 - 0xA30)
// BlueprintGeneratedClass GA_Athena_Donut_Lifesteal.GA_Athena_Donut_Lifesteal_C
class UGA_Athena_Donut_Lifesteal_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          T_Donut;                                           // 0xA38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_Heal;                                           // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       Player_Pawn;                                       // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Vehicle;                                         // 0xA50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_Heal_Mult;                                     // 0xA58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_ShouldHealShields;                             // 0xA78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          GC_HealMinor;                                      // 0xA98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_Donut_Lifesteal_C* GetDefaultObj();

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool Temp_bool_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_HasTag_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Athena_Donut_Lifesteal(int32 EntryPoint, bool Temp_bool_Variable, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMaxShield_ReturnValue, bool CallFunc_RowToBool_ReturnValue, float CallFunc_GetShield_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float Temp_float_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, float CallFunc_GetHealth_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float K2Node_Select_Default, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


