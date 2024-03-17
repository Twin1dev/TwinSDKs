#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x2B0 - 0x218)
// BlueprintGeneratedClass BPS12_Elevator_Outerdoor_Indicator.BPS12_Elevator_Outerdoor_Indicator_C
class ABPS12_Elevator_Outerdoor_Indicator_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  ElevatorMinusFloorEntryMinus4;                     // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ElevatorMinusFloorEntryMinus3;                     // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ElevatorMinusFloorEntryMinus2;                     // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ElevatorMinusFloorEntryMinus1;                     // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ElevatorMinusFloorEntryMinus0;                     // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  StateMinusColorArray;                              // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        SlotMinus0MinusState;                              // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SlotMinus1MinusState;                              // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SlotMinus2MinusState;                              // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SlotMinus3MinusState;                              // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SlotMinus4MinusState;                              // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_715F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MIDMinusSlot0;                                     // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MIDMinusSlot1;                                     // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MIDMinusSlot2;                                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MIDMinusSlot3;                                     // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MIDMinusSlot4;                                     // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSpatialNavigationHenchmenData*  HenchmenData;                                      // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 RoomOwner;                                         // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPS12_Elevator_Outerdoor_Indicator_C* GetDefaultObj();

	void Set_Henchmen_State(const struct FHenchmenData& HenchmenData, class AFortPlayerController* Owner, int32* State, class UFortQuestItem* AlterQuest, class UFortQuestItem* EgoQuest, class UFortQuestItem* A_B_Quest, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, bool CallFunc_GetItemDefinitionOwnershipState_bIsOwned, bool CallFunc_GetItemDefinitionOwnershipState_ReturnValue, bool CallFunc_HasRecordedStat_ReturnValue, bool CallFunc_IsQuestInProgress_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsQuestInProgress_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue_1, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue_2);
	void SetEntryMinus4(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_Select_Default);
	void SetEntryMinus3(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_Select_Default);
	void SetEntryMinus2(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_Select_Default);
	void SetEntryMinus1(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_Select_Default);
	void SetEntryMinus0(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_Select_Default);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4);
	void ReceiveBeginPlay();
	void RoomOwnerChanged(class AFortPlayerController* OwningPlayer);
	void CameraChanged(const struct FGameplayTag& CameraTag);
	void ExecuteUbergraph_BPS12_Elevator_Outerdoor_Indicator(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool K2Node_SwitchInteger_CmpSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UGSC_C2S2_BattlePass_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UGSC_C2S2_BattlePass_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AFortPlayerController* K2Node_CustomEvent_OwningPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_CameraTag, const struct FHenchmenData& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, int32 CallFunc_Set_Henchmen_State_State, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


