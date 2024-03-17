#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x348 - 0x328)
// WidgetBlueprintGeneratedClass DailyChallengeStickyNoteWidget.DailyChallengeStickyNoteWidget_C
class UDailyChallengeStickyNoteWidget_C : public UFortDailyChallengeStickyNoteWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              ActiveChallenge;                                   // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Complete;                                          // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher_RerollAndNextChallengeTime;               // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDailyChallengeStickyNoteWidget_C* GetDefaultObj();

	void HandleHasChallengeUpdated(bool bHasChallenge, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UWidget* K2Node_Select_Default_1);
	void OnReplaceConfirmationClosed(bool bAcceptedReroll);
	void OnHasChallengeUpdated(bool bHasAssignedChallenge);
	void ExecuteUbergraph_DailyChallengeStickyNoteWidget(int32 EntryPoint, bool K2Node_Event_bHasAssignedChallenge, bool K2Node_Event_bAcceptedReroll);
};

}


