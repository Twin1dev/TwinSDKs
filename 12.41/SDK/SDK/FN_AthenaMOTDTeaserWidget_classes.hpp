#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x500 - 0x490)
// WidgetBlueprintGeneratedClass AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C
class UAthenaMOTDTeaserWidget_C : public UFortAthenaMOTDTeaserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHovered;                                         // 0x498(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Details;                                    // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_PipDisplay;                                 // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputActionWidget;                                 // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  RichTextBlock_NewsTitle;                           // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleCommonButton_C*                 SimpleCommonButton;                                // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        PerItemDisplayTime;                                // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumItems;                                          // 0x4CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurDisplayedItemIndex;                             // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EE3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ScrollToNextItemTimerHandle;                       // 0x4D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DesignTime;                                        // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6EE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MIDFont;                                           // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefaultColor;                                      // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaMOTDTeaserWidget_C* GetDefaultObj();

	void SetDynamicColors(const struct FLinearColor& DarkColor, const struct FLinearColor& LightColor, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void UpdateCurDisplayedNewsVisual(bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FAthenaNewsEntry& CallFunc_GetNewsByIndex_ReturnValue, int32 CallFunc_GetNewsCount_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void ScrollNextItem();
	void BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
	void HandleEntryWidgetHoveredChanged(bool NewIsHovered);
	void BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnNewsPopulated();
	void OnClicked(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaMOTDTeaserWidget(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_Event_IsDesignTime, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, class UAthenaMOTDTile_C* K2Node_DynamicCast_AsAthena_MOTDTile, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_ComponentBoundEvent_Widget, bool K2Node_CustomEvent_NewIsHovered, class UAthenaMOTDTile_C* K2Node_DynamicCast_AsAthena_MOTDTile_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 CallFunc_Max_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FTextBlockStyle& K2Node_MakeStruct_TextBlockStyle, class UCommonButton* K2Node_CustomEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
};

}


