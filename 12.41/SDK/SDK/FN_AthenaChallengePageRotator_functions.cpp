#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaChallengePageRotator.AthenaChallengePageRotator_C
// (None)

class UClass* UAthenaChallengePageRotator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaChallengePageRotator_C");

	return Clss;
}


// AthenaChallengePageRotator_C AthenaChallengePageRotator.Default__AthenaChallengePageRotator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaChallengePageRotator_C* UAthenaChallengePageRotator_C::GetDefaultObj()
{
	static class UAthenaChallengePageRotator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaChallengePageRotator_C*>(UAthenaChallengePageRotator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaChallengePageRotator.AthenaChallengePageRotator_C.BP_OnOptionsPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengePageRotator_C::BP_OnOptionsPopulated(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChallengePageRotator_C", "BP_OnOptionsPopulated");

	Params::UAthenaChallengePageRotator_C_BP_OnOptionsPopulated_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengePageRotator.AthenaChallengePageRotator_C.BP_OnOptionSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengePageRotator_C::BP_OnOptionSelected(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChallengePageRotator_C", "BP_OnOptionSelected");

	Params::UAthenaChallengePageRotator_C_BP_OnOptionSelected_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengePageRotator.AthenaChallengePageRotator_C.OnNumPagesSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumPages                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengePageRotator_C::OnNumPagesSet(int32 NumPages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChallengePageRotator_C", "OnNumPagesSet");

	Params::UAthenaChallengePageRotator_C_OnNumPagesSet_Params Parms{};

	Parms.NumPages = NumPages;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengePageRotator.AthenaChallengePageRotator_C.SetVisibility-PostAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaChallengePageRotator_C::SetVisibilityMinusPostAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChallengePageRotator_C", "SetVisibility-PostAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaChallengePageRotator.AthenaChallengePageRotator_C.SetInputBindingVisiblity
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengePageRotator_C::SetInputBindingVisiblity(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChallengePageRotator_C", "SetInputBindingVisiblity");

	Params::UAthenaChallengePageRotator_C_SetInputBindingVisiblity_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengePageRotator.AthenaChallengePageRotator_C.ExecuteUbergraph_AthenaChallengePageRotator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Count                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumPages                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Event_InVisibility                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengePageRotator_C::ExecuteUbergraph_AthenaChallengePageRotator(int32 EntryPoint, int32 K2Node_Event_Count, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 K2Node_Event_Index, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 K2Node_Event_NumPages, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class ESlateVisibility K2Node_Event_InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChallengePageRotator_C", "ExecuteUbergraph_AthenaChallengePageRotator");

	Params::UAthenaChallengePageRotator_C_ExecuteUbergraph_AthenaChallengePageRotator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Count = K2Node_Event_Count;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.K2Node_Event_NumPages = K2Node_Event_NumPages;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Event_InVisibility = K2Node_Event_InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}

}


