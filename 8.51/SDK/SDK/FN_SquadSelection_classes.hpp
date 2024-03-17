#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3B8 - 0x3B0)
// WidgetBlueprintGeneratedClass SquadSelection.SquadSelection_C
class USquadSelection_C : public UFortSquadSelectionMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USquadSelection_C* GetDefaultObj();

	void OnLocalPlayerParticipationChanged(bool bIsParticipating);
	void ExecuteUbergraph_SquadSelection(int32 EntryPoint, bool K2Node_Event_bIsParticipating, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UClass* K2Node_Select_Default_1, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess);
};

}


