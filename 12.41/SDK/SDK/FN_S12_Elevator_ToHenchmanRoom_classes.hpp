#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass S12_Elevator_ToHenchmanRoom.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_7(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement);
	void SequenceEvent__ENTRYPOINTSequenceDirector_6(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement);
	void SequenceEvent__ENTRYPOINTSequenceDirector_5(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement);
	void SequenceEvent__ENTRYPOINTSequenceDirector_4();
	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition_Event_0(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition_Event_1(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition_Event_2(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition3_Event_0(class ABP_Elevator_Transition_C* BP_Elevator_Transition3);
	void BP_Elevator_Transition3_Event_1(class ABP_Elevator_Transition_C* BP_Elevator_Transition3);
	void BP_Elevator_Transition_Event_3(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition_Event_4(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition3_Event_2(class ABP_Elevator_Transition_C* BP_Elevator_Transition3);
	void BP_Elevator_Transition3_Event_3(class ABP_Elevator_Transition_C* BP_Elevator_Transition3);
	void BP_Elevator_Transition_Event_5(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition_Event_6(class ABP_Elevator_Transition_C* BP_Elevator_Transition);
	void BP_Elevator_Transition3_Event_4(class ABP_Elevator_Transition_C* BP_Elevator_Transition3);
	void BP_Battlepass_LightSwitcher_Hench_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench);
	void BP_Battlepass_LightSwitcher_Maproom_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void Audio_Camera_Move_Event(class USoundBase* Sound);
	void Camera_Root_Movement_Event_0(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn);
	void Camera_Root_Movement_Event_1(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn);
	void Camera_Root_Movement_Event_2(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn);
	void Audio_Camera_Move_Back_Event(class USoundBase* Sound);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class USoundBase* K2Node_CustomEvent_Sound, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_6, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_5, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_4, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_4, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_3, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_3, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_2, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_2, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3_1, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition_1, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition, class ABP_Elevator_Transition_C* K2Node_CustomEvent_BP_Elevator_Transition3, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom, class USoundBase* K2Node_CustomEvent_Sound_1, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement_2, bool K2Node_CustomEvent_bStreamIn_2, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement_1, bool K2Node_CustomEvent_bStreamIn_1, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement, bool K2Node_CustomEvent_bStreamIn);
};

}


