#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass Henchman_Intro.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_4(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement);
	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void BP_Battlepass_LightSwitcher_Maproom_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Maproom);
	void BP_Battlepass_LightSwitcher_Hench_Event_0(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench);
	void BP_Battlepass_LightSwitcher_Hench_Event_1(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench);
	void BP_Battlepass_LightSwitcher_Hench_Event_2(class ABP_Battlepass_LightSwitcher_C* BP_Battlepass_LightSwitcher_Hench);
	void Camera_Root_Movement_Event_0(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn);
	void Camera_Root_Movement_Event_1(class AFrontend_EventLevel_Camera_C* Camera_Root_Movement, bool bStreamIn);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement, bool K2Node_CustomEvent_bStreamIn, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench_2, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench_1, class ABP_Battlepass_LightSwitcher_C* K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Hench, class AFrontend_EventLevel_Camera_C* K2Node_CustomEvent_Camera_Root_Movement_1, bool K2Node_CustomEvent_bStreamIn_1);
};

}


