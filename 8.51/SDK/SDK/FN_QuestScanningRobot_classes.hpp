#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x708 - 0x6E8)
// BlueprintGeneratedClass QuestScanningRobot.QuestScanningRobot_C
class AQuestScanningRobot_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  BaseBotGame;                                       // 0x6F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AQuestScanningRobot_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Animdone(class UAnimMontage* Montage, bool bInterrupted);
	void ExecuteUbergraph_QuestScanningRobot(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class UAnimMontage* K2Node_CustomEvent_Montage, bool K2Node_CustomEvent_bInterrupted, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


