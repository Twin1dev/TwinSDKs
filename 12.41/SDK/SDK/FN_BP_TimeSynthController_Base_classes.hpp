#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5A (0x272 - 0x218)
// BlueprintGeneratedClass BP_TimeSynthController_Base.BP_TimeSynthController_Base_C
class ABP_TimeSynthController_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTimeSynthComponent*                   TimeSynth;                                         // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TimeSynthTrackComponent_C*         CurrentTrack;                                      // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TransitionBeats;                                   // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TransitionActive;                                  // 0x234(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6D48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_TimeSynthTrackComponent_C*         QueuedTransitionTrack;                             // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTimeSynthVolumeGroup*>         VolumeGroups;                                      // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTimeSynthClipHandle>          QueuedTransitions;                                 // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UBP_TimeSynthTrackComponent_C*> QueuedTracks;                                      // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsPlaying;                                         // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Debug;                                             // 0x271(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_TimeSynthController_Base_C* GetDefaultObj();

	void GetIsPlaying(bool* IsPlaying);
	void GetTracksForRegistration(TArray<class UBP_TimeSynthTrackComponent_C*>* Tracks);
	void CalculateMaxClipDuration(TArray<struct FTimeSynth_TrackStemData>& Clips, int32* Duration, int32 MaxDuration, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void QueueTrackStartInternal(class UBP_TimeSynthTrackComponent_C* NewTrack, float CallFunc_GetBPM_Result, int32 CallFunc_Array_Add_ReturnValue);
	void OnQuantizationBar(enum class ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void FlushExtraClips(bool Exclude_Current, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_TimeSynthTrackComponent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void OnQuantizationBeat(enum class ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat);
	void PlayTransition(const struct FTimeSynth_TransitionData& Transition_Data, class UBP_TimeSynthTrackComponent_C* Queued_Track, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, int32 CallFunc_CalculateMaxClipDuration_Duration, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_PlayClip_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void StopAllMusic(bool Play_Outro, bool CallFunc_IsValid_ReturnValue);
	void ChangeTrack(class UBP_TimeSynthTrackComponent_C* New_Track, class UBP_TimeSynthTrackComponent_C* NewTrack, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckPlaystate_Result, bool CallFunc_CheckPlaystate_Result_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasTransitionForTrack_Transition_Found, const struct FTimeSynth_TransitionData& CallFunc_HasTransitionForTrack_Transition_Data, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void OnReady_CB064A4141A4B166152154812676A378();
	void BndEvt__BP_TimeSynthTrackComponent_Infiltration_K2Node_ComponentBoundEvent_0_OnPlayStateChanged__DelegateSignature(enum class ETimeSynth_TrackPlayStates Previous, enum class ETimeSynth_TrackPlayStates New);
	void SetVolumeGroup(int32 Index, float Volume_Multiplier);
	void BndEvt__BP_TimeSynthTrackComponent_Suspicious_K2Node_ComponentBoundEvent_1_OnPlayStateChanged__DelegateSignature(enum class ETimeSynth_TrackPlayStates Previous, enum class ETimeSynth_TrackPlayStates New);
	void BndEvt__BP_TimeSynthTrackComponent_Alerted_K2Node_ComponentBoundEvent_2_OnPlayStateChanged__DelegateSignature(enum class ETimeSynth_TrackPlayStates Previous, enum class ETimeSynth_TrackPlayStates New);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_TimeSynthController_Base(int32 EntryPoint, class UFortAsyncAction_AuthorityMatchReady* CallFunc_MatchReadyAsync_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ETimeSynth_TrackPlayStates K2Node_ComponentBoundEvent_Previous_2, enum class ETimeSynth_TrackPlayStates K2Node_ComponentBoundEvent_New_2, int32 K2Node_CustomEvent_Index, float K2Node_CustomEvent_Volume_Multiplier, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_MapRangeClamped_ReturnValue, class UTimeSynthVolumeGroup* CallFunc_Array_Get_Item, enum class ETimeSynth_TrackPlayStates K2Node_ComponentBoundEvent_Previous_1, enum class ETimeSynth_TrackPlayStates K2Node_ComponentBoundEvent_New_1, enum class ETimeSynth_TrackPlayStates K2Node_ComponentBoundEvent_Previous, enum class ETimeSynth_TrackPlayStates K2Node_ComponentBoundEvent_New, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, TArray<class UBP_TimeSynthTrackComponent_C*>& CallFunc_GetTracksForRegistration_Tracks, class UBP_TimeSynthTrackComponent_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


