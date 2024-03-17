#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C
// (None)

class UClass* USpatialHenchmanFactionSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialHenchmanFactionSelection_C");

	return Clss;
}


// SpatialHenchmanFactionSelection_C SpatialHenchmanFactionSelection.Default__SpatialHenchmanFactionSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialHenchmanFactionSelection_C* USpatialHenchmanFactionSelection_C::GetDefaultObj()
{
	static class USpatialHenchmanFactionSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialHenchmanFactionSelection_C*>(USpatialHenchmanFactionSelection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.ReverseEitherOrAnims
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpatialHenchmanFactionEgo_C*K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USpatialHenchmanFactionAlter_C*K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialHenchmanFactionSelection_C::ReverseEitherOrAnims(class USpatialHenchmanFactionEgo_C* K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego, bool K2Node_DynamicCast_bSuccess, class USpatialHenchmanFactionAlter_C* K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "ReverseEitherOrAnims");

	Params::USpatialHenchmanFactionSelection_C_ReverseEitherOrAnims_Params Parms{};

	Parms.K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego = K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter = K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.ForwardEitherOrAnims
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpatialHenchmanFactionEgo_C*K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USpatialHenchmanFactionAlter_C*K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialHenchmanFactionSelection_C::ForwardEitherOrAnims(class USpatialHenchmanFactionEgo_C* K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego, bool K2Node_DynamicCast_bSuccess, class USpatialHenchmanFactionAlter_C* K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "ForwardEitherOrAnims");

	Params::USpatialHenchmanFactionSelection_C_ForwardEitherOrAnims_Params Parms{};

	Parms.K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego = K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter = K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.OnActivateFactionOptions
// (Event, Public, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionSelection_C::OnActivateFactionOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "OnActivateFactionOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.AlterInspectionClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialHenchmanFactionSelection_C::AlterInspectionClicked(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "AlterInspectionClicked");

	Params::USpatialHenchmanFactionSelection_C_AlterInspectionClicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.EgoInspectionClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialHenchmanFactionSelection_C::EgoInspectionClicked(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "EgoInspectionClicked");

	Params::USpatialHenchmanFactionSelection_C_EgoInspectionClicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionSelection_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.Start_BackToHenchmanRoom
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionSelection_C::Start_BackToHenchmanRoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "Start_BackToHenchmanRoom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionSelection_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.Start_BackToHenchmanInspection
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionSelection_C::Start_BackToHenchmanInspection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "Start_BackToHenchmanInspection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USpatialHenchmanFactionSelection_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "PreConstruct");

	Params::USpatialHenchmanFactionSelection_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BndEvt__Button_MoreInfo_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialHenchmanFactionSelection_C::BndEvt__Button_MoreInfo_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "BndEvt__Button_MoreInfo_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::USpatialHenchmanFactionSelection_C_BndEvt__Button_MoreInfo_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.SetUserFocusOnSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionSelection_C::SetUserFocusOnSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "SetUserFocusOnSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BndEvt__MissionDetailsAlter_K2Node_ComponentBoundEvent_2_OnPlayAcceptedMissionAnim__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionSelection_C::BndEvt__MissionDetailsAlter_K2Node_ComponentBoundEvent_2_OnPlayAcceptedMissionAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "BndEvt__MissionDetailsAlter_K2Node_ComponentBoundEvent_2_OnPlayAcceptedMissionAnim__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BndEvt__MissionDetailsEgo_K2Node_ComponentBoundEvent_3_OnPlayAcceptedMissionAnim__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionSelection_C::BndEvt__MissionDetailsEgo_K2Node_ComponentBoundEvent_3_OnPlayAcceptedMissionAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "BndEvt__MissionDetailsEgo_K2Node_ComponentBoundEvent_3_OnPlayAcceptedMissionAnim__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BndEvt__Button_AlterInspection_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialHenchmanFactionSelection_C::BndEvt__Button_AlterInspection_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "BndEvt__Button_AlterInspection_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::USpatialHenchmanFactionSelection_C_BndEvt__Button_AlterInspection_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BndEvt__Button_EgoInspection_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialHenchmanFactionSelection_C::BndEvt__Button_EgoInspection_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "BndEvt__Button_EgoInspection_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::USpatialHenchmanFactionSelection_C_BndEvt__Button_EgoInspection_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.OnUpdatedRoomState
// (Event, Public, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionSelection_C::OnUpdatedRoomState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "OnUpdatedRoomState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_5_OnAboutModalClosedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionSelection_C::BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_5_OnAboutModalClosedDynamic__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_5_OnAboutModalClosedDynamic__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.Play On Accept Confirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialHenchmanFactionSelection_C::Play_On_Accept_Confirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "Play On Accept Confirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.ExecuteUbergraph_SpatialHenchmanFactionSelection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionState           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortVariantTokenType*       CallFunc_GetAlterVariantToken_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortVariantTokenType*       CallFunc_GetEgoVariantToken_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpatialHenchmanFactionAlter_C*K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USpatialHenchmanFactionEgo_C*K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPS12_AboutModal_C*         K2Node_DynamicCast_AsBPS12_About_Modal                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionState           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)

void USpatialHenchmanFactionSelection_C::ExecuteUbergraph_SpatialHenchmanFactionSelection(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, enum class EMissionState Temp_byte_Variable, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, class UFortVariantTokenType* CallFunc_GetAlterVariantToken_ReturnValue, class UFortVariantTokenType* CallFunc_GetEgoVariantToken_ReturnValue, class USpatialHenchmanFactionAlter_C* K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter, bool K2Node_DynamicCast_bSuccess, class USpatialHenchmanFactionEgo_C* K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float Temp_float_Variable_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_CustomEvent_Button_1, class UCommonButton* K2Node_CustomEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_6, class UBPS12_AboutModal_C* K2Node_DynamicCast_AsBPS12_About_Modal, bool K2Node_DynamicCast_bSuccess_2, float K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_7, enum class EMissionState Temp_byte_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float K2Node_Select_Default_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialHenchmanFactionSelection_C", "ExecuteUbergraph_SpatialHenchmanFactionSelection");

	Params::USpatialHenchmanFactionSelection_C_ExecuteUbergraph_SpatialHenchmanFactionSelection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.CallFunc_GetAlterVariantToken_ReturnValue = CallFunc_GetAlterVariantToken_ReturnValue;
	Parms.CallFunc_GetEgoVariantToken_ReturnValue = CallFunc_GetEgoVariantToken_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter = K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego = K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_3 = CallFunc_PlayAnimationForward_ReturnValue_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_4 = CallFunc_PlayAnimationForward_ReturnValue_4;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_5 = CallFunc_PlayAnimationForward_ReturnValue_5;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_6 = CallFunc_PlayAnimationForward_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBPS12_About_Modal = K2Node_DynamicCast_AsBPS12_About_Modal;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_7 = CallFunc_PlayAnimationForward_ReturnValue_7;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


