#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialFactionChoiceScreen.SpatialFactionChoiceScreen_C
// (None)

class UClass* USpatialFactionChoiceScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialFactionChoiceScreen_C");

	return Clss;
}


// SpatialFactionChoiceScreen_C SpatialFactionChoiceScreen.Default__SpatialFactionChoiceScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialFactionChoiceScreen_C* USpatialFactionChoiceScreen_C::GetDefaultObj()
{
	static class USpatialFactionChoiceScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialFactionChoiceScreen_C*>(USpatialFactionChoiceScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialFactionChoiceScreen.SpatialFactionChoiceScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialFactionChoiceScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionChoiceScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFactionChoiceScreen.SpatialFactionChoiceScreen_C.BndEvt__Button_FactionChoice2_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionChoiceScreen_C::BndEvt__Button_FactionChoice2_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionChoiceScreen_C", "BndEvt__Button_FactionChoice2_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::USpatialFactionChoiceScreen_C_BndEvt__Button_FactionChoice2_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFactionChoiceScreen.SpatialFactionChoiceScreen_C.BndEvt__Button_FactionChoice1_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionChoiceScreen_C::BndEvt__Button_FactionChoice1_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionChoiceScreen_C", "BndEvt__Button_FactionChoice1_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::USpatialFactionChoiceScreen_C_BndEvt__Button_FactionChoice1_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFactionChoiceScreen.SpatialFactionChoiceScreen_C.ExecuteUbergraph_SpatialFactionChoiceScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionChoiceScreen_C::ExecuteUbergraph_SpatialFactionChoiceScreen(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFactionChoiceScreen_C", "ExecuteUbergraph_SpatialFactionChoiceScreen");

	Params::USpatialFactionChoiceScreen_C_ExecuteUbergraph_SpatialFactionChoiceScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


