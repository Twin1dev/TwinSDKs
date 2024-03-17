#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x23E (0xB82 - 0x944)
// BlueprintGeneratedClass IntelCarryObject.IntelCarryObject_C
class AIntelCarryObject_C : public ABGA_HeldObject_Parent_C
{
public:
	uint8                                        Pad_549D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x948(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Beam;                                              // 0x950(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_CapturePoint_CaseGlow;                          // 0x958(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CapsuleInteract;                                   // 0x960(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortWidgetComponent*                  Fort_UI_InteractionPoint;                          // 0x968(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInfiltrationStatusComponent*          InfiltrationStatus;                                // 0x970(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInfiltrationCarryObjectComponent*     InfiltrationCarryObjectComp;                       // 0x978(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x980(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        UIShowDistance;                                    // 0x988(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UIDetailDistance;                                  // 0x98C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UICheck_Timer;                                     // 0x990(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLocalPlayerAttacker;                             // 0x998(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_549E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHUD_InteractionPoint_C*               InteractionWidget;                                 // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CapturingPawn;                                     // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           LocalPlayer;                                       // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       LocalPawn;                                         // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           WarningIcon_Enemy;                                 // 0x9C0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           WarningIcon_Friendly;                              // 0xA48(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           DistantIcon;                                       // 0xAD0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 HasIntelTag;                                       // 0xB58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          GroundTimerHandle;                                 // 0xB78(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPickedUp;                                        // 0xB80(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         IsPlaced;                                          // 0xB81(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class AIntelCarryObject_C* GetDefaultObj();

	void OnRep_IsPlaced(bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	void OnRep_IsPickedUp(bool CallFunc_HasAuthority_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue);
	void Set_UIVisibility(float PlayerDistance, class UWidgetComponent* UITarget, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool Temp_bool_Variable_1, class UHUD_InteractionPoint_C* K2Node_DynamicCast_AsHUD_Interaction_Point, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_2, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool K2Node_Select_Default);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class ETInteractionType InteractionType, bool CallFunc_BlueprintCanInteract_ReturnValue, uint8 CallFunc_GetAttackingTeam_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_0_OnHeldObjectPickedUp__DelegateSignature();
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_1_OnHeldObjectDropped__DelegateSignature();
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectPlaced__DelegateSignature();
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_3_OnHeldObjectThrown__DelegateSignature();
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_4_OnHeldObjectDestroy__DelegateSignature();
	void CheckShouldDisplayUI();
	void ReceiveBeginPlay();
	void InitializeUI();
	void EventGetLocalPlayerTeam();
	void IntelStateChanged(enum class EIntelStateEnum CurrentState);
	void EventStartDropTimer(float NewTimeRemaining);
	void EventSetupUI();
	void GetTimeRemaining();
	void InteractionPointClamped(bool bIsClamped);
	void ReceiveDestroyed();
	void ExecuteUbergraph_IntelCarryObject(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_IsClosed_Variable, class FText Temp_text_Variable_2, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, class FText Temp_text_Variable_3, bool CallFunc_HasAuthority_ReturnValue_3, class AFortPlayerPawn* CallFunc_GetInstigator_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue, class FText Temp_text_Variable_4, class AFortPlayerPawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, class FText Temp_text_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool Temp_bool_Variable_4, class FText Temp_text_Variable_6, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EIntelStateEnum K2Node_CustomEvent_CurrentState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, bool Temp_bool_Variable_5, class FText K2Node_Select_Default, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1, class UHUD_InteractionPoint_C* K2Node_DynamicCast_AsHUD_Interaction_Point, bool K2Node_DynamicCast_bSuccess_2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_3, class UHUD_InteractionPoint_C* K2Node_DynamicCast_AsHUD_Interaction_Point_1, bool K2Node_DynamicCast_bSuccess_4, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, float K2Node_CustomEvent_NewTimeRemaining, bool CallFunc_IsValid_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_5, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_DistanceBetweenTwoVectors_Distance, float CallFunc_GetGroundTimeRemaining_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText K2Node_Select_Default_1, bool Temp_bool_Variable_6, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_2, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, const struct FSlateBrush& K2Node_Select_Default_3, class FText Temp_text_Variable_13, const struct FSlateBrush& K2Node_Select_Default_4, class FText Temp_text_Variable_14, enum class EIntelStateEnum Temp_byte_Variable, bool Temp_bool_Variable_7, bool CallFunc_IsBeingHeldByLocalPlayer_ReturnValue, class FText K2Node_Select_Default_5, class FText K2Node_Select_Default_6, class FText K2Node_Select_Default_7, bool K2Node_CustomEvent_bIsClamped, class FText K2Node_Select_Default_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Has_Been_Initd_Variable);
};

}


