#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0xA6C - 0xA30)
// BlueprintGeneratedClass GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C
class UGA_HeldObject_Component_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 T_StatusHeldObject;                                // 0xA38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_HeldObjectPassive;                              // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_DanceStunned;                                    // 0xA60(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        DanceDropDelay;                                    // 0xA68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_HeldObject_Component_Passive_C* GetDefaultObj();

	void Added_EB79E5C3467383D5FAE134978A7BDE59();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_HeldObject_Component_Passive(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHeldObjectComponent* CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class UFortHeldObjectComponent* CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


