#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xE40 - 0xDA0)
// BlueprintGeneratedClass GA_Athena_Throw_SneakySnowmanV2.GA_Athena_Throw_SneakySnowmanV2_C
class UGA_Athena_Throw_SneakySnowmanV2_C : public UGA_ThrowConsumable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          TrackSnowmenTag;                                   // 0xDA8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortProjectileBase*>           SnowmenActors;                                     // 0xDB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TSoftClassPtr<class AActor>                  GolfCartSoftClass;                                 // 0xDC0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              SnowmanItemDef;                                    // 0xDE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     SnowmanItemInstances;                              // 0xDF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayAttribute                    Attribute;                                         // 0xE00(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                AttributeCostGE;                                   // 0xE38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_Throw_SneakySnowmanV2_C* GetDefaultObj();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, const struct FSoftClassPath& GolfCart, const struct FVector& Temp_struct_Variable, bool Temp_bool_Variable, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class AActor* CallFunc_GetVehicleActor_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& K2Node_Select_Default);
	void K2_ActivateAbility();
	void K2_CommitExecute();
	void ExecuteUbergraph_GA_Athena_Throw_SneakySnowmanV2(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


