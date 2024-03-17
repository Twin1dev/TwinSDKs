#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BPS12ElevatorPanel.BPS12ElevatorPanel_C
// (None)

class UClass* UBPS12ElevatorPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPS12ElevatorPanel_C");

	return Clss;
}


// BPS12ElevatorPanel_C BPS12ElevatorPanel.Default__BPS12ElevatorPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPS12ElevatorPanel_C* UBPS12ElevatorPanel_C::GetDefaultObj()
{
	static class UBPS12ElevatorPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPS12ElevatorPanel_C*>(UBPS12ElevatorPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPS12ElevatorPanel.BPS12ElevatorPanel_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UBPS12ElevatorPanel_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12ElevatorPanel_C", "BP_GetDesiredFocusTarget");

	Params::UBPS12ElevatorPanel_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPS12ElevatorPanel.BPS12ElevatorPanel_C.Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPS12ElevatorPanel_C::Intro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12ElevatorPanel_C", "Intro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPS12ElevatorPanel.BPS12ElevatorPanel_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBPS12ElevatorPanel_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12ElevatorPanel_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPS12ElevatorPanel.BPS12ElevatorPanel_C.BndEvt__Floor_1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS12ElevatorPanel_C::BndEvt__Floor_1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12ElevatorPanel_C", "BndEvt__Floor_1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UBPS12ElevatorPanel_C_BndEvt__Floor_1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPS12ElevatorPanel.BPS12ElevatorPanel_C.BndEvt__Floor_2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS12ElevatorPanel_C::BndEvt__Floor_2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12ElevatorPanel_C", "BndEvt__Floor_2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UBPS12ElevatorPanel_C_BndEvt__Floor_2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPS12ElevatorPanel.BPS12ElevatorPanel_C.BndEvt__Floor_3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS12ElevatorPanel_C::BndEvt__Floor_3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12ElevatorPanel_C", "BndEvt__Floor_3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UBPS12ElevatorPanel_C_BndEvt__Floor_3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPS12ElevatorPanel.BPS12ElevatorPanel_C.BndEvt__Floor_4_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS12ElevatorPanel_C::BndEvt__Floor_4_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12ElevatorPanel_C", "BndEvt__Floor_4_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::UBPS12ElevatorPanel_C_BndEvt__Floor_4_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPS12ElevatorPanel.BPS12ElevatorPanel_C.BndEvt__Floor_5_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS12ElevatorPanel_C::BndEvt__Floor_5_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12ElevatorPanel_C", "BndEvt__Floor_5_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::UBPS12ElevatorPanel_C_BndEvt__Floor_5_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPS12ElevatorPanel.BPS12ElevatorPanel_C.ExecuteUbergraph_BPS12ElevatorPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS12ElevatorPanel_C::ExecuteUbergraph_BPS12ElevatorPanel(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_SwitchInteger_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPS12ElevatorPanel_C", "ExecuteUbergraph_BPS12ElevatorPanel");

	Params::UBPS12ElevatorPanel_C_ExecuteUbergraph_BPS12ElevatorPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


