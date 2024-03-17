#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x184 (0x4AC - 0x328)
// BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C
class AMinigameSettingsMachine_C : public AFortMinigameSettingsBuilding
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        GameModeIndex;                                     // 0x338(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                        TimeLimit;                                         // 0x33C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMinigamePlayerSpawnLocationSetting SpawnLocationSetting;                              // 0x340(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumTeams;                                          // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	enum class EFortMinigamePostGameSpawnLocationSetting PostGameSpawnLocationSetting;                      // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CD4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayerLives;                                       // 0x34C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AutoEndTeamThreshold;                              // 0x350(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TeamToMoveToWhenOutOfSpawns;                       // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumKillsForEndCondition;                           // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AutoStartDelay;                                    // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumCollectItemsForEndCondition;                    // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMinigameScoringPreset>        ScoringPresets;                                    // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	TArray<class UClass*>                        TrackedStats;                                      // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        NumAIKillsForEndCondition;                         // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ScoreForEndCondition;                              // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalRounds;                                       // 0x390(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumObjectDestroysForWin;                           // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WinnerDisplayTime;                                 // 0x398(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScoreDisplayTime;                                  // 0x39C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TrackedScoreStat0;                                 // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TrackedScoreStat1;                                 // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TrackedScoreStat2;                                 // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TrackedScoreStat3;                                 // 0x3AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TrackedScoreStat4;                                 // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                TrackedScoreStats;                                 // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayTagContainer>         AvailableUIExtensions;                             // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                 CommonUIExtensions;                                // 0x3D8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        UIExtensionSetting;                                // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlaylistUserOptionIntEnum*            TrackedScoreStat0_Definition;                      // 0x400(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UPlaylistUserOptionIntEnum*            TrackedScoreStat1_Definition;                      // 0x408(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UPlaylistUserOptionIntEnum*            TrackedScoreStat2_Definition;                      // 0x410(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UPlaylistUserOptionIntEnum*            TrackedScoreStat3_Definition;                      // 0x418(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UPlaylistUserOptionIntEnum*            TrackedScoreStat4_Definition;                      // 0x420(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UPlaylistUserOptionIntEnum*            UIExtensionSetting_Definition;                     // 0x428(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                        TeamSetting;                                       // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CD8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlaylistUserOptionIntEnum*            TeamSetting_Definition;                            // 0x438(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         bUseIngameScoreboard;                              // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EMinigameFullscreenMapWidgetType  MinigameFullscreenMapWidgetType;                   // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CD9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TimerDirection;                                    // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TeamRotationSetting;                               // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RoundScoreDisplayTime;                             // 0x44C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RoundWinnerDisplayTime;                            // 0x450(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStopwatchMode;                                    // 0x454(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bUseSolaris;                                       // 0x455(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         bStableTeamCosmetics;                              // 0x456(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bShowCumulativeScoreOnHUD;                         // 0x457(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EMinigameWinCondition             WinCondition;                                      // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AllTeamsMustMatchEndConditions;                    // 0x45C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EndGameOnMatchPointWin;                            // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaultClassSlot;                                  // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMinigameClassResetType       ClassResetType;                                    // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMinigamePlayerPersistence        PlayerPersistence;                                 // 0x469(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CDC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OnlyAllowRespawningIfPlayerStartPadsFound;         // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShowCumulativeScoreboard;                          // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowFriendlyFire;                                // 0x474(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EMinigameGameEndCallout           GameEndCallout;                                    // 0x475(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CDD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VictoryAudioIndex;                                 // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DrawAudioIndex;                                    // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DefeatAudioIndex;                                  // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomVictoryCallout;                              // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                CustomDefeatCallout;                               // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        StartCountdownDuration;                            // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMinigameSettingsMachine_C* GetDefaultObj();

	void UpdateGameStartCountdown(bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void AdditionalUIExtensionValidityChecks(const struct FGameplayTagContainer& TagContainer, bool* bUIExtensionIsValid, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasTag_ReturnValue);
	int32 GetTeamSetting();
	void UpdateGameSettings(class AFortMinigame* CurrentMinigame, bool CallFunc_IsValid_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame);
	void UpdatePlayerPersistence(bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void UpdateClassSettings(class AFortMinigame* CurrentMinigame, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, uint8 K2Node_Select_Default);
	void GetUIExtensions(struct FGameplayTagContainer* Return_Value, const struct FGameplayTagContainer& Final_UI_Extensions, const struct FGameplayTagContainer& CallFunc_Array_Get_Item, bool CallFunc_AdditionalUIExtensionValidityChecks_bUIExtensionIsValid, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Game_Mode_Preset_Upgrade_Path(TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetOptionKey_ReturnValue, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue_1, const class FString& CallFunc_GetOptionKey_ReturnValue_1, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue_2, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue_3, const class FString& CallFunc_GetOptionKey_ReturnValue_2, const class FString& CallFunc_GetOptionKey_ReturnValue_3, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue_4, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue_5, const class FString& CallFunc_GetOptionKey_ReturnValue_4, const class FString& CallFunc_GetOptionKey_ReturnValue_5, TMap<class FString, class FString> K2Node_MakeMap_Map, const struct FMinigameScoringPreset& CallFunc_Array_Get_Item, bool CallFunc_SetPropertyOverrides_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, class UClass* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Find_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_2, class UClass* CallFunc_Array_Get_Item_3, class UClass* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Find_ReturnValue_3, int32 CallFunc_Array_Find_ReturnValue_4, class UClass* CallFunc_Array_Get_Item_5, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_5, bool CallFunc_Array_IsValidIndex_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue_4, bool CallFunc_Array_IsValidIndex_ReturnValue_5);
	void GetScoreboardStatsArray(TArray<class UClass*>* ScoreboardStats, const TArray<class UClass*>& TrackedScoreboardStats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void FillTrackedStats(TArray<int32>& K2Node_MakeArray_Array);
	void ToggleScriptedGameRules(bool bIsScriptedGame, bool Temp_bool_Variable, const class FString& Temp_string_Variable, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, const class FString& K2Node_Select_Default, const struct FSolarisPrototype& K2Node_MakeStruct_SolarisPrototype);
	void TryAddEndCondition_DestroyObjects(TArray<struct FFortMinigameStatQuery>& EndConditions, bool* bResult, bool bAdded, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FFortMinigameStatQuery& K2Node_MakeStruct_FortMinigameStatQuery, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateTotalRounds(bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void UpdateMinigameMutators(class UFortMutatorListComponent* MutatorList, class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortMutatorListComponent* CallFunc_GetComponentByClass_ReturnValue, TMap<class FString, class FString> CallFunc_GetPropertyOverrides_CurrentOptions, bool CallFunc_GetPropertyOverrides_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame);
	void UpdateJoinInProgress(class AFortMinigame* NewLocalVar_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void TryAddEndCondition_CollectItems(TArray<struct FFortMinigameStatQuery>& EndConditions, bool* bResult, bool bAdded, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortMinigameStatQuery& K2Node_MakeStruct_FortMinigameStatQuery, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateAutoStart(class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void UpdateEndConditions(const TArray<struct FFortMinigameStatQuery>& EndConditions, class AFortMinigame* Minigame, bool CallFunc_HasAuthority_ReturnValue, const struct FFortMinigameStatQuery& K2Node_MakeStruct_FortMinigameStatQuery, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortMinigameStatQuery& K2Node_MakeStruct_FortMinigameStatQuery_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_TryAddEndCondition_DestroyObjects_bResult, bool CallFunc_TryAddEndCondition_CollectItems_bResult, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FFortMinigameStatQuery& K2Node_MakeStruct_FortMinigameStatQuery_2, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void UpdateTeamToMoveToWhenOutOfSpawns(class AFortMinigame* Minigame, bool CallFunc_HasAuthority_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame);
	void UpdateAutoEndTeamThreshold(class AFortMinigame* Minigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void UpdatePlayerLives(class AFortMinigame* NewLocalVar_0, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void UpdatePostGameSpawnLocationSetting(class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	class FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	void UpdateTeamSetting(bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void UpdateSpawnLocationSetting(class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void GetCurrentMinigame(class AFortMinigame** Minigame, bool CallFunc_IsValid_ReturnValue, class UFortMinigameVolumeComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateTimeLimit(class AFortMinigame* CurrentMinigame, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void UpdateGameMode(class AFortMinigame* CurrentMinigame, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue_3, const struct FGameplayTagContainer& CallFunc_GetUIExtensions_Return_Value, TArray<class UClass*>& CallFunc_GetScoreboardStatsArray_ScoreboardStats, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue);
	void HasMinigameStarted(bool* bHasStarted, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasStarted_ReturnValue);
	void GetPickupSpawnLocation(struct FVector* SpawnLocation, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class ETInteractionType InteractionType, bool CanInteract, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue);
	void OnComplete_C895978B4EDC5073967F23BED63E6DB5(class UUserWidget* UserWidget);
	void ReceiveBeginPlay();
	void OnGameSettingsUpdated();
	void StartMinigameHelper();
	void AbandonMinigameHelper();
	void ShowSolaris();
	void UseSolaris(bool bShouldUse);
	void ExecuteUbergraph_MinigameSettingsMachine(int32 EntryPoint, class UUserWidget* K2Node_CustomEvent_UserWidget, class UUserWidget* Temp_object_Variable, class UCommonActivatablePanel* K2Node_DynamicCast_AsCommon_Activatable_Panel, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue_1, class AFortPlayerController* CallFunc_Array_Get_Item, class AFortPlayerController* CallFunc_Array_Get_Item_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue, const class FString& CallFunc_GetOptionKey_ReturnValue, TMap<class FString, class FString> K2Node_MakeMap_Map, bool CallFunc_SetPropertyOverrides_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue_2, int32 Temp_int_Variable, class AFortPlayerController* CallFunc_Array_Get_Item_2, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool K2Node_Event_bShouldUse, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, int32 K2Node_Select_Default);
};

}


