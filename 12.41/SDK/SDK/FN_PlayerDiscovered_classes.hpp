#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x368 - 0x2F0)
// WidgetBlueprintGeneratedClass PlayerDiscovered.PlayerDiscovered_C
class UPlayerDiscovered_C : public UAthenaDiscoveredAreaOverlay
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BriefShow;                                         // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_LandmarkName;                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BulletLeft;                                  // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BulletRight;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainBox;                                           // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainBox_Landmark;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MainLocationText;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MainLocationText_1;                                // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Container;                                 // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_LandmarkOrPOI;                      // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGameplayTagContainer                 RelevantPlaylistTags;                              // 0x348(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UPlayerDiscovered_C* GetDefaultObj();

	void EndOfShow();
	void OnReady_B498D6844B33E66A7C160F972A87F88A(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void OnNewDiscovery(class FText& LocalizedLocationName, bool bIsNamedLocation);
	void Construct();
	void Brief_Show_Finished();
	void OnStompFailed();
	void OnStompedByOtherWidget();
	void Play_Brief_Show_Sound();
	void ExecuteUbergraph_PlayerDiscovered(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class AFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetAthenaPlaylistContextTags_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, class FText K2Node_Event_LocalizedLocationName, bool K2Node_Event_bIsNamedLocation, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool Temp_bool_Variable, int32 K2Node_Select_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
};

}


