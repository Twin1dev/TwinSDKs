#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TimeSynthController_Base.BP_TimeSynthController_Base_C
// (Actor)

class UClass* ABP_TimeSynthController_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TimeSynthController_Base_C");

	return Clss;
}


// BP_TimeSynthController_Base_C BP_TimeSynthController_Base.Default__BP_TimeSynthController_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TimeSynthController_Base_C* ABP_TimeSynthController_Base_C::GetDefaultObj()
{
	static class ABP_TimeSynthController_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TimeSynthController_Base_C*>(ABP_TimeSynthController_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.GetIsPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TimeSynthController_Base_C::GetIsPlaying(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "GetIsPlaying");

	Params::ABP_TimeSynthController_Base_C_GetIsPlaying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.GetTracksForRegistration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBP_TimeSynthTrackComponent_C*>Tracks                                                           (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)

void ABP_TimeSynthController_Base_C::GetTracksForRegistration(TArray<class UBP_TimeSynthTrackComponent_C*>* Tracks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "GetTracksForRegistration");

	Params::ABP_TimeSynthController_Base_C_GetTracksForRegistration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Tracks != nullptr)
		*Tracks = std::move(Parms.Tracks);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.CalculateMaxClipDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FTimeSynth_TrackStemData>Clips                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxDuration                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimeSynth_TrackStemData    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TimeSynthController_Base_C::CalculateMaxClipDuration(TArray<struct FTimeSynth_TrackStemData>& Clips, int32* Duration, int32 MaxDuration, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "CalculateMaxClipDuration");

	Params::ABP_TimeSynthController_Base_C_CalculateMaxClipDuration_Params Parms{};

	Parms.Clips = Clips;
	Parms.MaxDuration = MaxDuration;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.QueueTrackStartInternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_TimeSynthTrackComponent_C*NewTrack                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBPM_Result                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeSynthController_Base_C::QueueTrackStartInternal(class UBP_TimeSynthTrackComponent_C* NewTrack, float CallFunc_GetBPM_Result, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "QueueTrackStartInternal");

	Params::ABP_TimeSynthController_Base_C_QueueTrackStartInternal_Params Parms{};

	Parms.NewTrack = NewTrack;
	Parms.CallFunc_GetBPM_Result = CallFunc_GetBPM_Result;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.OnQuantizationBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETimeSynthEventQuantizationQuantizationType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumBars                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Beat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeSynthController_Base_C::OnQuantizationBar(enum class ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "OnQuantizationBar");

	Params::ABP_TimeSynthController_Base_C_OnQuantizationBar_Params Parms{};

	Parms.QuantizationType = QuantizationType;
	Parms.NumBars = NumBars;
	Parms.Beat = Beat;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.FlushExtraClips
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Exclude_Current                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TimeSynthTrackComponent_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABP_TimeSynthController_Base_C::FlushExtraClips(bool Exclude_Current, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_TimeSynthTrackComponent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "FlushExtraClips");

	Params::ABP_TimeSynthController_Base_C_FlushExtraClips_Params Parms{};

	Parms.Exclude_Current = Exclude_Current;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.OnQuantizationBeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETimeSynthEventQuantizationQuantizationType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumBars                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Beat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeSynthController_Base_C::OnQuantizationBeat(enum class ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "OnQuantizationBeat");

	Params::ABP_TimeSynthController_Base_C_OnQuantizationBeat_Params Parms{};

	Parms.QuantizationType = QuantizationType;
	Parms.NumBars = NumBars;
	Parms.Beat = Beat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.PlayTransition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimeSynth_TransitionData   Transition_Data                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UBP_TimeSynthTrackComponent_C*Queued_Track                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimeSynth_TrackStemData    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculateMaxClipDuration_Duration                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimeSynthClipHandle        CallFunc_PlayClip_ReturnValue                                    (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeSynthController_Base_C::PlayTransition(const struct FTimeSynth_TransitionData& Transition_Data, class UBP_TimeSynthTrackComponent_C* Queued_Track, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, int32 CallFunc_CalculateMaxClipDuration_Duration, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_PlayClip_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "PlayTransition");

	Params::ABP_TimeSynthController_Base_C_PlayTransition_Params Parms{};

	Parms.Transition_Data = Transition_Data;
	Parms.Queued_Track = Queued_Track;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CalculateMaxClipDuration_Duration = CallFunc_CalculateMaxClipDuration_Duration;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_PlayClip_ReturnValue = CallFunc_PlayClip_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.StopAllMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play_Outro                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TimeSynthController_Base_C::StopAllMusic(bool Play_Outro, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "StopAllMusic");

	Params::ABP_TimeSynthController_Base_C_StopAllMusic_Params Parms{};

	Parms.Play_Outro = Play_Outro;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.ChangeTrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_TimeSynthTrackComponent_C*New_Track                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TimeSynthTrackComponent_C*NewTrack                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlaystate_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlaystate_Result_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTransitionForTrack_Transition_Found                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimeSynth_TransitionData   CallFunc_HasTransitionForTrack_Transition_Data                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TimeSynthController_Base_C::ChangeTrack(class UBP_TimeSynthTrackComponent_C* New_Track, class UBP_TimeSynthTrackComponent_C* NewTrack, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckPlaystate_Result, bool CallFunc_CheckPlaystate_Result_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasTransitionForTrack_Transition_Found, const struct FTimeSynth_TransitionData& CallFunc_HasTransitionForTrack_Transition_Data, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "ChangeTrack");

	Params::ABP_TimeSynthController_Base_C_ChangeTrack_Params Parms{};

	Parms.New_Track = New_Track;
	Parms.NewTrack = NewTrack;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CheckPlaystate_Result = CallFunc_CheckPlaystate_Result;
	Parms.CallFunc_CheckPlaystate_Result_1 = CallFunc_CheckPlaystate_Result_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_HasTransitionForTrack_Transition_Found = CallFunc_HasTransitionForTrack_Transition_Found;
	Parms.CallFunc_HasTransitionForTrack_Transition_Data = CallFunc_HasTransitionForTrack_Transition_Data;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.OnReady_CB064A4141A4B166152154812676A378
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeSynthController_Base_C::OnReady_CB064A4141A4B166152154812676A378()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "OnReady_CB064A4141A4B166152154812676A378");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.BndEvt__BP_TimeSynthTrackComponent_Infiltration_K2Node_ComponentBoundEvent_0_OnPlayStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ETimeSynth_TrackPlayStatesPrevious                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimeSynth_TrackPlayStatesNew                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeSynthController_Base_C::BndEvt__BP_TimeSynthTrackComponent_Infiltration_K2Node_ComponentBoundEvent_0_OnPlayStateChanged__DelegateSignature(enum class ETimeSynth_TrackPlayStates Previous, enum class ETimeSynth_TrackPlayStates New)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "BndEvt__BP_TimeSynthTrackComponent_Infiltration_K2Node_ComponentBoundEvent_0_OnPlayStateChanged__DelegateSignature");

	Params::ABP_TimeSynthController_Base_C_BndEvt__BP_TimeSynthTrackComponent_Infiltration_K2Node_ComponentBoundEvent_0_OnPlayStateChanged__DelegateSignature_Params Parms{};

	Parms.Previous = Previous;
	Parms.New = New;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.SetVolumeGroup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume_Multiplier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeSynthController_Base_C::SetVolumeGroup(int32 Index, float Volume_Multiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "SetVolumeGroup");

	Params::ABP_TimeSynthController_Base_C_SetVolumeGroup_Params Parms{};

	Parms.Index = Index;
	Parms.Volume_Multiplier = Volume_Multiplier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.BndEvt__BP_TimeSynthTrackComponent_Suspicious_K2Node_ComponentBoundEvent_1_OnPlayStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ETimeSynth_TrackPlayStatesPrevious                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimeSynth_TrackPlayStatesNew                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeSynthController_Base_C::BndEvt__BP_TimeSynthTrackComponent_Suspicious_K2Node_ComponentBoundEvent_1_OnPlayStateChanged__DelegateSignature(enum class ETimeSynth_TrackPlayStates Previous, enum class ETimeSynth_TrackPlayStates New)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "BndEvt__BP_TimeSynthTrackComponent_Suspicious_K2Node_ComponentBoundEvent_1_OnPlayStateChanged__DelegateSignature");

	Params::ABP_TimeSynthController_Base_C_BndEvt__BP_TimeSynthTrackComponent_Suspicious_K2Node_ComponentBoundEvent_1_OnPlayStateChanged__DelegateSignature_Params Parms{};

	Parms.Previous = Previous;
	Parms.New = New;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.BndEvt__BP_TimeSynthTrackComponent_Alerted_K2Node_ComponentBoundEvent_2_OnPlayStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ETimeSynth_TrackPlayStatesPrevious                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimeSynth_TrackPlayStatesNew                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeSynthController_Base_C::BndEvt__BP_TimeSynthTrackComponent_Alerted_K2Node_ComponentBoundEvent_2_OnPlayStateChanged__DelegateSignature(enum class ETimeSynth_TrackPlayStates Previous, enum class ETimeSynth_TrackPlayStates New)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "BndEvt__BP_TimeSynthTrackComponent_Alerted_K2Node_ComponentBoundEvent_2_OnPlayStateChanged__DelegateSignature");

	Params::ABP_TimeSynthController_Base_C_BndEvt__BP_TimeSynthTrackComponent_Alerted_K2Node_ComponentBoundEvent_2_OnPlayStateChanged__DelegateSignature_Params Parms{};

	Parms.Previous = Previous;
	Parms.New = New;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TimeSynthController_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeSynthController_Base_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "ReceiveEndPlay");

	Params::ABP_TimeSynthController_Base_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.ExecuteUbergraph_BP_TimeSynthController_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_AuthorityMatchReady*CallFunc_MatchReadyAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class ETimeSynth_TrackPlayStatesK2Node_ComponentBoundEvent_Previous_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimeSynth_TrackPlayStatesK2Node_ComponentBoundEvent_New_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Volume_Multiplier                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTimeSynthVolumeGroup*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimeSynth_TrackPlayStatesK2Node_ComponentBoundEvent_Previous_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimeSynth_TrackPlayStatesK2Node_ComponentBoundEvent_New_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimeSynth_TrackPlayStatesK2Node_ComponentBoundEvent_Previous                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimeSynth_TrackPlayStatesK2Node_ComponentBoundEvent_New                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBP_TimeSynthTrackComponent_C*>CallFunc_GetTracksForRegistration_Tracks                         (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UBP_TimeSynthTrackComponent_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TimeSynthController_Base_C::ExecuteUbergraph_BP_TimeSynthController_Base(int32 EntryPoint, class UFortAsyncAction_AuthorityMatchReady* CallFunc_MatchReadyAsync_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ETimeSynth_TrackPlayStates K2Node_ComponentBoundEvent_Previous_2, enum class ETimeSynth_TrackPlayStates K2Node_ComponentBoundEvent_New_2, int32 K2Node_CustomEvent_Index, float K2Node_CustomEvent_Volume_Multiplier, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_MapRangeClamped_ReturnValue, class UTimeSynthVolumeGroup* CallFunc_Array_Get_Item, enum class ETimeSynth_TrackPlayStates K2Node_ComponentBoundEvent_Previous_1, enum class ETimeSynth_TrackPlayStates K2Node_ComponentBoundEvent_New_1, enum class ETimeSynth_TrackPlayStates K2Node_ComponentBoundEvent_Previous, enum class ETimeSynth_TrackPlayStates K2Node_ComponentBoundEvent_New, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, TArray<class UBP_TimeSynthTrackComponent_C*>& CallFunc_GetTracksForRegistration_Tracks, class UBP_TimeSynthTrackComponent_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeSynthController_Base_C", "ExecuteUbergraph_BP_TimeSynthController_Base");

	Params::ABP_TimeSynthController_Base_C_ExecuteUbergraph_BP_TimeSynthController_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MatchReadyAsync_ReturnValue = CallFunc_MatchReadyAsync_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_Previous_2 = K2Node_ComponentBoundEvent_Previous_2;
	Parms.K2Node_ComponentBoundEvent_New_2 = K2Node_ComponentBoundEvent_New_2;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_Volume_Multiplier = K2Node_CustomEvent_Volume_Multiplier;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_ComponentBoundEvent_Previous_1 = K2Node_ComponentBoundEvent_Previous_1;
	Parms.K2Node_ComponentBoundEvent_New_1 = K2Node_ComponentBoundEvent_New_1;
	Parms.K2Node_ComponentBoundEvent_Previous = K2Node_ComponentBoundEvent_Previous;
	Parms.K2Node_ComponentBoundEvent_New = K2Node_ComponentBoundEvent_New;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetTracksForRegistration_Tracks = CallFunc_GetTracksForRegistration_Tracks;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


