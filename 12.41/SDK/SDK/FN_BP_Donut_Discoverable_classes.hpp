#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBA (0x58A - 0x4D0)
// BlueprintGeneratedClass BP_Donut_Discoverable.BP_Donut_Discoverable_C
class ABP_Donut_Discoverable_C : public ABP_Frontend_EventLevel_NavObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  CISFixMesh;                                        // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        InteractCooldown;                                  // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_Donut_Discoverable_C*>      OtherDiscoverablesToNotify;                        // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FDataTableRowHandle                   QuestStatRow;                                      // 0x500(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	class UFortQuestItemDefinition*              QuestRequiredForVisibility;                        // 0x510(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  QuestBackendName;                                  // 0x518(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideAfterObjectiveComplete;                        // 0x520(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundToPlayOnQuestCredit;                          // 0x528(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       SuccessEmitter;                                    // 0x530(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInteractAllowed;                                 // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsNavAllowed;                                      // 0x539(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CF1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Interacted_CameraTag;                              // 0x53C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Interacted_ActionTag;                              // 0x544(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 PlayerController;                                  // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     QuestManager;                                      // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UUserWidget>             DetailsWidgetClass;                                // 0x560(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash)
	bool                                         SuppressInteractAfterObjectiveComplete;            // 0x588(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         InteractionSuppressed;                             // 0x589(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Donut_Discoverable_C* GetDefaultObj();

	bool CanCommitNavigationRequest();
	void OnFailure_AB29FEEF4A9F4CD168E2D5879757C696();
	void OnIgnored_AB29FEEF4A9F4CD168E2D5879757C696();
	void OnSuccess_AB29FEEF4A9F4CD168E2D5879757C696();
	void OnComplete_AEFB9D694F5A3C235235769245C02722(class UUserWidget* UserWidget);
	void HandleObjectSpecialInteraction(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag);
	void ResetCooldown();
	void NotifiedByDiscoverable(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag, bool bIsStart);
	void Commit_OnSpecialInteraction();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Donut_Discoverable(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUserWidget* K2Node_CustomEvent_UserWidget, class UUserWidget* Temp_object_Variable, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, const struct FGameplayTag& K2Node_CustomEvent_ActionTag, const struct FGameplayTag& K2Node_CustomEvent_CameraTag, bool K2Node_CustomEvent_bIsStart, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class ABP_Donut_Discoverable_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_FloatFloat_ReturnValue, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item_1, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


