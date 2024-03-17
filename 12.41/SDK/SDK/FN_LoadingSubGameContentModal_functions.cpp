#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoadingSubGameContentModal.LoadingSubGameContentModal_C
// (None)

class UClass* ULoadingSubGameContentModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingSubGameContentModal_C");

	return Clss;
}


// LoadingSubGameContentModal_C LoadingSubGameContentModal.Default__LoadingSubGameContentModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadingSubGameContentModal_C* ULoadingSubGameContentModal_C::GetDefaultObj()
{
	static class ULoadingSubGameContentModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingSubGameContentModal_C*>(ULoadingSubGameContentModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingSubGameContentModal_C::OnUpdatedProgress(float Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSubGameContentModal_C", "OnUpdatedProgress");

	Params::ULoadingSubGameContentModal_C_OnUpdatedProgress_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoadingSubGameContentModal_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSubGameContentModal_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Percent                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_AsPercent_Float_ReturnValue                             (None)

void ULoadingSubGameContentModal_C::ExecuteUbergraph_LoadingSubGameContentModal(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float K2Node_Event_Percent, class FText CallFunc_AsPercent_Float_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingSubGameContentModal_C", "ExecuteUbergraph_LoadingSubGameContentModal");

	Params::ULoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_Percent = K2Node_Event_Percent;
	Parms.CallFunc_AsPercent_Float_ReturnValue = CallFunc_AsPercent_Float_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


