#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_ApplyCoolCarpet_Instant.GA_Athena_ApplyCoolCarpet_Instant_C
// (None)

class UClass* UGA_Athena_ApplyCoolCarpet_Instant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_ApplyCoolCarpet_Instant_C");

	return Clss;
}


// GA_Athena_ApplyCoolCarpet_Instant_C GA_Athena_ApplyCoolCarpet_Instant.Default__GA_Athena_ApplyCoolCarpet_Instant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_ApplyCoolCarpet_Instant_C* UGA_Athena_ApplyCoolCarpet_Instant_C::GetDefaultObj()
{
	static class UGA_Athena_ApplyCoolCarpet_Instant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_ApplyCoolCarpet_Instant_C*>(UGA_Athena_ApplyCoolCarpet_Instant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_ApplyCoolCarpet_Instant.GA_Athena_ApplyCoolCarpet_Instant_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_ApplyCoolCarpet_Instant_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ApplyCoolCarpet_Instant_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ApplyCoolCarpet_Instant.GA_Athena_ApplyCoolCarpet_Instant_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ApplyCoolCarpet_Instant_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ApplyCoolCarpet_Instant_C", "K2_OnEndAbility");

	Params::UGA_Athena_ApplyCoolCarpet_Instant_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ApplyCoolCarpet_Instant.GA_Athena_ApplyCoolCarpet_Instant_C.ExecuteUbergraph_GA_Athena_ApplyCoolCarpet_Instant
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AddLooseGameplayTags_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_RemoveLooseGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ApplyCoolCarpet_Instant_C::ExecuteUbergraph_GA_Athena_ApplyCoolCarpet_Instant(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, bool CallFunc_K2_AddLooseGameplayTags_ReturnValue, bool CallFunc_K2_RemoveLooseGameplayTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ApplyCoolCarpet_Instant_C", "ExecuteUbergraph_GA_Athena_ApplyCoolCarpet_Instant");

	Params::UGA_Athena_ApplyCoolCarpet_Instant_C_ExecuteUbergraph_GA_Athena_ApplyCoolCarpet_Instant_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_K2_AddLooseGameplayTags_ReturnValue = CallFunc_K2_AddLooseGameplayTags_ReturnValue;
	Parms.CallFunc_K2_RemoveLooseGameplayTags_ReturnValue = CallFunc_K2_RemoveLooseGameplayTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


