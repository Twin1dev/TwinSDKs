#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x509 - 0x4C8)
// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_BattlePassInfo.BP_Frontend_EventLevel_NavObject_BattlePassInfo_C
class ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C : public AFortNavigationActor_BattlePassInfo
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      XpValues;                                          // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  XpBar;                                             // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  RightMonitor;                                      // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LeftMonitor;                                       // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              XpBarMid;                                          // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              BPRewardsMid;                                      // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_LeftMonitor;                                   // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DeubgPurchased;                                    // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Frontend_EventLevel_NavObject_BattlePassInfo_C* GetDefaultObj();

	void SetBattlePassVisuals(bool Purchased, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UBattlePass_Door_LeftPanel_C* K2Node_DynamicCast_AsBattle_Pass_Door_Left_Panel, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2);
	void OnLoaded_5B4B515147509217750E62A2CDE15CEF(class UObject* Loaded);
	void ReceiveBeginPlay();
	void InitForBattlePassInfo(int32 CurrentLevel, int32 CurrentXp, int32 XpToLevel, class UFortItemDefinition* NextReward);
	void OnUpdateWidgetVisibility(class AFortPlayerController* PlayerController, bool bEnabled);
	void UpdateVisuals();
	void OnInitializeForPlayer();
	void ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BattlePassInfo(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, int32 K2Node_Event_CurrentLevel, int32 K2Node_Event_CurrentXp, int32 K2Node_Event_XpToLevel, class UFortItemDefinition* K2Node_Event_NextReward, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool Temp_bool_Variable, class UBattlePass_Door_XP_Progress_C* K2Node_DynamicCast_AsBattle_Pass_Door_XP_Progress, bool K2Node_DynamicCast_bSuccess, class UObject* Temp_object_Variable, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess_1, class UBattlePass_Door_LeftPanel_C* K2Node_DynamicCast_AsBattle_Pass_Door_Left_Panel, bool K2Node_DynamicCast_bSuccess_2, class AFortPlayerController* K2Node_Event_PlayerController, bool K2Node_Event_bEnabled, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_HasPurchasedSeasonBook_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


