#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x398 - 0x338)
// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C
class UPlayerSurveyPanelContentsAnswerRatingWidget_C : public UFortSurveyNumericalChoiceWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                   CommonActionWidget_0;                              // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_1;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_2;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_3;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_4;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_5;                                    // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UCommonButton*>                 RatingButtons;                                     // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class FText                                  Text_Subtitle;                                     // 0x380(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UPlayerSurveyPanelContentsAnswerRatingWidget_C* GetDefaultObj();

	class FText GetSubtitleText();
	class UWidget* GetDefaultFocusedWidgetPostDummy(enum class EUINavigation Navigation);
	class UWidget* GetDefaultFocusedWidget(int32 DefaultIndex, class UWidget* TargetWidget, int32 SelectedIndex, class UWidget* CallFunc_HandleGetDefaultFocusedWidget_ReturnValue);
	void OnInitialized();
	void HandleButtonClicked(int32 ButtonIndex);
	void HandleButtonFocused(int32 ButtonIndex);
	void HandleCommitCurrentAnswer();
	void HandleQuestionChanged();
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget(int32 EntryPoint, int32 K2Node_Event_ButtonIndex_1, TArray<class UCommonButton*>& K2Node_MakeArray_Array, int32 K2Node_Event_ButtonIndex, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_OutAnswer);
};

}


