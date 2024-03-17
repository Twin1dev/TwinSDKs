#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x430 - 0x410)
// WidgetBlueprintGeneratedClass SpatialMapScreen.SpatialMapScreen_C
class USpatialMapScreen_C : public USpatialMapScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                GradientBackground;                                // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_220;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USpatialMapScreen_C* GetDefaultObj();

	void BP_OnActivated();
	void OnTabCycled(bool bCanShowCompletedCount, int32 ChallengesNum, int32 CountOfCompletedChallenges);
	void SetRewardPreviewVisibility(bool bVisible);
	void ExecuteUbergraph_SpatialMapScreen(int32 EntryPoint, bool K2Node_Event_bCanShowCompletedCount, int32 K2Node_Event_ChallengesNum, int32 K2Node_Event_CountOfCompletedChallenges, bool K2Node_Event_bVisible, class UAthenaChallengeMapRewardPreview_C* K2Node_DynamicCast_AsAthena_Challenge_Map_Reward_Preview, bool K2Node_DynamicCast_bSuccess);
};

}


