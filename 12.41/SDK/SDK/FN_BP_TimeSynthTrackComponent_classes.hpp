#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x168 - 0xB0)
// BlueprintGeneratedClass BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C
class UBP_TimeSynthTrackComponent_C : public UActorComponent
{
public:
	enum class ETimeSynth_TrackNames_MANG        TrackID;                                           // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5916[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BPM;                                               // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_TimeSynthController_Base_C*        TimeSynthController;                               // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TrackLengthBeats;                                  // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5917[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTimeSynth_TrackStemData>      Clips;                                             // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        CurrentBeatDecrement;                              // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5918[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimeSynth_TrackStemData              StopClip;                                          // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class ETimeSynth_TrackNames_MANG, struct FTimeSynth_TransitionData> Transitions;                                       // 0xF0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTimeSynthClipHandle>          Handles;                                           // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         QuantizationEventBound;                            // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugEnabled;                                      // 0x151(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ETimeSynth_TrackPlayStates        PlayState;                                         // 0x152(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5919[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentBeat;                                       // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPlayStateChanged;                                // 0x158(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_TimeSynthTrackComponent_C* GetDefaultObj();

	void GetBPM(float* Result);
	void OnQuantizationBar(enum class ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat, bool CallFunc_CheckPlaystate_Result, bool CallFunc_CheckPlaystate_Result_1);
	void SetPlaystate(enum class ETimeSynth_TrackPlayStates Is_In_Play_State);
	void CheckPlaystate(enum class ETimeSynth_TrackPlayStates Is_In_Play_State, bool* Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnQuantizationBeat(enum class ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_CheckPlaystate_Result, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_CheckPlaystate_Result_1, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void HasTransitionForTrack(enum class ETimeSynth_TrackNames_MANG& New_Track, bool* Transition_Found, struct FTimeSynth_TransitionData* Transition_Data, const struct FTimeSynth_TransitionData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void LoopCurrentTrack(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_CalculateMaxClipDuration_Duration, int32 CallFunc_Array_Length_ReturnValue, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_PlayClip_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void CalculateTrackLengthBeats(TArray<struct FTimeSynth_TrackStemData>& Clips, int32* Duration, int32 MaxDuration, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void QueueTrackStop(bool Play_Outro, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckPlaystate_Result, bool CallFunc_CheckPlaystate_Result_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_PlayClip_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void QueueTrackStart(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_CalculateMaxClipDuration_Duration, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckPlaystate_Result, bool CallFunc_CheckPlaystate_Result_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_PlayClip_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void SetController(class ABP_TimeSynthController_Base_C* TimeSynthController, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnPlayStateChanged__DelegateSignature(enum class ETimeSynth_TrackPlayStates Previous, enum class ETimeSynth_TrackPlayStates New);
};

}


