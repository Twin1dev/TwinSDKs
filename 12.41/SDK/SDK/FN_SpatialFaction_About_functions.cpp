#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialFaction_About.SpatialFaction_About_C
// (None)

class UClass* USpatialFaction_About_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialFaction_About_C");

	return Clss;
}


// SpatialFaction_About_C SpatialFaction_About.Default__SpatialFaction_About_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialFaction_About_C* USpatialFaction_About_C::GetDefaultObj()
{
	static class USpatialFaction_About_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialFaction_About_C*>(USpatialFaction_About_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialFaction_About.SpatialFaction_About_C.BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFaction_About_C::BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFaction_About_C", "BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::USpatialFaction_About_C_BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFaction_About.SpatialFaction_About_C.PlayOpenAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialFaction_About_C::PlayOpenAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFaction_About_C", "PlayOpenAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialFaction_About.SpatialFaction_About_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFaction_About_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFaction_About_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::USpatialFaction_About_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFaction_About.SpatialFaction_About_C.ExecuteUbergraph_SpatialFaction_About
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFaction_About_C::ExecuteUbergraph_SpatialFaction_About(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFaction_About_C", "ExecuteUbergraph_SpatialFaction_About");

	Params::USpatialFaction_About_C_ExecuteUbergraph_SpatialFaction_About_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFaction_About.SpatialFaction_About_C.Close about screen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialFaction_About_C::Close_about_screen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialFaction_About_C", "Close about screen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


