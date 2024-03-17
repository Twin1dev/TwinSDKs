#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CareerScreen.CareerScreen_C
// (None)

class UClass* UCareerScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CareerScreen_C");

	return Clss;
}


// CareerScreen_C CareerScreen.Default__CareerScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCareerScreen_C* UCareerScreen_C::GetDefaultObj()
{
	static class UCareerScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCareerScreen_C*>(UCareerScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CareerScreen.CareerScreen_C.ReplayCinematic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCareerScreen_C::ReplayCinematic(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CareerScreen_C", "ReplayCinematic");

	Params::UCareerScreen_C_ReplayCinematic_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function CareerScreen.CareerScreen_C.PlayCinematic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_UseElectraForReplayCinematic_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActivatableMovieWidget_Monolithic_Native_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVideoConfig_Mono           K2Node_MakeStruct_VideoConfig_Mono                               (None)
// bool                               CallFunc_LoadStreamingVideo_bNoAutoPlay                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCareerScreen_C::PlayCinematic(bool CallFunc_UseElectraForReplayCinematic_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActivatableMovieWidget_Monolithic_Native_C* CallFunc_Create_ReturnValue, const struct FVideoConfig_Mono& K2Node_MakeStruct_VideoConfig_Mono, bool CallFunc_LoadStreamingVideo_bNoAutoPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CareerScreen_C", "PlayCinematic");

	Params::UCareerScreen_C_PlayCinematic_Params Parms{};

	Parms.CallFunc_UseElectraForReplayCinematic_ReturnValue = CallFunc_UseElectraForReplayCinematic_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_VideoConfig_Mono = K2Node_MakeStruct_VideoConfig_Mono;
	Parms.CallFunc_LoadStreamingVideo_bNoAutoPlay = CallFunc_LoadStreamingVideo_bNoAutoPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CareerScreen.CareerScreen_C.ShowFeats
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowFeats                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHasCompletedFeats                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCareerScreen_C::ShowFeats(bool bShowFeats, bool bHasCompletedFeats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CareerScreen_C", "ShowFeats");

	Params::UCareerScreen_C_ShowFeats_Params Parms{};

	Parms.bShowFeats = bShowFeats;
	Parms.bHasCompletedFeats = bHasCompletedFeats;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CareerScreen.CareerScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCareerScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CareerScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CareerScreen.CareerScreen_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCareerScreen_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CareerScreen_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CareerScreen.CareerScreen_C.ExecuteUbergraph_CareerScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowFeats                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHasCompletedFeats                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class AVaultWorld_C*>       CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AVaultWorld_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVaultRotator_C*             CallFunc_GetVaultRotator_VaultRotator                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCareerScreen_C::ExecuteUbergraph_CareerScreen(int32 EntryPoint, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, int32 Temp_int_Variable, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_bShowFeats, bool K2Node_Event_bHasCompletedFeats, int32 Temp_int_Variable_3, int32 K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AVaultWorld_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool Temp_bool_Variable_1, class AVaultWorld_C* CallFunc_Array_Get_Item, class AVaultRotator_C* CallFunc_GetVaultRotator_VaultRotator, int32 K2Node_Select_Default_1, bool CallFunc_ActorHasTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CareerScreen_C", "ExecuteUbergraph_CareerScreen");

	Params::UCareerScreen_C_ExecuteUbergraph_CareerScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_bShowFeats = K2Node_Event_bShowFeats;
	Parms.K2Node_Event_bHasCompletedFeats = K2Node_Event_bHasCompletedFeats;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetVaultRotator_VaultRotator = CallFunc_GetVaultRotator_VaultRotator;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


