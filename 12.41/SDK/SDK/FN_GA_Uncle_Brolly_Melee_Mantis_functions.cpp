#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Uncle_Brolly_Melee_Mantis.GA_Uncle_Brolly_Melee_Mantis_C
// (None)

class UClass* UGA_Uncle_Brolly_Melee_Mantis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Uncle_Brolly_Melee_Mantis_C");

	return Clss;
}


// GA_Uncle_Brolly_Melee_Mantis_C GA_Uncle_Brolly_Melee_Mantis.Default__GA_Uncle_Brolly_Melee_Mantis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Uncle_Brolly_Melee_Mantis_C* UGA_Uncle_Brolly_Melee_Mantis_C::GetDefaultObj()
{
	static class UGA_Uncle_Brolly_Melee_Mantis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Uncle_Brolly_Melee_Mantis_C*>(UGA_Uncle_Brolly_Melee_Mantis_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Uncle_Brolly_Melee_Mantis.GA_Uncle_Brolly_Melee_Mantis_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Uncle_Brolly_Melee_Mantis_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Melee_Mantis_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Uncle_Brolly_Melee_Mantis.GA_Uncle_Brolly_Melee_Mantis_C.BP_OnMantisTechniqueHit
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetDataHandle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Uncle_Brolly_Melee_Mantis_C::BP_OnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Melee_Mantis_C", "BP_OnMantisTechniqueHit");

	Params::UGA_Uncle_Brolly_Melee_Mantis_C_BP_OnMantisTechniqueHit_Params Parms{};

	Parms.TargetDataHandle = TargetDataHandle;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_Melee_Mantis.GA_Uncle_Brolly_Melee_Mantis_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Uncle_Brolly_Melee_Mantis_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Melee_Mantis_C", "K2_OnEndAbility");

	Params::UGA_Uncle_Brolly_Melee_Mantis_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Uncle_Brolly_Melee_Mantis.GA_Uncle_Brolly_Melee_Mantis_C.ExecuteUbergraph_GA_Uncle_Brolly_Melee_Mantis
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetCurrentSourceWeapon_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_UncleBrolly_C*            K2Node_DynamicCast_AsB_Uncle_Brolly                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_Event_TargetDataHandle                                    (ConstParm)
// struct FGameplayTag                K2Node_Event_ApplicationTag                                      (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue                (ConstParm, ZeroConstructor, ReferenceParm)
// class AFortWeapon*                 CallFunc_GetCurrentSourceWeapon_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_UncleBrolly_C*            K2Node_DynamicCast_AsB_Uncle_Brolly_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Uncle_Brolly_Melee_Mantis_C::ExecuteUbergraph_GA_Uncle_Brolly_Melee_Mantis(int32 EntryPoint, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, class AB_UncleBrolly_C* K2Node_DynamicCast_AsB_Uncle_Brolly, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetDataHandle, const struct FGameplayTag& K2Node_Event_ApplicationTag, float CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue_1, bool K2Node_Event_bWasCancelled, class AB_UncleBrolly_C* K2Node_DynamicCast_AsB_Uncle_Brolly_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Uncle_Brolly_Melee_Mantis_C", "ExecuteUbergraph_GA_Uncle_Brolly_Melee_Mantis");

	Params::UGA_Uncle_Brolly_Melee_Mantis_C_ExecuteUbergraph_GA_Uncle_Brolly_Melee_Mantis_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentSourceWeapon_ReturnValue = CallFunc_GetCurrentSourceWeapon_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Uncle_Brolly = K2Node_DynamicCast_AsB_Uncle_Brolly;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_TargetDataHandle = K2Node_Event_TargetDataHandle;
	Parms.K2Node_Event_ApplicationTag = K2Node_Event_ApplicationTag;
	Parms.CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel = CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = CallFunc_ApplyGameplayEffectContainer_ReturnValue;
	Parms.CallFunc_GetCurrentSourceWeapon_ReturnValue_1 = CallFunc_GetCurrentSourceWeapon_ReturnValue_1;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_DynamicCast_AsB_Uncle_Brolly_1 = K2Node_DynamicCast_AsB_Uncle_Brolly_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


