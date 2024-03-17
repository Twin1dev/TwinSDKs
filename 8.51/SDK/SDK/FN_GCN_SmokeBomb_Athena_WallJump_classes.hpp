#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1A0 - 0x1A0)
// BlueprintGeneratedClass GCN_SmokeBomb_Athena_WallJump.GCN_SmokeBomb_Athena_WallJump_C
class UGCN_SmokeBomb_Athena_WallJump_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass();
	static class UGCN_SmokeBomb_Athena_WallJump_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}


