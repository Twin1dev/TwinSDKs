#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD7 (0x1120 - 0x1049)
// BlueprintGeneratedClass B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C
class AB_Ranged_Lotus_Mustache_C : public AB_Ranged_Generic_Athena_C
{
public:
	uint8                                        Pad_6560[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1050(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_1_NewTrack_0_8351400740E359EACF6851AB2B2BF762; // 0x1058(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_8351400740E359EACF6851AB2B2BF762; // 0x105C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6561[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x1060(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_1366F380457842955A635D98E5E62F34; // 0x1068(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_1366F380457842955A635D98E5E62F34; // 0x106C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6562[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x1070(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   DataRow;                                           // 0x1078(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FLinearColor                          Screen_Full_Color__Material_;                      // 0x1088(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Screen_Empty_Color__Material_;                     // 0x1098(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Test_AmmoClipMax;                                  // 0x10A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Screen_Empty_Color__Light_;                        // 0x10AC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Screen_Full_Color__Light_;                         // 0x10BC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanPlay_;                                          // 0x10CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6563[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LockOnTarget;                                      // 0x10D0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TurnSpeedMax;                                      // 0x10D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HomingDistanceThreshold;                           // 0x10DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeUntilMax;                                      // 0x10E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6564[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULotus_Mustache_HealthBar_C*           LockOnWidget;                                      // 0x10E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_LockOnWidgetActor_Proto_C*     WidgetActor;                                       // 0x10F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthPercent;                                     // 0x10F8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTime;                                           // 0x10FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        ShouldSpawnBandages;                               // 0x1100(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AB_Ranged_Lotus_Mustache_C* GetDefaultObj();

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile);
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ReceiveTick(float DeltaSeconds);
	void NewTarget();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void SetHealthPercentServer();
	void SetHealthPercentClient(float HealthPercent);
	void ExecuteUbergraph_B_Ranged_Lotus_Mustache(int32 EntryPoint, class AFortProjectileBase* K2Node_Event_SpawnProjectile, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingStyle_self_CastInput, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingLockTargetDistanceThreshold_self_CastInput, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTurnSpeedMax_self_CastInput, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTurnSpeedMin_self_CastInput, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTarget_self_CastInput, float K2Node_Event_DeltaSeconds, bool CallFunc_IsLocallyControlled_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_HealthPercent, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAthena_LockOnWidgetActor_Proto_C* CallFunc_FinishSpawningActor_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class ULotus_Mustache_HealthBar_C* K2Node_DynamicCast_AsLotus_Mustache_Health_Bar, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_RowToBool_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTimeUntilMaxTurnSpeed_self_CastInput);
};

}


