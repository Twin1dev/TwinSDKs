#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xFF (0xB68 - 0xA69)
// BlueprintGeneratedClass Athena_Player_CoolCarpet.Athena_Player_CoolCarpet_C
class AAthena_Player_CoolCarpet_C : public AAthena_Player_SneakySnowmanV2_C
{
public:
	uint8                                        Pad_1ED6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_ShadowInsert;                                   // 0xA78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_CoolCarpet_Flap1;                               // 0xA80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_CoolCarpet_Flap2;                               // 0xA88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ShrinkBox_Rotation_B702562648A4C4CB590675BD0D3E005C; // 0xA90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShrinkBox_Shrinkage_B702562648A4C4CB590675BD0D3E005C; // 0xA94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ShrinkBox__Direction_B702562648A4C4CB590675BD0D3E005C; // 0xA98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ED7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ShrinkBox;                                         // 0xAA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Grow_Box_Growth_53FD69EF4E6B5DECD0D74DBB0BDDAA26;  // 0xAA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Grow_Box__Direction_53FD69EF4E6B5DECD0D74DBB0BDDAA26; // 0xAAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ED9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Grow_Box;                                          // 0xAB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_Rotation_A659A2B4463C7B7008A67988DEB011BE; // 0xAB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_A659A2B4463C7B7008A67988DEB011BE; // 0xABC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0xAC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlreadyJumpedOut;                                  // 0xAC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EDB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAthena_Fake_CoolCarpet_C*             CastedFakeActor;                                   // 0xAD0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MovementEventsBound;                               // 0xAD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            OnFootstepSound;                                   // 0xAE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OnLandedSound;                                     // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OnJumpedSound;                                     // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HolsterId;                                         // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MatInt;                                            // 0xB00(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        PopOutOnWindUp;                                    // 0xB08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        AllowPopOut;                                       // 0xB28(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Swimming_0;                                        // 0xB48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EPopOutStates                     PopState;                                          // 0xB49(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FlapsClosed;                                       // 0xB4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EE1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          WindUpEndTimer;                                    // 0xB50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PoppedFromWindUp;                                  // 0xB58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DidWindUp;                                         // 0xB59(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PoppedFromStand;                                   // 0xB5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Firing;                                            // 0xB5B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FirePressed;                                       // 0xB5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          StopFiringTimer;                                   // 0xB60(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAthena_Player_CoolCarpet_C* GetDefaultObj();

	void OnRep_PopState(bool CallFunc_IsLocallyControlled_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue);
	void OnRep_MatInt(int32 Temp_int_Variable, class UMaterial* Temp_object_Variable, class UMaterial* Temp_object_Variable_1, class UMaterial* Temp_object_Variable_2, class UMaterial* K2Node_Select_Default);
	void GetMaterialInt(int32* MatInt);
	void OnPlayerMovementModeChanged(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnPlayerLanded(struct FHitResult& Hit, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void OnPlayerFootstep(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void OnEndedMaintaining();
	void OnStartedMaintaining(int32 Temp_int_Variable, class UMaterial* Temp_object_Variable, class UMaterial* Temp_object_Variable_1, class UMaterial* Temp_object_Variable_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UMaterial* K2Node_Select_Default);
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ShrinkBox__FinishedFunc();
	void ShrinkBox__UpdateFunc();
	void Grow_Box__FinishedFunc();
	void Grow_Box__UpdateFunc();
	void ReceiveBeginPlay();
	void OpenFlaps();
	void CloseFlaps();
	void ADS_Client(bool AimDownsights);
	void CustomEvent(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void JumpedOut();
	void OnGaveSneakySnowman();
	void Set_Flaps_Visible_Multicast();
	void JustAttached();
	void Wobble(float Strength, bool MoveUpAndDown);
	void Bind_to_Movement_Events();
	void Unbind_from_Movement_Events();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void SetMatInt(class AActor* Prop);
	void SetPopState_Server(enum class EPopOutStates PopState);
	void OnPopStateChanged(enum class EPopOutStates PopState);
	void ChangePopState(enum class EPopOutStates PopState);
	void Server_BlockPopOut();
	void WeaponChangeClient();
	void OnWeaponChange();
	void MovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void OwningClient_ADS();
	void Cleanup(class AActor* DestroyedActor);
	void SetPopState_Multicast(enum class EPopOutStates PopState);
	void OpenFlaps_Multicast();
	void FirePressed_Client(class AFortWeapon* Weapon);
	void FireReleased_Client(class AFortWeapon* Weapon);
	void StopFiring();
	void ExecuteUbergraph_Athena_Player_CoolCarpet(int32 EntryPoint, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_GetIsTargeting_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_GetIsTargeting_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, bool CallFunc_K2_SetActorRotation_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, bool CallFunc_K2_SetActorRotation_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_5, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2, bool CallFunc_HasMatchingGameplayTag_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, class ACharacter* CallFunc_GetCharacterOwner_ReturnValue, bool CallFunc_RowToBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool K2Node_CustomEvent_AimDownSights, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AFortWeapon* K2Node_CustomEvent_NewWeapon, class AFortWeapon* K2Node_CustomEvent_PrevWeapon, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetPlaybackPosition_ReturnValue, float K2Node_Event_Strength, bool K2Node_Event_MoveUpAndDown, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AAthena_Fake_CoolCarpet_C* K2Node_DynamicCast_AsAthena_Fake_Cool_Carpet, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_Prop, class AAthena_Prop_CoolCarpet_C* K2Node_DynamicCast_AsAthena_Prop_Cool_Carpet, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class EPopOutStates K2Node_CustomEvent_PopState_3, enum class EPopOutStates K2Node_CustomEvent_PopState_2, bool K2Node_SwitchEnum_CmpSuccess, enum class EPopOutStates K2Node_CustomEvent_PopState_1, bool CallFunc_IsLocallyControlled_ReturnValue_3, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetCrouchedLoc_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, class ACharacter* CallFunc_GetCharacterOwner_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_IsWeaponHolstered_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_Not_PreBool_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_3, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_6, float K2Node_Event_DeltaSeconds, const struct FVector& K2Node_Event_OldLocation, const struct FVector& K2Node_Event_OldVelocity, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_3, bool CallFunc_HasMatchingGameplayTag_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_RowToBool_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_4, class AActor* K2Node_CustomEvent_DestroyedActor, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_4, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_2, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_3, enum class EPopOutStates K2Node_CustomEvent_PopState, bool CallFunc_HasAuthority_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_GetCrouchedLoc_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_4, bool CallFunc_HasMatchingGameplayTag_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_6, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_5, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_7, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_3, class AFortWeapon* K2Node_CustomEvent_Weapon_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class AFortWeapon* K2Node_CustomEvent_Weapon, const struct FVector& CallFunc_MakeVector_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, float CallFunc_Multiply_FloatFloat_ReturnValue_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_6, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_9);
};

}


