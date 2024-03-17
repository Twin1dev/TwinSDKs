#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialFactionScreen.SpatialFactionScreen_C
// (None)

class UClass* USpatialFactionScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialFactionScreen_C");

	return Clss;
}


// SpatialFactionScreen_C SpatialFactionScreen.Default__SpatialFactionScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialFactionScreen_C* USpatialFactionScreen_C::GetDefaultObj()
{
	static class USpatialFactionScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialFactionScreen_C*>(USpatialFactionScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialFactionScreen.SpatialFactionScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialFactionScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFactionScreen.SpatialFactionScreen_C.BndEvt__Button_About_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionScreen_C::BndEvt__Button_About_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionScreen_C", "BndEvt__Button_About_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::USpatialFactionScreen_C_BndEvt__Button_About_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFactionScreen.SpatialFactionScreen_C.BndEvt__Button_UnlockedTech_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionScreen_C::BndEvt__Button_UnlockedTech_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionScreen_C", "BndEvt__Button_UnlockedTech_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::USpatialFactionScreen_C_BndEvt__Button_UnlockedTech_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFactionScreen.SpatialFactionScreen_C.OnFactionChoiceRequired
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialFactionScreen_C::OnFactionChoiceRequired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionScreen_C", "OnFactionChoiceRequired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFactionScreen.SpatialFactionScreen_C.BndEvt__FactionChoiceScreen_K2Node_ComponentBoundEvent_3_OnFactionChosenDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpatialFactionScreen_C::BndEvt__FactionChoiceScreen_K2Node_ComponentBoundEvent_3_OnFactionChosenDynamic__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionScreen_C", "BndEvt__FactionChoiceScreen_K2Node_ComponentBoundEvent_3_OnFactionChosenDynamic__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFactionScreen.SpatialFactionScreen_C.BndEvt__UnlockedPerksScreen_K2Node_ComponentBoundEvent_6_OnUnlockedPerksScreenClosedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpatialFactionScreen_C::BndEvt__UnlockedPerksScreen_K2Node_ComponentBoundEvent_6_OnUnlockedPerksScreenClosedDynamic__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionScreen_C", "BndEvt__UnlockedPerksScreen_K2Node_ComponentBoundEvent_6_OnUnlockedPerksScreenClosedDynamic__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFactionScreen.SpatialFactionScreen_C.BndEvt__SpatialFaction_About_K2Node_ComponentBoundEvent_0_Close about screen__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpatialFactionScreen_C::BndEvt__SpatialFaction_About_K2Node_ComponentBoundEvent_0_Close_about_screen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionScreen_C", "BndEvt__SpatialFaction_About_K2Node_ComponentBoundEvent_0_Close about screen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFactionScreen.SpatialFactionScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USpatialFactionScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFactionScreen.SpatialFactionScreen_C.ExecuteUbergraph_SpatialFactionScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionScreen_C::ExecuteUbergraph_SpatialFactionScreen(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionScreen_C", "ExecuteUbergraph_SpatialFactionScreen");

	Params::USpatialFactionScreen_C_ExecuteUbergraph_SpatialFactionScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


