#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38A8 - 0x3898)
// BlueprintGeneratedClass BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C
class ABP_Pawn_DangerGrape_C : public ABP_PlayerPawn_Athena_Phoebe_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3898(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              Effect_Hologram;                                   // 0x38A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Pawn_DangerGrape_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void PlayResOut();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ExecuteUbergraph_BP_Pawn_DangerGrape(int32 EntryPoint, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


