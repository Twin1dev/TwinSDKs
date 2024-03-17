#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C
// (None)

class UClass* UFloatingInteraction_Indicator_Armory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FloatingInteraction_Indicator_Armory_C");

	return Clss;
}


// FloatingInteraction_Indicator_Armory_C FloatingInteraction_Indicator_Armory.Default__FloatingInteraction_Indicator_Armory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFloatingInteraction_Indicator_Armory_C* UFloatingInteraction_Indicator_Armory_C::GetDefaultObj()
{
	static class UFloatingInteraction_Indicator_Armory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFloatingInteraction_Indicator_Armory_C*>(UFloatingInteraction_Indicator_Armory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.SetCATextFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)

void UFloatingInteraction_Indicator_Armory_C::SetCATextFX(class FText CallFunc_GetText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "SetCATextFX");

	Params::UFloatingInteraction_Indicator_Armory_C_SetCATextFX_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFloatingInteraction_Indicator_Armory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "PreConstruct");

	Params::UFloatingInteraction_Indicator_Armory_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.OnObjectHoverBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Armory_C::OnObjectHoverBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "OnObjectHoverBegin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.OnObjectHoverEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Armory_C::OnObjectHoverEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "OnObjectHoverEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.TriggerLoopingHoverStateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Armory_C::TriggerLoopingHoverStateAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "TriggerLoopingHoverStateAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.SetBangState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShowBang                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFloatingInteraction_Indicator_Armory_C::SetBangState(bool bShowBang)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "SetBangState");

	Params::UFloatingInteraction_Indicator_Armory_C_SetBangState_Params Parms{};

	Parms.bShowBang = bShowBang;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Armory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FloatingInteraction_Indicator_Armory.FloatingInteraction_Indicator_Armory_C.ExecuteUbergraph_FloatingInteraction_Indicator_Armory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowBang                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFloatingInteraction_Indicator_Armory_C::ExecuteUbergraph_FloatingInteraction_Indicator_Armory(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_Event_bShowBang, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Armory_C", "ExecuteUbergraph_FloatingInteraction_Indicator_Armory");

	Params::UFloatingInteraction_Indicator_Armory_C_ExecuteUbergraph_FloatingInteraction_Indicator_Armory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_Event_bShowBang = K2Node_Event_bShowBang;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_4 = CallFunc_GetDynamicMaterial_ReturnValue_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_5 = CallFunc_GetDynamicMaterial_ReturnValue_5;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_6 = CallFunc_GetDynamicMaterial_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


