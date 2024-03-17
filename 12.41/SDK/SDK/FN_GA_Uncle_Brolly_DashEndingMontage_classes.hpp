#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA38 - 0xA30)
// BlueprintGeneratedClass GA_Uncle_Brolly_DashEndingMontage.GA_Uncle_Brolly_DashEndingMontage_C
class UGA_Uncle_Brolly_DashEndingMontage_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Uncle_Brolly_DashEndingMontage_C* GetDefaultObj();

	void OnNotifyEnd_F88BE42C41A5AE510872EBBFA6281EC7(const struct FGameplayTag& NotifyTag);
	void OnNotifyBegin_F88BE42C41A5AE510872EBBFA6281EC7(const struct FGameplayTag& NotifyTag);
	void OnCancelled_F88BE42C41A5AE510872EBBFA6281EC7(const struct FGameplayTag& NotifyTag);
	void OnInterrupted_F88BE42C41A5AE510872EBBFA6281EC7(const struct FGameplayTag& NotifyTag);
	void OnBlendOut_F88BE42C41A5AE510872EBBFA6281EC7(const struct FGameplayTag& NotifyTag);
	void OnCompleted_F88BE42C41A5AE510872EBBFA6281EC7(const struct FGameplayTag& NotifyTag);
	void Added_0B1283F4457B090DC133F5A3FE7C210C();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Uncle_Brolly_DashEndingMontage(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayTag& Temp_struct_Variable, class UFortAbilityTask_PlayMontageWaitNotify* CallFunc_PlayMontageAndWaitNotify_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData);
};

}


