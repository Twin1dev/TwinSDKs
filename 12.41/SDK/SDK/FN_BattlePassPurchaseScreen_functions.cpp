#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassPurchaseScreen.BattlePassPurchaseScreen_C
// (None)

class UClass* UBattlePassPurchaseScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassPurchaseScreen_C");

	return Clss;
}


// BattlePassPurchaseScreen_C BattlePassPurchaseScreen.Default__BattlePassPurchaseScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassPurchaseScreen_C* UBattlePassPurchaseScreen_C::GetDefaultObj()
{
	static class UBattlePassPurchaseScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassPurchaseScreen_C*>(UBattlePassPurchaseScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPurchaseScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPurchaseScreen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.OnLeaveScreen
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPurchaseScreen_C::OnLeaveScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "OnLeaveScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.OnFinalPurchaseConfirmed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPurchaseScreen_C::OnFinalPurchaseConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "OnFinalPurchaseConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.OnPurchaseClicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPlayForward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bBuyBattleBundle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPurchaseScreen_C::OnPurchaseClicked(bool bPlayForward, bool bBuyBattleBundle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "OnPurchaseClicked");

	Params::UBattlePassPurchaseScreen_C_OnPurchaseClicked_Params Parms{};

	Parms.bPlayForward = bPlayForward;
	Parms.bBuyBattleBundle = bBuyBattleBundle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.ExecuteUbergraph_BattlePassPurchaseScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AS12BP_MusicController_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPlayForward                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bBuyBattleBundle                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldApplyEUText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USimpleFeatured_YellowButton_C*K2Node_DynamicCast_AsSimple_Featured_Yellow_Button               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPurchaseScreen_C::ExecuteUbergraph_BattlePassPurchaseScreen(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AS12BP_MusicController_C* CallFunc_FinishSpawningActor_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, bool K2Node_Event_bPlayForward, bool K2Node_Event_bBuyBattleBundle, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ShouldApplyEUText_ReturnValue, class USimpleFeatured_YellowButton_C* K2Node_DynamicCast_AsSimple_Featured_Yellow_Button, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen_C", "ExecuteUbergraph_BattlePassPurchaseScreen");

	Params::UBattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue_1 = CallFunc_GetRuntimeOptions_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_6 = CallFunc_PlayAnimation_ReturnValue_6;
	Parms.K2Node_Event_bPlayForward = K2Node_Event_bPlayForward;
	Parms.K2Node_Event_bBuyBattleBundle = K2Node_Event_bBuyBattleBundle;
	Parms.CallFunc_PlayAnimation_ReturnValue_7 = CallFunc_PlayAnimation_ReturnValue_7;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue_2 = CallFunc_GetRuntimeOptions_ReturnValue_2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_ShouldApplyEUText_ReturnValue = CallFunc_ShouldApplyEUText_ReturnValue;
	Parms.K2Node_DynamicCast_AsSimple_Featured_Yellow_Button = K2Node_DynamicCast_AsSimple_Featured_Yellow_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


