#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaChallengePageView.AthenaChallengePageView_C
// (None)

class UClass* UAthenaChallengePageView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaChallengePageView_C");

	return Clss;
}


// AthenaChallengePageView_C AthenaChallengePageView.Default__AthenaChallengePageView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaChallengePageView_C* UAthenaChallengePageView_C::GetDefaultObj()
{
	static class UAthenaChallengePageView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaChallengePageView_C*>(UAthenaChallengePageView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaChallengePageView.AthenaChallengePageView_C.BP_OnNumPagesSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumPages                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengePageView_C::BP_OnNumPagesSet(int32 NumPages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChallengePageView_C", "BP_OnNumPagesSet");

	Params::UAthenaChallengePageView_C_BP_OnNumPagesSet_Params Parms{};

	Parms.NumPages = NumPages;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengePageView.AthenaChallengePageView_C.BP_OnCyclePageIn
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bForward                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengePageView_C::BP_OnCyclePageIn(bool bForward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChallengePageView_C", "BP_OnCyclePageIn");

	Params::UAthenaChallengePageView_C_BP_OnCyclePageIn_Params Parms{};

	Parms.bForward = bForward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengePageView.AthenaChallengePageView_C.BP_OnCyclePageOut
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bForward                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengePageView_C::BP_OnCyclePageOut(bool bForward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChallengePageView_C", "BP_OnCyclePageOut");

	Params::UAthenaChallengePageView_C_BP_OnCyclePageOut_Params Parms{};

	Parms.bForward = bForward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengePageView.AthenaChallengePageView_C.BP_OnIsInGameSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInGame                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengePageView_C::BP_OnIsInGameSet(bool bIsInGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChallengePageView_C", "BP_OnIsInGameSet");

	Params::UAthenaChallengePageView_C_BP_OnIsInGameSet_Params Parms{};

	Parms.bIsInGame = bIsInGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengePageView.AthenaChallengePageView_C.OnAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaChallengePageView_C::OnAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChallengePageView_C", "OnAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaChallengePageView.AthenaChallengePageView_C.ExecuteUbergraph_AthenaChallengePageView
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              K2Node_Event_NumPages                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bForward_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bForward                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsInGame                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengePageView_C::ExecuteUbergraph_AthenaChallengePageView(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable, bool Temp_bool_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Event_NumPages, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_Event_bForward_1, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_bForward, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, bool K2Node_Event_bIsInGame, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UWidgetAnimation* K2Node_Select_Default_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChallengePageView_C", "ExecuteUbergraph_AthenaChallengePageView");

	Params::UAthenaChallengePageView_C_ExecuteUbergraph_AthenaChallengePageView_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_NumPages = K2Node_Event_NumPages;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Event_bForward_1 = K2Node_Event_bForward_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_bForward = K2Node_Event_bForward;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = CallFunc_GetAnimationCurrentTime_ReturnValue_1;
	Parms.K2Node_Event_bIsInGame = K2Node_Event_bIsInGame;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


