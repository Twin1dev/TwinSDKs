#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x3A8 - 0x340)
// WidgetBlueprintGeneratedClass SpatialFrontend.SpatialFrontend_C
class USpatialFrontend_C : public UAthenaSpatialFrontend
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPS12ElevatorPanel_C*                 BPS12ElevatorPanel;                                // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDonutChallengeScreen_C*               DonutChallengeScreen;                              // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialBattlePass_C*                  SpatialBattlePass;                                 // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialBattlePassExplore_C*           SpatialBattlePassExplore;                          // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialCustomizationMain_C*           SpatialCustomizationMain;                          // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialCustomizationRoomScreen_C*     SpatialCustomizationRoom;                          // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialDailyScreen_C*                 SpatialDailyScreen;                                // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialDonutScreen_C*                 SpatialDonutScreen;                                // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialFactionScreen_C*               SpatialFactionScreen;                              // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialHenchmanFactionSelection_C*    SpatialHenchmanFactionSelection;                   // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialMainRoomScreen_C*              SpatialMainRoomScreen;                             // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpatialMapScreen_C*                   SpatialMapScreen;                                  // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USpatialFrontend_C* GetDefaultObj();

	void BP_OnActivated();
	void OnEventLevelTransitionComplete(struct FGameplayTag& ActiveCamera);
	void OnEventLevelTransitionBegin(struct FGameplayTag& TargetCamera, class AFortEventLevelNavigationActor* TargetNavActor);
	void BP_OnDeactivated();
	void ExecuteUbergraph_SpatialFrontend(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_ActiveCamera, const struct FGameplayTag& K2Node_Event_TargetCamera, class AFortEventLevelNavigationActor* K2Node_Event_TargetNavActor, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortEventLevelNavigationDisplayDetails& CallFunc_GetDisplayDetails_ReturnValue, class UBPS12MainRoomPOITag_C* K2Node_DynamicCast_AsBPS12Main_Room_POITag, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Len_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


