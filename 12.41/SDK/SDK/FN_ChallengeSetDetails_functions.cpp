#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeSetDetails.ChallengeSetDetails_C
// (None)

class UClass* UChallengeSetDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeSetDetails_C");

	return Clss;
}


// ChallengeSetDetails_C ChallengeSetDetails.Default__ChallengeSetDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeSetDetails_C* UChallengeSetDetails_C::GetDefaultObj()
{
	static class UChallengeSetDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeSetDetails_C*>(UChallengeSetDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengeSetDetails.ChallengeSetDetails_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UChallengeSetDetails_C::GetWidgetForFramingViewedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSetDetails_C", "GetWidgetForFramingViewedItem");

	Params::UChallengeSetDetails_C_GetWidgetForFramingViewedItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChallengeSetDetails.ChallengeSetDetails_C.SetDynamicColors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      DetailsDynamicMaterialTarget                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortChallengeSetStyle      FortChallengeSetStyle                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeSetDetails_C::SetDynamicColors(class UImage* DetailsDynamicMaterialTarget, struct FFortChallengeSetStyle& FortChallengeSetStyle, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSetDetails_C", "SetDynamicColors");

	Params::UChallengeSetDetails_C_SetDynamicColors_Params Parms{};

	Parms.DetailsDynamicMaterialTarget = DetailsDynamicMaterialTarget;
	Parms.FortChallengeSetStyle = FortChallengeSetStyle;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeSetDetails.ChallengeSetDetails_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeSetDetails_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSetDetails_C", "HandleBack");

	Params::UChallengeSetDetails_C_HandleBack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ChallengeSetDetails.ChallengeSetDetails_C.OnChallengeSetEstablished
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortChallengeSetStyle      DisplayStyle                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsComplete                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeSetDetails_C::OnChallengeSetEstablished(struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSetDetails_C", "OnChallengeSetEstablished");

	Params::UChallengeSetDetails_C_OnChallengeSetEstablished_Params Parms{};

	Parms.DisplayStyle = DisplayStyle;
	Parms.bIsComplete = bIsComplete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeSetDetails.ChallengeSetDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UChallengeSetDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSetDetails_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChallengeSetDetails.ChallengeSetDetails_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeSetDetails_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSetDetails_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UChallengeSetDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeSetDetails.ChallengeSetDetails_C.ExecuteUbergraph_ChallengeSetDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCircleArrowButton_C*        K2Node_DynamicCast_AsCircle_Arrow_Button                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCircleArrowButton_C*        K2Node_DynamicCast_AsCircle_Arrow_Button_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCircleArrowButton_C*        K2Node_DynamicCast_AsCircle_Arrow_Button_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortChallengeSetStyle      K2Node_Event_DisplayStyle                                        (ConstParm)
// bool                               K2Node_Event_bIsComplete                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetChallengeStyleLightAccentColor_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBack_PassThrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemInfoHeaderWidget_C*     K2Node_DynamicCast_AsItem_Info_Header_Widget                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeSetDetails_C::ExecuteUbergraph_ChallengeSetDetails(int32 EntryPoint, class UCircleArrowButton_C* K2Node_DynamicCast_AsCircle_Arrow_Button, bool K2Node_DynamicCast_bSuccess, class UCircleArrowButton_C* K2Node_DynamicCast_AsCircle_Arrow_Button_1, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UCircleArrowButton_C* K2Node_DynamicCast_AsCircle_Arrow_Button_2, bool K2Node_DynamicCast_bSuccess_2, const struct FFortChallengeSetStyle& K2Node_Event_DisplayStyle, bool K2Node_Event_bIsComplete, const struct FLinearColor& CallFunc_GetChallengeStyleLightAccentColor_ReturnValue, bool CallFunc_HandleBack_PassThrough, class UItemInfoHeaderWidget_C* K2Node_DynamicCast_AsItem_Info_Header_Widget, bool K2Node_DynamicCast_bSuccess_3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeSetDetails_C", "ExecuteUbergraph_ChallengeSetDetails");

	Params::UChallengeSetDetails_C_ExecuteUbergraph_ChallengeSetDetails_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsCircle_Arrow_Button = K2Node_DynamicCast_AsCircle_Arrow_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCircle_Arrow_Button_1 = K2Node_DynamicCast_AsCircle_Arrow_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_DynamicCast_AsCircle_Arrow_Button_2 = K2Node_DynamicCast_AsCircle_Arrow_Button_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_DisplayStyle = K2Node_Event_DisplayStyle;
	Parms.K2Node_Event_bIsComplete = K2Node_Event_bIsComplete;
	Parms.CallFunc_GetChallengeStyleLightAccentColor_ReturnValue = CallFunc_GetChallengeStyleLightAccentColor_ReturnValue;
	Parms.CallFunc_HandleBack_PassThrough = CallFunc_HandleBack_PassThrough;
	Parms.K2Node_DynamicCast_AsItem_Info_Header_Widget = K2Node_DynamicCast_AsItem_Info_Header_Widget;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


