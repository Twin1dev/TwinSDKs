#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x36F0 - 0x3630)
// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3630(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUnderwaterAudioComponent_C*           UnderwaterAudioComponent;                          // 0x3638(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       ListenerOverride;                                  // 0x3640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       VictoryRoyaleAudio;                                // 0x3648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       VictoryRoyaleMusic;                                // 0x3650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            VictoryRoyaleMenuMusicAsset;                       // 0x3658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 BladeWielderTag;                                   // 0x3660(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EFortItemType                     InteractingItemType;                               // 0x3680(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5EB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 InteractionTags;                                   // 0x3688(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            PawnPossessedDispatcher;                           // 0x36A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          PermissionsRecheckTimerHandle;                     // 0x36B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        LobbyMusicOnVictoryDelayTime;                      // 0x36C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5EB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundMix*                             CamUnderwaterSoundMix;                             // 0x36C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CamUnderwaterLoopSound;                            // 0x36D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CamUnderwaterAudio;                                // 0x36D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CamUnderwaterStartSound;                           // 0x36E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CamUnderwaterStopSound;                            // 0x36E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAthena_PlayerController_C* GetDefaultObj();

	bool Is_Creative_Mode(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCreativeModePlaylist_ReturnValue, bool CallFunc_IsCreativeLTMPlaylist_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetupPermissionRecheckTimer();
	void LeftAllVolumes(bool* bLeftVolumes, bool InTempVolume, const TArray<class AFortVolume*>& ContainingVolumes, int32 Temp_int_Array_Index_Variable, class AFortVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool CallFunc_IsDead_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_WillVolumeDeleteAfterActorSpawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AFortVolume*>& CallFunc_GetVolumesForLocation_Volumes, bool CallFunc_GetVolumesForLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript(class UAthenaMarkerComponent* CallFunc_GetMarkerComponent_ReturnValue);
	void OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(class UObject* Loaded);
	void OnReady_B4409EAB4038578B1EBA9DB1586489B9(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void Start_Victory_Royale_Music();
	void OnMusicPackLoaded(class UAthenaMusicPackItemDefinition* NewMusicPack);
	void GrantItem(TSoftObjectPtr<class UFortWorldItemDefinition> Item);
	void RevokeItem(TSoftObjectPtr<class UFortWorldItemDefinition> Item);
	void OnLocalInteraction(class AActor* ReceivingActor);
	void RemoveItem();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReactToPawnPossession(class APawn* PossessedPawn);
	void ReplicateRotationScaleReset();
	void PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, enum class EDeathCause DeathCause, bool bAudioOnly);
	void K2_OnLeaveVolume(class AFortVolume* Volume);
	void K2_OnEnterVolume(class AFortVolume* Volume);
	void Handle_Victory_Royale_Audio(bool Audio_Only);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Athena_PlayerController(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class AFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class USoundCue* CallFunc_GetVictoryStinger_ReturnValue, class UFortMusicContext* CallFunc_GetContext_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_2, float CallFunc_VictoryStingerTimeUntilFadeOut_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_NewMusicPack, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsCreativeModePlaylist_ReturnValue, bool CallFunc_LeftAllVolumes_bLeftVolumes, TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item_1, TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess_2, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, class AActor* K2Node_Event_ReceivingActor, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APawn* K2Node_CustomEvent_PossessedPawn, bool CallFunc_IsValid_ReturnValue_3, class APawn* K2Node_Event_FinisherPawn, class UFortWeaponItemDefinition* K2Node_Event_FinishingWeapon, enum class EDeathCause K2Node_Event_DeathCause, bool K2Node_Event_bAudioOnly, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UClass* CallFunc_GetWeaponActorClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UClass* K2Node_ClassDynamicCast_AsFort_Weapon_Ranged_Dual, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsB_Ranged_Generic, bool K2Node_ClassDynamicCast_bSuccess_1, class AFortVolume* K2Node_Event_Volume_1, bool CallFunc_BooleanOR_ReturnValue_1, class AFortVolume* K2Node_Event_Volume, bool K2Node_CustomEvent_Audio_Only, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_2, bool CallFunc_Is_Creative_Mode_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UObject* Temp_object_Variable_2, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition_2, bool K2Node_DynamicCast_bSuccess_6, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_Is_Creative_Mode_ReturnValue_1, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void PawnPossessedDispatcher__DelegateSignature(class APawn* PossessedPawn);
};

}


