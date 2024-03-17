#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C
// (None)

class UClass* USpatialCustomizationRoomScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialCustomizationRoomScreen_C");

	return Clss;
}


// SpatialCustomizationRoomScreen_C SpatialCustomizationRoomScreen.Default__SpatialCustomizationRoomScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialCustomizationRoomScreen_C* USpatialCustomizationRoomScreen_C::GetDefaultObj()
{
	static class USpatialCustomizationRoomScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialCustomizationRoomScreen_C*>(USpatialCustomizationRoomScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.HandeRoomStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESpatialCustomizationRoomStateCurrentRoomState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpatialCustomizationRoomStatePreviousRoomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpatialCustomizationRoomStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialCustomizationRoomScreen_C::HandeRoomStateChanged(enum class ESpatialCustomizationRoomState CurrentRoomState, enum class ESpatialCustomizationRoomState PreviousRoomState, enum class ESpatialCustomizationRoomState Temp_byte_Variable, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationRoomScreen_C", "HandeRoomStateChanged");

	Params::USpatialCustomizationRoomScreen_C_HandeRoomStateChanged_Params Parms{};

	Parms.CurrentRoomState = CurrentRoomState;
	Parms.PreviousRoomState = PreviousRoomState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.OnRoomStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ESpatialCustomizationRoomStateCurrentRoomState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpatialCustomizationRoomStatePreviousRoomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialCustomizationRoomScreen_C::OnRoomStateChanged(enum class ESpatialCustomizationRoomState CurrentRoomState, enum class ESpatialCustomizationRoomState PreviousRoomState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationRoomScreen_C", "OnRoomStateChanged");

	Params::USpatialCustomizationRoomScreen_C_OnRoomStateChanged_Params Parms{};

	Parms.CurrentRoomState = CurrentRoomState;
	Parms.PreviousRoomState = PreviousRoomState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialCustomizationRoomScreen_C::BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationRoomScreen_C", "BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::USpatialCustomizationRoomScreen_C_BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.OnShowFirstTimeInfo
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialCustomizationRoomScreen_C::OnShowFirstTimeInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationRoomScreen_C", "OnShowFirstTimeInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_2_OnAboutModalClosedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpatialCustomizationRoomScreen_C::BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_2_OnAboutModalClosedDynamic__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationRoomScreen_C", "BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_2_OnAboutModalClosedDynamic__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.ExecuteUbergraph_SpatialCustomizationRoomScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpatialCustomizationRoomStateK2Node_Event_CurrentRoomState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpatialCustomizationRoomStateK2Node_Event_PreviousRoomState                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialCustomizationRoomScreen_C::ExecuteUbergraph_SpatialCustomizationRoomScreen(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESpatialCustomizationRoomState K2Node_Event_CurrentRoomState, enum class ESpatialCustomizationRoomState K2Node_Event_PreviousRoomState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialCustomizationRoomScreen_C", "ExecuteUbergraph_SpatialCustomizationRoomScreen");

	Params::USpatialCustomizationRoomScreen_C_ExecuteUbergraph_SpatialCustomizationRoomScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_CurrentRoomState = K2Node_Event_CurrentRoomState;
	Parms.K2Node_Event_PreviousRoomState = K2Node_Event_PreviousRoomState;

	UObject::ProcessEvent(Func, &Parms);

}

}


