#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Uncle_Brolly_DashEndingMontage.GA_Uncle_Brolly_DashEndingMontage_C
// (None)

class UClass* UGA_Uncle_Brolly_DashEndingMontage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Uncle_Brolly_DashEndingMontage_C");

	return Clss;
}


// GA_Uncle_Brolly_DashEndingMontage_C GA_Uncle_Brolly_DashEndingMontage.Default__GA_Uncle_Brolly_DashEndingMontage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Uncle_Brolly_DashEndingMontage_C* UGA_Uncle_Brolly_DashEndingMontage_C::GetDefaultObj()
{
	static class UGA_Uncle_Brolly_DashEndingMontage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Uncle_Brolly_DashEndingMontage_C*>(UGA_Uncle_Brolly_DashEndingMontage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Uncle_Brolly_DashEndingMontage.GA_Uncle_Brolly_DashEndingMontage_C.OnNotifyEnd_F88BE42C41A5AE510872EBBFA6281EC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Uncle_Brolly_DashEndingMontage_C::OnNotifyEnd_F88BE42C41A5AE510872EBBFA6281EC7(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_DashEndingMontage_C", "OnNotifyEnd_F88BE42C41A5AE510872EBBFA6281EC7");

	Params::UGA_Uncle_Brolly_DashEndingMontage_C_OnNotifyEnd_F88BE42C41A5AE510872EBBFA6281EC7_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_DashEndingMontage.GA_Uncle_Brolly_DashEndingMontage_C.OnNotifyBegin_F88BE42C41A5AE510872EBBFA6281EC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Uncle_Brolly_DashEndingMontage_C::OnNotifyBegin_F88BE42C41A5AE510872EBBFA6281EC7(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_DashEndingMontage_C", "OnNotifyBegin_F88BE42C41A5AE510872EBBFA6281EC7");

	Params::UGA_Uncle_Brolly_DashEndingMontage_C_OnNotifyBegin_F88BE42C41A5AE510872EBBFA6281EC7_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_DashEndingMontage.GA_Uncle_Brolly_DashEndingMontage_C.OnCancelled_F88BE42C41A5AE510872EBBFA6281EC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Uncle_Brolly_DashEndingMontage_C::OnCancelled_F88BE42C41A5AE510872EBBFA6281EC7(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_DashEndingMontage_C", "OnCancelled_F88BE42C41A5AE510872EBBFA6281EC7");

	Params::UGA_Uncle_Brolly_DashEndingMontage_C_OnCancelled_F88BE42C41A5AE510872EBBFA6281EC7_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_DashEndingMontage.GA_Uncle_Brolly_DashEndingMontage_C.OnInterrupted_F88BE42C41A5AE510872EBBFA6281EC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Uncle_Brolly_DashEndingMontage_C::OnInterrupted_F88BE42C41A5AE510872EBBFA6281EC7(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_DashEndingMontage_C", "OnInterrupted_F88BE42C41A5AE510872EBBFA6281EC7");

	Params::UGA_Uncle_Brolly_DashEndingMontage_C_OnInterrupted_F88BE42C41A5AE510872EBBFA6281EC7_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_DashEndingMontage.GA_Uncle_Brolly_DashEndingMontage_C.OnBlendOut_F88BE42C41A5AE510872EBBFA6281EC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Uncle_Brolly_DashEndingMontage_C::OnBlendOut_F88BE42C41A5AE510872EBBFA6281EC7(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_DashEndingMontage_C", "OnBlendOut_F88BE42C41A5AE510872EBBFA6281EC7");

	Params::UGA_Uncle_Brolly_DashEndingMontage_C_OnBlendOut_F88BE42C41A5AE510872EBBFA6281EC7_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_DashEndingMontage.GA_Uncle_Brolly_DashEndingMontage_C.OnCompleted_F88BE42C41A5AE510872EBBFA6281EC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Uncle_Brolly_DashEndingMontage_C::OnCompleted_F88BE42C41A5AE510872EBBFA6281EC7(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_DashEndingMontage_C", "OnCompleted_F88BE42C41A5AE510872EBBFA6281EC7");

	Params::UGA_Uncle_Brolly_DashEndingMontage_C_OnCompleted_F88BE42C41A5AE510872EBBFA6281EC7_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_DashEndingMontage.GA_Uncle_Brolly_DashEndingMontage_C.Added_0B1283F4457B090DC133F5A3FE7C210C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_DashEndingMontage_C::Added_0B1283F4457B090DC133F5A3FE7C210C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_DashEndingMontage_C", "Added_0B1283F4457B090DC133F5A3FE7C210C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_DashEndingMontage.GA_Uncle_Brolly_DashEndingMontage_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Uncle_Brolly_DashEndingMontage_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_DashEndingMontage_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Uncle_Brolly_DashEndingMontage_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_DashEndingMontage.GA_Uncle_Brolly_DashEndingMontage_C.ExecuteUbergraph_GA_Uncle_Brolly_DashEndingMontage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_5                                   (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_4                                   (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_3                                   (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_2                                   (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_1                                   (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag                                     (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayMontageWaitNotify*CallFunc_PlayMontageAndWaitNotify_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGA_Uncle_Brolly_DashEndingMontage_C::ExecuteUbergraph_GA_Uncle_Brolly_DashEndingMontage(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayTag& Temp_struct_Variable, class UFortAbilityTask_PlayMontageWaitNotify* CallFunc_PlayMontageAndWaitNotify_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_DashEndingMontage_C", "ExecuteUbergraph_GA_Uncle_Brolly_DashEndingMontage");

	Params::UGA_Uncle_Brolly_DashEndingMontage_C_ExecuteUbergraph_GA_Uncle_Brolly_DashEndingMontage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyTag_5 = K2Node_CustomEvent_NotifyTag_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyTag_4 = K2Node_CustomEvent_NotifyTag_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyTag_3 = K2Node_CustomEvent_NotifyTag_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyTag_2 = K2Node_CustomEvent_NotifyTag_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyTag_1 = K2Node_CustomEvent_NotifyTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyTag = K2Node_CustomEvent_NotifyTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PlayMontageAndWaitNotify_ReturnValue = CallFunc_PlayMontageAndWaitNotify_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}


