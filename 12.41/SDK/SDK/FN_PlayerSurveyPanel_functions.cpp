#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyPanel.PlayerSurveyPanel_C
// (None)

class UClass* UPlayerSurveyPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyPanel_C");

	return Clss;
}


// PlayerSurveyPanel_C PlayerSurveyPanel.Default__PlayerSurveyPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyPanel_C* UPlayerSurveyPanel_C::GetDefaultObj()
{
	static class UPlayerSurveyPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyPanel_C*>(UPlayerSurveyPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.OutroDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanel_C::OutroDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanel_C", "OutroDone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.StartIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanel_C::StartIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanel_C", "StartIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.StartIntro_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanel_C::StartIntro_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanel_C", "StartIntro_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.OnPlayerSurveyEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanel_C::OnPlayerSurveyEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanel_C", "OnPlayerSurveyEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.ExecuteUbergraph_PlayerSurveyPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanel_C::ExecuteUbergraph_PlayerSurveyPanel(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable, float Temp_float_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsMobilePlatform_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyPanel_C", "ExecuteUbergraph_PlayerSurveyPanel");

	Params::UPlayerSurveyPanel_C_ExecuteUbergraph_PlayerSurveyPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


