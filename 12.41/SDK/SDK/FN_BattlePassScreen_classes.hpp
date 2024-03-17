#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x124 (0xADC - 0x9B8)
// WidgetBlueprintGeneratedClass BattlePassScreen.BattlePassScreen_C
class UBattlePassScreen_C : public UBattlePassScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowVariantLabel;                                  // 0x9C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideRightSideActionButtons_2;                      // 0x9C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RevealRightSideActionButtons;                      // 0x9D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SeasonInformation;                                 // 0x9D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RightFriendCountCollapse;                          // 0x9E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      LeftFriendCountCollapse;                           // 0x9E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnViewReward;                                      // 0x9F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              AdditionalStyles;                                  // 0x9F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             BackButton_SZ;                                     // 0xA00(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattlePassScreen_SideMessaging_NewTech_C* BattlePassScreen_SideMessaging_NewTech;            // 0xA08(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              DetailsContainer;                                  // 0xA10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        EndingDate;                                        // 0xA18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FakeHackGradient;                                  // 0xA20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ItemDescriptionSizeBox;                            // 0xA28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             ItemDetails_SZ;                                    // 0xA30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ItemDetailsContainer;                              // 0xA38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ItemSetSizeBox;                                    // 0xA40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OwnsBattlePassContainer;                           // 0xA48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ScreenNoise;                                       // 0xA50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SeasonDetails_SZ;                                  // 0xA58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SeasonDetailsContainer;                            // 0xA60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SetItems_SZ;                                       // 0xA68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher_Rewards;                                  // 0xA70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SZDisclaimers;                                     // 0xA78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_ChapterNumber_1;                              // 0xA80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_ChapterNumber_2;                              // 0xA88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              TrackViewContainer;                                // 0xA90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         VariantLabel;                                      // 0xA98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      VariantUnlockPreviewSet;                           // 0xAA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bOwnsBattlePass;                                   // 0xAA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_69C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActivatableMovieWidget_C*             ActivatableMovieWidget;                            // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStreamMediaSource*                ElectraMediaSource;                                // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          StreamedVideoOpeningTimer;                         // 0xAC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                          StreamedMediaPlayer;                               // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          StreamedVideoPlayingTimer;                         // 0xAD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bAnimateRewardTimeline;                            // 0xAD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RightSideActionsHidden;                            // 0xAD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AutoPlayVideo;                                     // 0xADA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ForceAutoPlayVideo;                                // 0xADB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBattlePassScreen_C* GetDefaultObj();

	void RevealRightSideActions(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HideRightSideActions(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HandleShowVariantCycleLabel(bool bShowCycleLabel, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void HandleOffscreenIndicatorAnimations(int32 LeftFriendCount, int32 RightFriendCount, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
	void HandleRewardTimelineAnimation(bool bAnimateRewardTimeline, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HandleWatchVideoRequest(bool PlayFromDisc, bool CallFunc_Not_PreBool_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FVideoConfig_Mono& K2Node_MakeStruct_VideoConfig_Mono, class UActivatableMovieWidget_Monolithic_Native_C* CallFunc_Create_ReturnValue, bool CallFunc_LoadStreamingVideo_bNoAutoPlay);
	void HandleViewReward(bool bInNoReward, int32 InNumRewardsToPurchase, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class USimpleFeatured_YellowButton_C* K2Node_DynamicCast_AsSimple_Featured_Yellow_Button, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void HandleOnViewReward(const struct FFortRarityItemData& Rarity, bool bNoReward, int32 NumRewardsToPurchase, class UFortItemDefinition* RewardItem);
	void OnSetupPurchaseSeasonLevel(TMap<int32, class UFortSeasonPassLevelInfo*>& SeasonLevelInfos, class UAthenaSeasonItemDefinition* CurrentSeasonData, class UFortSeasonPassLevelInfo* CurrentLevel, int32 MaxLevelToPurchase, int32 LevelToBePurchased);
	void HandleOnUpdatedVisibleFriendCount(int32 LeftFriendCount, int32 RightFriendCount);
	void OnHandleReplayCinematic();
	void OnHandleAboutBattlePass();
	void OnHandleWatchVideo();
	void BP_OnActivated();
	void OnHandleViewAllRewards();
	void OnRequestViewReward();
	void OnRequestViewRewardComplete();
	void OnVariantUpdate(int32 CurrentIndex, int32 TotalNumVariants);
	void OnBattlePassViewChanged(enum class EBattlePassView NewView);
	void Construct();
	void HandleOnInputMethodChanged(enum class ECommonInputType bNewInputType);
	void Destruct();
	void OnSetDifferentBPText();
	void ExecuteUbergraph_BattlePassScreen(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FFortRarityItemData& K2Node_Event_Rarity, bool K2Node_Event_bNoReward, int32 K2Node_Event_NumRewardsToPurchase, class UFortItemDefinition* K2Node_Event_RewardItem, TMap<int32, class UFortSeasonPassLevelInfo*> K2Node_Event_SeasonLevelInfos, class UAthenaSeasonItemDefinition* K2Node_Event_CurrentSeasonData, class UFortSeasonPassLevelInfo* K2Node_Event_CurrentLevel, int32 K2Node_Event_MaxLevelToPurchase, int32 K2Node_Event_LevelToBePurchased, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 K2Node_Event_LeftFriendCount, int32 K2Node_Event_RightFriendCount, class UAthenaSeasonLevelConfirmationScreen_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UAthenaSeasonAboutWidget_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UBattlePassViewRewardsScreen_C* CallFunc_Create_ReturnValue_2, int32 K2Node_Event_CurrentIndex, int32 K2Node_Event_TotalNumVariants, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EBattlePassView K2Node_Event_NewView, bool K2Node_SwitchEnum_CmpSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, TArray<class AVaultWorld_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class AFrontendCamera_VaultRotator_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AVaultWorld_C* CallFunc_Array_Get_Item, class AFrontendCamera_VaultRotator_C* CallFunc_Array_Get_Item_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable_1, bool CallFunc_ShouldPlayBPVideo_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const class FString& CallFunc_GetBattlePassPurchaseLevelOfferId_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_Select_Default_1, const struct FMargin& K2Node_MakeStruct_Margin, class USimpleFeatured_YellowButton_C* K2Node_DynamicCast_AsSimple_Featured_Yellow_Button, bool K2Node_DynamicCast_bSuccess);
};

}


