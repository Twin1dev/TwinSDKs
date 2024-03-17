#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x26 (0x298 - 0x272)
// BlueprintGeneratedClass S12BP_MusicController.S12BP_MusicController_C
class AS12BP_MusicController_C : public ABP_TimeSynthController_Base_C
{
public:
	uint8                                        Pad_6D29[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_TimeSynthTrackComponent_C*         BP_TimeSynthTrackComponent;                        // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTimeSynthClip*                        Clip1;                                             // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTimeSynthClip*                        Clip2;                                             // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AS12BP_MusicController_C* GetDefaultObj();

	void GetTracksForRegistration(TArray<class UBP_TimeSynthTrackComponent_C*>* Tracks, TArray<class UBP_TimeSynthTrackComponent_C*>& K2Node_MakeArray_Array);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_S12BP_MusicController(int32 EntryPoint);
};

}


