#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x260 - 0x230)
// BlueprintGeneratedClass Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C
class AFrontend_BP12_Room_M_Scripting_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortQuestManager*                     QuestManager;                                      // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ObjectiveStatRow;                                  // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	class APeelyBP12Mannequin_C*                 PeelyBP12Mannequin2_0_ExecuteUbergraph_Frontend_BP12_Room_M_Scripting_RefProperty; // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Frontend_IntertiveCatToy_C*        BP_Frontend_IntertiveCatToy_2_ExecuteUbergraph_Frontend_BP12_Room_M_Scripting_RefProperty; // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFrontend_BP12_Room_M_Scripting_C* GetDefaultObj();

	void OnFailure_43ED484A4E514CB6169D83955324F3DF();
	void OnIgnored_43ED484A4E514CB6169D83955324F3DF();
	void OnSuccess_43ED484A4E514CB6169D83955324F3DF();
	void ReceiveBeginPlay();
	void MakePeelyPeak();
	void ExecuteUbergraph_Frontend_BP12_Room_M_Scripting(int32 EntryPoint, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


