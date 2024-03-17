#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FloatingInteraction_Indicator_DonutChimi.FloatingInteraction_Indicator_DonutChimi_C
// (None)

class UClass* UFloatingInteraction_Indicator_DonutChimi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FloatingInteraction_Indicator_DonutChimi_C");

	return Clss;
}


// FloatingInteraction_Indicator_DonutChimi_C FloatingInteraction_Indicator_DonutChimi.Default__FloatingInteraction_Indicator_DonutChimi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFloatingInteraction_Indicator_DonutChimi_C* UFloatingInteraction_Indicator_DonutChimi_C::GetDefaultObj()
{
	static class UFloatingInteraction_Indicator_DonutChimi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFloatingInteraction_Indicator_DonutChimi_C*>(UFloatingInteraction_Indicator_DonutChimi_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FloatingInteraction_Indicator_DonutChimi.FloatingInteraction_Indicator_DonutChimi_C.SetCATextFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)

void UFloatingInteraction_Indicator_DonutChimi_C::SetCATextFX(class FText CallFunc_GetText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_DonutChimi_C", "SetCATextFX");

	Params::UFloatingInteraction_Indicator_DonutChimi_C_SetCATextFX_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_DonutChimi.FloatingInteraction_Indicator_DonutChimi_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFloatingInteraction_Indicator_DonutChimi_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_DonutChimi_C", "PreConstruct");

	Params::UFloatingInteraction_Indicator_DonutChimi_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_DonutChimi.FloatingInteraction_Indicator_DonutChimi_C.OnObjectHoverBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_DonutChimi_C::OnObjectHoverBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_DonutChimi_C", "OnObjectHoverBegin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FloatingInteraction_Indicator_DonutChimi.FloatingInteraction_Indicator_DonutChimi_C.OnObjectHoverEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_DonutChimi_C::OnObjectHoverEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_DonutChimi_C", "OnObjectHoverEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FloatingInteraction_Indicator_DonutChimi.FloatingInteraction_Indicator_DonutChimi_C.TriggerLoopingHoverStateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_DonutChimi_C::TriggerLoopingHoverStateAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_DonutChimi_C", "TriggerLoopingHoverStateAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FloatingInteraction_Indicator_DonutChimi.FloatingInteraction_Indicator_DonutChimi_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_DonutChimi_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_DonutChimi_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FloatingInteraction_Indicator_DonutChimi.FloatingInteraction_Indicator_DonutChimi_C.ExecuteUbergraph_FloatingInteraction_Indicator_DonutChimi
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFloatingInteraction_Indicator_DonutChimi_C::ExecuteUbergraph_FloatingInteraction_Indicator_DonutChimi(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_DonutChimi_C", "ExecuteUbergraph_FloatingInteraction_Indicator_DonutChimi");

	Params::UFloatingInteraction_Indicator_DonutChimi_C_ExecuteUbergraph_FloatingInteraction_Indicator_DonutChimi_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


