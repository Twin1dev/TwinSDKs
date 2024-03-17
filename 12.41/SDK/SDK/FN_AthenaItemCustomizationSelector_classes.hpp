#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x828 - 0x740)
// WidgetBlueprintGeneratedClass AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C
class UAthenaItemCustomizationSelector_C : public UAthenaItemSelectorScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x740(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CannotSlide;                                       // 0x748(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NormalState;                                       // 0x750(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SlideRight;                                        // 0x758(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SlideLeft;                                         // 0x760(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideTextSearch;                                    // 0x768(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowTextSearch;                                    // 0x770(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ItemInfoIntroOutro;                                // 0x778(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x780(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              CameraFramingWidget;                               // 0x788(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                        CloseButton;                                       // 0x790(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             MainSafeZone;                                      // 0x798(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_MainContent;                                    // 0x7A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_SaveAndExit;                                    // 0x7A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ShortDescriptionText;                              // 0x7B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SlotImage;                                         // 0x7B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBox_LockerRoomMode;                            // 0x7C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 WidgetSwitcher_InteractionMethod;                  // 0x7C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 WidgetSwitcher_ItemEditor;                         // 0x7D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressModalWidget_C*                ProgressModal;                                     // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   FavoriteInputActionRow;                            // 0x7E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bPickingStyle;                                     // 0x7F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6C1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ApplyToAllInputActionRow;                          // 0x7F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bHandledBackRequest;                               // 0x808(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6C1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          AutoHideInfoPanelForDances;                        // 0x810(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TextEntryTimer;                                    // 0x818(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        SeasonFilter;                                      // 0x820(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxSeason;                                         // 0x824(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaItemCustomizationSelector_C* GetDefaultObj();

	void UpdateSeasonButtonEnabledState();
	class UMaterialInstance* GetCategoryImage(enum class EAthenaCustomizationCategory Index, class UMaterialInstance* OverrideImage, enum class EAthenaCustomizationCategory Temp_byte_Variable, class UMaterialInstance* Temp_object_Variable, class UMaterialInstance* Temp_object_Variable_1, class UMaterialInstance* Temp_object_Variable_2, class UMaterialInstance* Temp_object_Variable_3, class UMaterialInstance* Temp_object_Variable_4, class UMaterialInstance* Temp_object_Variable_5, class UMaterialInstance* Temp_object_Variable_6, class UMaterialInstance* Temp_object_Variable_7, class UMaterialInstance* Temp_object_Variable_8, class UMaterialInstance* Temp_object_Variable_9, class UMaterialInstance* Temp_object_Variable_10, class UMaterialInstance* Temp_object_Variable_11, class UMaterialInstance* Temp_object_Variable_12, class UMaterialInstance* Temp_object_Variable_13, class UMaterialInstance* Temp_object_Variable_14, class UMaterialInstance* Temp_object_Variable_15, class UMaterialInstance* Temp_object_Variable_16, class UMaterialInstance* Temp_object_Variable_17, class UMaterialInstance* Temp_object_Variable_18, class UMaterialInstance* Temp_object_Variable_19, class UMaterialInstance* K2Node_Select_Default);
	void HandleItemSetupFinished(class FText InText, enum class EAthenaCustomizationCategory Category, class UMaterialInstance* OverrideImage, class UMaterialInstance* CallFunc_GetCategoryImage_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void ApplyToAllSlots(bool* PassThrough);
	void UpdateInputActionVisibilities(class UFortItem* Item);
	void UpdateApplyToAllVisibility(class UFortItem* Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaItemWrapDefinition* K2Node_DynamicCast_AsAthena_Item_Wrap_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasInputActionHandler_ReturnValue);
	void UpdateToggleFavoriteVisibility(class UFortItem* Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasInputActionHandler_ReturnValue, bool CallFunc_IsItemOwned_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue);
	void GetCurrentItemCosmeticDefinition(class UAthenaCosmeticItemDefinition** Cosmetic_Item_Definition, class UFortItem* CallFunc_GetCurrentItem_ReturnValue, class UAthenaCosmeticAccountItem* K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item, bool K2Node_DynamicCast_bSuccess, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess_1);
	void ShowSavingModal(class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue);
	class UWidget* GetWidgetForFramingViewedItem();
	void ToggleFavorite(bool* PassThrough, class UFortItem* CallFunc_GetCurrentItem_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsFavorite_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleBack(bool* PassThrough);
	void Construct();
	void BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnFinsihedItemSave();
	void OnSavingItemStarted();
	void BP_OnActivated();
	void OnTabSelectionChanged(bool bShowingVariants);
	void OnCurrentItemChanged(class UFortItem* SelectedItem);
	void BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_1_OnUpdateSaveButtonVisuals__DelegateSignature();
	void BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_2_OnUpdateSaveButtonVisuals__DelegateSignature();
	void HideInfoPanel();
	void OnFinishedItemSetup(class FText& CategoryDisplayName, class FText& ItemDisplayTypeName, enum class EAthenaCustomizationCategory SelectedCategory, class UMaterialInstance* OverrideSlotImage);
	void HandleTextSearchSelectedChanged(bool bIsSelected);
	void HandleTextChanged(class FText NewText);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaItemCustomizationSelector(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bShowingVariants, class UFortItem* CallFunc_GetCurrentItem_ReturnValue, class UFortItem* K2Node_Event_SelectedItem, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, enum class EFortItemType CallFunc_GetType_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UAthenaCosmeticAccountItem* K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetLockerItemTypeText_ReturnValue, class FText CallFunc_GetLockerDescriptionText_ReturnValue, class UFortHero* CallFunc_GetHero_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsOwnedByCampaignHero_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UItemInfoHeaderWidget_C* K2Node_DynamicCast_AsItem_Info_Header_Widget, bool K2Node_DynamicCast_bSuccess_2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HandleBack_PassThrough, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool CallFunc_HandleBack_PassThrough_1, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, class FText K2Node_Event_CategoryDisplayName, class FText K2Node_Event_ItemDisplayTypeName, enum class EAthenaCustomizationCategory K2Node_Event_SelectedCategory, class UMaterialInstance* K2Node_Event_OverrideSlotImage, class UAthenaCustomizationPicker_C* K2Node_DynamicCast_AsAthena_Customization_Picker, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Has_Been_Initd_Variable, class UItemInfoHeaderWidget_C* K2Node_DynamicCast_AsItem_Info_Header_Widget_1, bool K2Node_DynamicCast_bSuccess_5, bool K2Node_CustomEvent_bIsSelected, class UAthenaCustomizationPicker_C* K2Node_DynamicCast_AsAthena_Customization_Picker_1, bool K2Node_DynamicCast_bSuccess_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText K2Node_CustomEvent_NewText, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


