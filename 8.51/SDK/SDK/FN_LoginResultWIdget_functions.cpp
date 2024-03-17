#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoginResultWIdget.LoginResultWIdget_C
// (None)

class UClass* ULoginResultWIdget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoginResultWIdget_C");

	return Clss;
}


// LoginResultWIdget_C LoginResultWIdget.Default__LoginResultWIdget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoginResultWIdget_C* ULoginResultWIdget_C::GetDefaultObj()
{
	static class ULoginResultWIdget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoginResultWIdget_C*>(ULoginResultWIdget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoginResultWIdget.LoginResultWIdget_C.SetForceQuitButtons
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bForceQuit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginResultWIdget_C::SetForceQuitButtons(bool bForceQuit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginResultWIdget_C", "SetForceQuitButtons");

	Params::ULoginResultWIdget_C_SetForceQuitButtons_Params Parms{};

	Parms.bForceQuit = bForceQuit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.ExecuteUbergraph_LoginResultWIdget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bForceQuit                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginResultWIdget_C::ExecuteUbergraph_LoginResultWIdget(int32 EntryPoint, bool K2Node_Event_bForceQuit, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginResultWIdget_C", "ExecuteUbergraph_LoginResultWIdget");

	Params::ULoginResultWIdget_C_ExecuteUbergraph_LoginResultWIdget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bForceQuit = K2Node_Event_bForceQuit;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


