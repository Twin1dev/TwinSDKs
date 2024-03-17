#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2A8 - 0x230)
// BlueprintGeneratedClass B_EmotePreviewDisplay.B_EmotePreviewDisplay_C
class AB_EmotePreviewDisplay_C : public AFortEmotePreviewActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Scene;                                             // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAthenaEmojiItemDefinition*            EmojiItemDefinition;                               // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimMontage>           Animation;                                         // 0x248(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UFortMontageItemDefinitionBase*        DanceOrEmojiItemDefinition;                        // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  StartSectionName;                                  // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnEmoteSetupFinished;                              // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAthenaShoutItemDefinition*            ShoutItemDefinition;                               // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>               DynamicallySpawnedSounds;                          // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class AB_EmotePreviewDisplay_C* GetDefaultObj();

	void CleanupDynamicSounds(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAudioComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void ApplyEmoteToPet(bool IsRemoval, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortPetAnimInstance* K2Node_DynamicCast_AsFort_Pet_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
	void OnLoaded_638F148342254A777E929B88915A8958(class UObject* Loaded);
	void PreviewEmote(class UFortMontageItemDefinitionBase* Emote);
	void PerformSpecialAction(class FName ActionName);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void SpecialCaseShoutHandler();
	void ExecuteUbergraph_B_EmotePreviewDisplay(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class FName K2Node_Event_ActionName, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UObject* Temp_object_Variable, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, class UFortMontageItemDefinitionBase* K2Node_Event_Emote, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UFortEmojiPreviewComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& Temp_struct_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, class UFortEmojiPreviewComponent* CallFunc_AddComponent_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_ShouldPlayRandomSectionByName_ReturnValue, class UAthenaShoutItemDefinition* K2Node_DynamicCast_AsAthena_Shout_Item_Definition, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAthenaEmojiItemDefinition* K2Node_DynamicCast_AsAthena_Emoji_Item_Definition, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_RandomFloatInRange_ReturnValue, class FName CallFunc_PickRandomSectionByName_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue, enum class EFortCustomBodyType CallFunc_GetCharacterBodyType_ReturnValue, TSoftObjectPtr<class UAnimMontage> CallFunc_GetFrontendPreviewAnimation_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FTransform& Temp_struct_Variable_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_3, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_3, class UFortEmojiPreviewComponent* CallFunc_AddComponent_ReturnValue_1, class UFortEmojiPreviewComponent* CallFunc_GetComponentByClass_ReturnValue_1, int32 CallFunc_AnimMontage_LocalJumpToRandomSection_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_PlayLocalAnimMontage_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundComponent_SpawnedComponent, int32 CallFunc_Array_Add_ReturnValue);
	void OnEmoteSetupFinished__DelegateSignature();
};

}


