#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x348 - 0x338)
// BlueprintGeneratedClass GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C
class AGCN_QuestSpawn_MiniMapIcon_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortMiniMapComponent*                 MiniMapCrosshair;                                  // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGCN_QuestSpawn_MiniMapIcon_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void HideMiniBossGCN();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon(int32 EntryPoint);
};

}


