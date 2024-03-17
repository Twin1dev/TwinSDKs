#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE1 (0x341 - 0x260)
// WidgetBlueprintGeneratedClass FrontEndRewards_ListRewards.FrontEndRewards_ListRewards_C
class UFrontEndRewards_ListRewards_C : public UFortRewardNotificationSubWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowHideDescription;                               // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimOutro;                                         // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RibbonExpand;                                      // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonActionWidget*                   ActionWidgetScroll;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Arrow_left;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Arrow_right;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasCardQueue;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Dots_margin;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         HintBoxBorder;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayMain;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBoxDescription;                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxDescription;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBlockHeader;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextDescriptionHeader;                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        TextDescriptionSummary;                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class URewards_ItemCard_C*>           CardList;                                          // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        CurrentSelectionIndex;                             // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CardSlideStaggerDelay;                             // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBusy;                                            // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D49[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CardOffset;                                        // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ScrollAction;                                      // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CollectAllAction;                                  // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InspectAction;                                     // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          TransitionInHandle;                                // 0x330(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionInStaggerDelay;                          // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TransitionInIndex;                                 // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTransitioningIn;                                 // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFrontEndRewards_ListRewards_C* GetDefaultObj();

	void UpdateScrollHintVisibility(bool IsUsingGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	bool Get_Item_Description(class UFortItem* Object, class FText* OutDescription, class UFortTooltipContext* TooltipContext, class FText Description, class FText CallFunc_GetDescription_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue);
	void Set_DisplayName_and_Description_Widget(class UFortItem* Item, class FText Description, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class EFortItemType CallFunc_GetType_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_BooleanOR_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_BooleanOR_ReturnValue_2, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_IsSchematic_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, class UFortTeamPerkItem* K2Node_DynamicCast_AsFort_Team_Perk_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue_5, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_6, class UFortTeamPerkItemDefinition* K2Node_DynamicCast_AsFort_Team_Perk_Item_Definition, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue_7, class UFortAbilityKit* CallFunc_GetAbilityKitBP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue_1, bool Temp_bool_Variable, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText K2Node_Select_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText K2Node_Select_Default_1, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue_1, class FText CallFunc_GetCombinedDescription_OutDescription_1, bool CallFunc_GetCombinedDescription_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3);
	void Clear_DisplayName_and_Description_Widgets(class FText CallFunc_GetEmptyText_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue_1);
	void SkipTransitionIn(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, class URewards_ItemCard_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void TickTransitionIn(int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item);
	void BindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void HandleTransitionInComplete();
	void Reset();
	void AddInputActions(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EInputActionState K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void DisableInputActions(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void EnableInputActions(enum class EInputActionState Temp_byte_Variable, bool Temp_bool_Variable, class URewards_ItemCard_C* CallFunc_Array_Get_Item, enum class EInputActionState Temp_byte_Variable_1, class UFortItem* CallFunc_GetItemToRepresent_ItemToRepresent, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class EInputActionState K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void PopulateFromCardsList(TArray<class URewards_ItemCard_C*>& Cards, int32 Temp_int_Array_Index_Variable, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleInspectAction(bool* Committed, class URewards_ItemCard_C* CallFunc_Array_Get_Item, class UFortItem* CallFunc_GetItemToRepresent_ItemToRepresent);
	void HandleScrollAction(bool* Committed);
	void HandleCollectAllAction(bool* Committed);
	void SetArrowVisibility(int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1);
	void HandleLastPopInFinished(int32 CallFunc_Array_LastIndex_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item);
	void HandleOutroAnimFinished();
	void SelectCard(int32 InNewIndex, int32 OldIndex, int32 NewIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Add_IntInt_ReturnValue_1, class URewards_ItemCard_C* CallFunc_Array_Get_Item_1, class URewards_ItemCard_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item_3, bool CallFunc_LessEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class URewards_ItemCard_C* CallFunc_Array_Get_Item_4, class URewards_ItemCard_C* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void SetCardSelected(class URewards_ItemCard_C* Card);
	void HandleCardClicked(class URewards_ItemCard_C* Card, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void ClearCards(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void PlayCardSlide(class URewards_ItemCard_C* RewardsItemCard, float StaggerDelay, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector2D& CallFunc_GetCardAlignment_Alignment, const struct FAnchors& CallFunc_GetCardAlignment_Anchors, float CallFunc_GetCardAlignment_Scale, float CallFunc_GetCardAlignment_Offset, float CallFunc_GetCardAlignment_Angle, const struct FVector2D& CallFunc_GetCardAlignment_Translation, float CallFunc_GetCardAlignment_DropShadowDepth, bool K2Node_SwitchInteger_CmpSuccess);
	void SetItemDescription(class UFortItem* Item, class FText CallFunc_Get_Item_Description_OutDescription, bool CallFunc_Get_Item_Description_ReturnValue, class URewards_ItemCard_C* CallFunc_Array_Get_Item, class UFortItem* CallFunc_GetItemToRepresent_ItemToRepresent, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetCardAlignment(class UWidget* CardWidget, int32 SelectionIndex, class UCanvasPanelSlot* CanvasPanelSlot, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class URewards_ItemCard_C* K2Node_DynamicCast_AsRewards_Item_Card, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess_1, const struct FMargin& CallFunc_GetOffsets_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const struct FVector2D& CallFunc_GetCardAlignment_Alignment, const struct FAnchors& CallFunc_GetCardAlignment_Anchors, float CallFunc_GetCardAlignment_Scale, float CallFunc_GetCardAlignment_Offset, float CallFunc_GetCardAlignment_Angle, const struct FVector2D& CallFunc_GetCardAlignment_Translation, float CallFunc_GetCardAlignment_DropShadowDepth, const struct FMargin& K2Node_MakeStruct_Margin, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
	void SelectPreviousCard(int32 CallFunc_Subtract_IntInt_ReturnValue);
	void HandleLastSlideAnimFinished(class URewards_ItemCard_C* RewardsItemCard, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void GetCardAlignment(int32 CardQueueIndex, int32 CardListIndex, struct FVector2D* Alignment, struct FAnchors* Anchors, float* Scale, float* Offset, float* Angle, struct FVector2D* Translation, float* DropShadowDepth, float CardQueueOffset, float CardWidth, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FAnchors& K2Node_MakeStruct_Anchors_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FAnchors& K2Node_MakeStruct_Anchors_2, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4);
	void SelectNextCard(int32 CallFunc_Add_IntInt_ReturnValue);
	void AddCard(class URewards_ItemCard_C* Card, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void InitDesignView(const TArray<class URewards_ItemCard_C*>& TempCardList, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URewards_ItemCard_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class URewards_ItemCard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void DelayedCheckScroll();
	void Construct();
	void TransitionInBegin();
	void TransitionOutBegin();
	void OnNavigationLeft();
	void OnNavigationRight();
	void OnActivated();
	void OnDeactivated();
	void OnPrimaryAction();
	void BndEvt__ActionWidgetScroll_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void ExecuteUbergraph_FrontEndRewards_ListRewards(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable_1, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool Temp_bool_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_Array_LastIndex_ReturnValue_1, class URewards_ItemCard_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, enum class EInputActionState K2Node_Select_Default, bool CallFunc_HandleCollectAllAction_Committed, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class URewards_ItemCard_C* CallFunc_Array_Get_Item_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool CallFunc_Greater_IntInt_ReturnValue_2, enum class EInputActionState Temp_byte_Variable_2, enum class EInputActionState Temp_byte_Variable_3, enum class EInputActionState K2Node_Select_Default_1);
};

}


