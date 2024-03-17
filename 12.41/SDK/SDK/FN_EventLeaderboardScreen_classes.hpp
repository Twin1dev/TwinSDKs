#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x3D0 - 0x350)
// WidgetBlueprintGeneratedClass EventLeaderboardScreen.EventLeaderboardScreen_C
class UEventLeaderboardScreen_C : public UFortEventLeaderboardScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEventsSimpleButton_C*                 Button_Back;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                        CloseButton;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntryDetails_C*       EntryDetails;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEventDetails_C*       EventLeaderboardEventDetails;                      // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*        DebugLeaderboardEntry1;                            // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*        DebugLeaderboardEntry2;                            // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*        DebugLeaderboardEntry3;                            // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*        DebugLeaderboardEntry4;                            // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortEventLeaderboardEntryData*> DebugLeaderboardEntries;                           // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            EventCloseButton;                                  // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            EventviewLiveGames;                                // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UEventLeaderboardScreen_C* GetDefaultObj();

	void Init(const class FString& EventWindowId, const class FString& TournamentSeriesId, class ULeaderboardTab_C* K2Node_DynamicCast_AsLeaderboard_Tab, bool K2Node_DynamicCast_bSuccess);
	void BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo);
	void EventIntro();
	void OnLeaderboardEntrySelected(class UFortEventLeaderboardEntryData* EntryData);
	void Event_Leaderboard_Screen_On_Activated();
	void Construct();
	void ShowMyStats(class UCommonButton* Button);
	void BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Item_DoubleMinusClicked(class UObject* Item);
	void ExecuteUbergraph_EventLeaderboardScreen(int32 EntryPoint, class ULeaderboardTab_C* K2Node_DynamicCast_AsLeaderboard_Tab, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_TournamentDisplayInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortEventLeaderboardEntryData* K2Node_Event_EntryData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonButton* K2Node_CustomEvent_Button, class UFortEventLeaderboardEntryData* CallFunc_GetMyLeaderboardEntry_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UListView* CallFunc_GetListView_ReturnValue, class ULeaderboardListViewWrapper_C* K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_CustomEvent_Item, class UFortEventLeaderboardEntryData* K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data, bool K2Node_DynamicCast_bSuccess_2);
	void EventViewLiveGames__DelegateSignature();
	void EventCloseButton__DelegateSignature();
};

}


