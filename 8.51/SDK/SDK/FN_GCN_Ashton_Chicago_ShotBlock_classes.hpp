#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x1AC - 0x1A0)
// BlueprintGeneratedClass GCN_Ashton_Chicago_ShotBlock.GCN_Ashton_Chicago_ShotBlock_C
class UGCN_Ashton_Chicago_ShotBlock_C : public UFortGameplayCueNotify_Burst
{
public:
	struct FRotator                              RotationFromXVector;                               // 0x1A0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGCN_Ashton_Chicago_ShotBlock_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
};

}


