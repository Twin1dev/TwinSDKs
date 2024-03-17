#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0xAA0 - 0x940)
// BlueprintGeneratedClass GA_Athena_Balloons_Consumable_Passive.GA_Athena_Balloons_Consumable_Passive_C
class UGA_Athena_Balloons_Consumable_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagRequirements              EmoteTags;                                         // 0x950(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          CleanupTag;                                        // 0x990(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DBNOTag;                                           // 0x998(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          BoogieBombedTag;                                   // 0x9A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                PlayerPawnMesh;                                    // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABuildingGameplayActor*>        Balloons;                                          // 0x9B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        CurrentBalloonsInUse;                              // 0x9C0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                        BalloonsNeededForFlight;                           // 0x9C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BalloonStencilRandom;                              // 0x9C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BalloonToSpawn;                                    // 0x9CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RotationOffset;                                    // 0x9D0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              RotationOffset_0;                                  // 0x9DC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              RotationOffset_1;                                  // 0x9E8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              RotationOffset_2;                                  // 0x9F4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<int32>                                IntArray;                                          // 0xA00(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        BalloonColorRandom;                                // 0xA10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BackAttachSocket;                                  // 0xA14(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6839[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Baloon_FloatingLoop_SoundComp;                     // 0xA20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomMovement               FortCustomMovementMode_Ballooning;                 // 0xA28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_683A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Balloon_MaxAltitude_Sound;                         // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PopAtMaxHeightTimer;                               // 0xA38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_683B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PopAtMaxHeightFunctionName;                        // 0xA40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  RopeAttachSocketForBalloons;                       // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          BladeWielderTag;                                   // 0xA58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomMovement               FortCustomMovementMode_Ziplining;                  // 0xA60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_683C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BodyAttachSocketForBalloons;                       // 0xA64(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_683D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_BalloonFloat;                                   // 0xA70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BalloonPopTimer;                                   // 0xA78(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BalloonPopVehicleTimer;                            // 0xA80(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ZeroBalloonTimer;                                  // 0xA88(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_QuestCheck;                                     // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           QuestCheck_GE;                                     // 0xA98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_Balloons_Consumable_Passive_C* GetDefaultObj();

	void OnRep_CurrentBalloonsInUse(class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsZiplining_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsInVehicle_ReturnValue_1, bool CallFunc_IsFlying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_IsWalking_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_IsInVehicle_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Added_E961FDE641005079946282AB5DED997B();
	void EventReceived_684C809A405BA666E6F4DCBBFAAC0C06(const struct FGameplayEventData& Payload);
	void Added_84041178429377C08A0089A347587D99();
	void EventReceived_999DFDD44F82168D93090C90BD083650(const struct FGameplayEventData& Payload);
	void EventReceived_133EAF3446D2EDB5A82D2FB0A6CB119A(const struct FGameplayEventData& Payload);
	void Added_B2E9B3DD40D3030992327A81C6119B2F();
	void EventReceived_FC86BDF64A79027ED9EB28AEB1962691(const struct FGameplayEventData& Payload);
	void Added_5E41CD6D44EFB1735F87A3960B3E3BC6();
	void K2_ActivateAbility();
	void ReleaseBalloon(bool ReleaseAll);
	void SpawnBalloon();
	void ReOrderBalloons();
	void BallooningMovementModeSwitch();
	void BalloonShot(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ReleaseAllBalloons();
	void EnteredVehicle(int32 SeatIndex);
	void MovementModeChangeFloat(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void AtMaxHeight(int32 RelationToCeiling);
	void PopAtMaxHeight();
	void K2_OnEndAbility(bool bWasCancelled);
	void StartedDrivingVehicle();
	void ZeroBalloonCheck();
	void Remove_QuestCheck_GE();
	void ExecuteUbergraph_GA_Athena_Balloons_Consumable_Passive(int32 EntryPoint, const struct FGameplayEventData& K2Node_CustomEvent_Payload, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayEventData& Temp_struct_Variable_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_ReleaseAll, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_LastIndex_ReturnValue, class ABuildingGameplayActor* CallFunc_Array_Get_Item, class ABGA_Athena_Balloons_C* K2Node_DynamicCast_AsBGA_Athena_Balloons, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload_3, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, const struct FGameplayEventData& Temp_struct_Variable_2, int32 CallFunc_Array_Length_ReturnValue_3, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_6, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABGA_Athena_Balloons_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, bool CallFunc_IsValid_ReturnValue_7, class ABuildingGameplayActor* K2Node_DynamicCast_AsBuilding_Gameplay_Actor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_OnSameTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_9, class AController* CallFunc_GetController_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, int32 K2Node_CustomEvent_SeatIndex, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayEventData& Temp_struct_Variable_3, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABuildingGameplayActor* CallFunc_Array_Get_Item_2, bool CallFunc_Greater_IntInt_ReturnValue, class ABGA_Athena_Balloons_C* K2Node_DynamicCast_AsBGA_Athena_Balloons_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, int32 K2Node_CustomEvent_RelationToCeiling, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, class ABuildingGameplayActor* CallFunc_Array_Get_Item_3, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_Array_RemoveItem_ReturnValue_2, class ABGA_Athena_Balloons_C* K2Node_DynamicCast_AsBGA_Athena_Balloons_2, bool K2Node_DynamicCast_bSuccess_6, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue_12, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABGA_Balloons_Consumable_Rope_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FGameplayEventData& K2Node_CustomEvent_Payload_2, bool CallFunc_IsServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsServer_ReturnValue_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_3, int32 CallFunc_GetNumActiveBalloons_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_13, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, class ABGA_Balloons_Consumable_Rope_C* K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope, bool K2Node_DynamicCast_bSuccess_7, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, bool CallFunc_IsInVehicle_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue_15, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue_16, class AFortAthenaFerretVehicle* K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle, bool K2Node_DynamicCast_bSuccess_8, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class AFortOctopusVehicle* K2Node_DynamicCast_AsFort_Octopus_Vehicle, bool K2Node_DynamicCast_bSuccess_9, class AFortAthenaSKPushCannon* K2Node_DynamicCast_AsFort_Athena_SKPush_Cannon, bool K2Node_DynamicCast_bSuccess_10, int32 Temp_int_Array_Index_Variable_1, class ABuildingGameplayActor* CallFunc_Array_Get_Item_4, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, class ABGA_Athena_Balloons_C* K2Node_DynamicCast_AsBGA_Athena_Balloons_3, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_IsValid_ReturnValue_17, class ABGA_Balloons_Consumable_Rope_C* K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_1, bool K2Node_DynamicCast_bSuccess_12, class ABGA_Balloons_Consumable_Rope_C* K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_2, bool K2Node_DynamicCast_bSuccess_13, class ABGA_Balloons_Consumable_Rope_C* K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_3, bool K2Node_DynamicCast_bSuccess_14, class ABGA_Balloons_Consumable_Rope_C* K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_4, bool K2Node_DynamicCast_bSuccess_15, class ABGA_Balloons_Consumable_Rope_C* K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_5, bool K2Node_DynamicCast_bSuccess_16, class ABGA_Balloons_Consumable_Rope_C* K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_6, bool K2Node_DynamicCast_bSuccess_17, class ABGA_Balloons_Consumable_Rope_C* K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_7, bool K2Node_DynamicCast_bSuccess_18, class ABGA_Balloons_Consumable_Rope_C* K2Node_DynamicCast_AsBGA_Balloons_Consumable_Rope_8, bool K2Node_DynamicCast_bSuccess_19, bool CallFunc_Greater_IntInt_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
};

}


