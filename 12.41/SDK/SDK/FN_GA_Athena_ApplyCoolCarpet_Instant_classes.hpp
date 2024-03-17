#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xBF8 - 0xBD0)
// BlueprintGeneratedClass GA_Athena_ApplyCoolCarpet_Instant.GA_Athena_ApplyCoolCarpet_Instant_C
class UGA_Athena_ApplyCoolCarpet_Instant_C : public UGA_Athena_Apply_SneakySnowmanV2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 NotifyFirePressedTag;                              // 0xBD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_ApplyCoolCarpet_Instant_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Athena_ApplyCoolCarpet_Instant(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, bool CallFunc_K2_AddLooseGameplayTags_ReturnValue, bool CallFunc_K2_RemoveLooseGameplayTags_ReturnValue);
};

}


