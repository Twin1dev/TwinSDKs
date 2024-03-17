#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FloatingInteraction_Indicator_Faction.FloatingInteraction_Indicator_Faction_C
// (None)

class UClass* UFloatingInteraction_Indicator_Faction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FloatingInteraction_Indicator_Faction_C");

	return Clss;
}


// FloatingInteraction_Indicator_Faction_C FloatingInteraction_Indicator_Faction.Default__FloatingInteraction_Indicator_Faction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFloatingInteraction_Indicator_Faction_C* UFloatingInteraction_Indicator_Faction_C::GetDefaultObj()
{
	static class UFloatingInteraction_Indicator_Faction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFloatingInteraction_Indicator_Faction_C*>(UFloatingInteraction_Indicator_Faction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FloatingInteraction_Indicator_Faction.FloatingInteraction_Indicator_Faction_C.SetCATextFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_ReturnValue                                     (None)

void UFloatingInteraction_Indicator_Faction_C::SetCATextFX(class FText CallFunc_GetText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Faction_C", "SetCATextFX");

	Params::UFloatingInteraction_Indicator_Faction_C_SetCATextFX_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Faction.FloatingInteraction_Indicator_Faction_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFloatingInteraction_Indicator_Faction_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Faction_C", "PreConstruct");

	Params::UFloatingInteraction_Indicator_Faction_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Faction.FloatingInteraction_Indicator_Faction_C.OnObjectHoverBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Faction_C::OnObjectHoverBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Faction_C", "OnObjectHoverBegin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FloatingInteraction_Indicator_Faction.FloatingInteraction_Indicator_Faction_C.OnObjectHoverEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Faction_C::OnObjectHoverEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Faction_C", "OnObjectHoverEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FloatingInteraction_Indicator_Faction.FloatingInteraction_Indicator_Faction_C.TriggerLoopingHoverStateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Faction_C::TriggerLoopingHoverStateAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Faction_C", "TriggerLoopingHoverStateAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FloatingInteraction_Indicator_Faction.FloatingInteraction_Indicator_Faction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFloatingInteraction_Indicator_Faction_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Faction_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FloatingInteraction_Indicator_Faction.FloatingInteraction_Indicator_Faction_C.SetBangState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShowBang                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFloatingInteraction_Indicator_Faction_C::SetBangState(bool bShowBang)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Faction_C", "SetBangState");

	Params::UFloatingInteraction_Indicator_Faction_C_SetBangState_Params Parms{};

	Parms.bShowBang = bShowBang;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FloatingInteraction_Indicator_Faction.FloatingInteraction_Indicator_Faction_C.ExecuteUbergraph_FloatingInteraction_Indicator_Faction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowBang                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFloatingInteraction_Indicator_Faction_C::ExecuteUbergraph_FloatingInteraction_Indicator_Faction(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_Event_bShowBang, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatingInteraction_Indicator_Faction_C", "ExecuteUbergraph_FloatingInteraction_Indicator_Faction");

	Params::UFloatingInteraction_Indicator_Faction_C_ExecuteUbergraph_FloatingInteraction_Indicator_Faction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_Event_bShowBang = K2Node_Event_bShowBang;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_4 = CallFunc_GetDynamicMaterial_ReturnValue_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_5 = CallFunc_GetDynamicMaterial_ReturnValue_5;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_6 = CallFunc_GetDynamicMaterial_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


