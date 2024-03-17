#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C
// (None)

class UClass* UAthenaMapNavigableIconStackOfChallenges_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMapNavigableIconStackOfChallenges_C");

	return Clss;
}


// AthenaMapNavigableIconStackOfChallenges_C AthenaMapNavigableIconStackOfChallenges.Default__AthenaMapNavigableIconStackOfChallenges_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMapNavigableIconStackOfChallenges_C* UAthenaMapNavigableIconStackOfChallenges_C::GetDefaultObj()
{
	static class UAthenaMapNavigableIconStackOfChallenges_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMapNavigableIconStackOfChallenges_C*>(UAthenaMapNavigableIconStackOfChallenges_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.SetAnywhereState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsAnytimeChallenge                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UAthenaMapNavigableIconStackOfChallenges_C::SetAnywhereState(bool bIsAnytimeChallenge, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "SetAnywhereState");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_SetAnywhereState_Params Parms{};

	Parms.bIsAnytimeChallenge = bIsAnytimeChallenge;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.SetMaterialState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Complete                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Locked                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasIconOverride                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMapNavigableIconStackOfChallenges_C::SetMaterialState(bool Complete, bool Locked, bool HasIconOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "SetMaterialState");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_SetMaterialState_Params Parms{};

	Parms.Complete = Complete;
	Parms.Locked = Locked;
	Parms.HasIconOverride = HasIconOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnChallengeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsComplete                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsLocked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHasIconOverride                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldShowBang                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMapNavigableIconStackOfChallenges_C::OnChallengeSet(bool bIsComplete, bool bIsLocked, bool bHasIconOverride, float Progress, bool bShouldShowBang)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnChallengeSet");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet_Params Parms{};

	Parms.bIsComplete = bIsComplete;
	Parms.bIsLocked = bIsLocked;
	Parms.bHasIconOverride = bHasIconOverride;
	Parms.Progress = Progress;
	Parms.bShouldShowBang = bShouldShowBang;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnSetIsInGame
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInGame                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMapNavigableIconStackOfChallenges_C::OnSetIsInGame(bool bIsInGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnSetIsInGame");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_OnSetIsInGame_Params Parms{};

	Parms.bIsInGame = bIsInGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnChangingStackIndexAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMapNavigableIconStackOfChallenges_C::OnChangingStackIndexAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnChangingStackIndexAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMapNavigableIconStackOfChallenges_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMapNavigableIconStackOfChallenges_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnChallengeReset
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMapNavigableIconStackOfChallenges_C::OnChallengeReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnChallengeReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnBeginIntroAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMapNavigableIconStackOfChallenges_C::OnBeginIntroAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnBeginIntroAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnSetHasLocation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHasLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMapNavigableIconStackOfChallenges_C::OnSetHasLocation(bool bHasLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnSetHasLocation");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_OnSetHasLocation_Params Parms{};

	Parms.bHasLocation = bHasLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnChangedStackData
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewStackCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NonCompletedCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMapNavigableIconStackOfChallenges_C::OnChangedStackData(int32 NewStackCount, int32 NonCompletedCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnChangedStackData");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_OnChangedStackData_Params Parms{};

	Parms.NewStackCount = NewStackCount;
	Parms.NonCompletedCount = NonCompletedCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnChallengeIconOverriden
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMapNavigableIconStackOfChallenges_C::OnChallengeIconOverriden(class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnChallengeIconOverriden");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_OnChallengeIconOverriden_Params Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUserInteraction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMapNavigableIconStackOfChallenges_C::OnSelected(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnSelected");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_OnSelected_Params Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnUnselected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUserInteraction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMapNavigableIconStackOfChallenges_C::OnUnselected(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnUnselected");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_OnUnselected_Params Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUserInteraction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMapNavigableIconStackOfChallenges_C::OnHovered(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnHovered");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_OnHovered_Params Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUserInteraction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMapNavigableIconStackOfChallenges_C::OnUnhovered(bool bUserInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnUnhovered");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_OnUnhovered_Params Parms{};

	Parms.bUserInteraction = bUserInteraction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.OnChangeBangVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShouldShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMapNavigableIconStackOfChallenges_C::OnChangeBangVisibility(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "OnChangeBangVisibility");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_OnChangeBangVisibility_Params Parms{};

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C.ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsComplete                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsLocked                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHasIconOverride                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Progress                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldShowBang                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsInGame                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectStackedDataIndex_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldCycleAutomatically_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bHasLocation                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewStackCount                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NonCompletedCount                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class UTexture2D*                  K2Node_Event_Icon                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_K2_GetTextureParameterValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUserInteraction_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldCycleAutomatically_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIconHovered_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bUserInteraction_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUserInteraction_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsIconSelected_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bUserInteraction                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsIconSelected_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsIconSelected_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsIconSelected_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldShow                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMapNavigableIconStackOfChallenges_C::ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool K2Node_Event_bIsComplete, bool K2Node_Event_bIsLocked, bool K2Node_Event_bHasIconOverride, float K2Node_Event_Progress, bool K2Node_Event_bShouldShowBang, bool K2Node_Event_bIsInGame, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, bool Temp_bool_Variable_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_GetSelectStackedDataIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_4, class FText CallFunc_Conv_IntToText_ReturnValue, float Temp_float_Variable, bool Temp_bool_Variable_5, float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_ShouldCycleAutomatically_ReturnValue, float Temp_float_Variable_1, bool K2Node_Event_bHasLocation, float Temp_float_Variable_2, int32 K2Node_Event_NewStackCount, int32 K2Node_Event_NonCompletedCount, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class UTexture2D* K2Node_Event_Icon, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, bool K2Node_Event_bUserInteraction_3, bool CallFunc_ShouldCycleAutomatically_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsIconHovered_ReturnValue, bool Temp_bool_Variable_6, bool K2Node_Event_bUserInteraction_2, float K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_Event_bUserInteraction_1, bool CallFunc_IsIconSelected_ReturnValue, bool K2Node_Event_bUserInteraction, bool CallFunc_IsIconSelected_ReturnValue_1, bool CallFunc_IsIconSelected_ReturnValue_2, bool CallFunc_IsIconSelected_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_8, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UWidgetAnimation* K2Node_Select_Default_3, float CallFunc_GetEndTime_ReturnValue, float K2Node_Select_Default_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, enum class ESlateVisibility K2Node_Select_Default_5, enum class ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_7, enum class ESlateVisibility K2Node_Select_Default_6, bool K2Node_Event_bShouldShow, enum class ESlateVisibility K2Node_Select_Default_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapNavigableIconStackOfChallenges_C", "ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges");

	Params::UAthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.K2Node_Event_bIsComplete = K2Node_Event_bIsComplete;
	Parms.K2Node_Event_bIsLocked = K2Node_Event_bIsLocked;
	Parms.K2Node_Event_bHasIconOverride = K2Node_Event_bHasIconOverride;
	Parms.K2Node_Event_Progress = K2Node_Event_Progress;
	Parms.K2Node_Event_bShouldShowBang = K2Node_Event_bShouldShowBang;
	Parms.K2Node_Event_bIsInGame = K2Node_Event_bIsInGame;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetSelectStackedDataIndex_ReturnValue = CallFunc_GetSelectStackedDataIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_ShouldCycleAutomatically_ReturnValue = CallFunc_ShouldCycleAutomatically_ReturnValue;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Event_bHasLocation = K2Node_Event_bHasLocation;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.K2Node_Event_NewStackCount = K2Node_Event_NewStackCount;
	Parms.K2Node_Event_NonCompletedCount = K2Node_Event_NonCompletedCount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_Event_Icon = K2Node_Event_Icon;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;
	Parms.CallFunc_K2_GetTextureParameterValue_ReturnValue = CallFunc_K2_GetTextureParameterValue_ReturnValue;
	Parms.K2Node_Event_bUserInteraction_3 = K2Node_Event_bUserInteraction_3;
	Parms.CallFunc_ShouldCycleAutomatically_ReturnValue_1 = CallFunc_ShouldCycleAutomatically_ReturnValue_1;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_IsIconHovered_ReturnValue = CallFunc_IsIconHovered_ReturnValue;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_Event_bUserInteraction_2 = K2Node_Event_bUserInteraction_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_Event_bUserInteraction_1 = K2Node_Event_bUserInteraction_1;
	Parms.CallFunc_IsIconSelected_ReturnValue = CallFunc_IsIconSelected_ReturnValue;
	Parms.K2Node_Event_bUserInteraction = K2Node_Event_bUserInteraction;
	Parms.CallFunc_IsIconSelected_ReturnValue_1 = CallFunc_IsIconSelected_ReturnValue_1;
	Parms.CallFunc_IsIconSelected_ReturnValue_2 = CallFunc_IsIconSelected_ReturnValue_2;
	Parms.CallFunc_IsIconSelected_ReturnValue_3 = CallFunc_IsIconSelected_ReturnValue_3;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Event_bShouldShow = K2Node_Event_bShouldShow;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;

	UObject::ProcessEvent(Func, &Parms);

}

}


