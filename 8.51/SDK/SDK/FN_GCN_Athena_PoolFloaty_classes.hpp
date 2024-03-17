#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x351 - 0x338)
// BlueprintGeneratedClass GCN_Athena_PoolFloaty.GCN_Athena_PoolFloaty_C
class AGCN_Athena_PoolFloaty_C : public AFortGameplayCueNotify_Looping
{
public:
	class UArrowComponent*                       Arrow;                                             // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                PlayerPawn;                                        // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGCN_Athena_PoolFloaty_C* GetDefaultObj();

	void Activated(class AActor* PlayerPawn, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
};

}


