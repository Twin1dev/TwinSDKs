#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13F (0x1188 - 0x1049)
// BlueprintGeneratedClass B_TnTinaBow_Athena.B_TnTinaBow_Athena_C
class AB_TnTinaBow_Athena_C : public AB_Ranged_Generic_Athena_C
{
public:
	uint8                                        Pad_6154[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1050(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       FullCharge_AudioComponent;                         // 0x1058(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Ambient_Charge_AudioComponent;                     // 0x1060(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Reached_Max_Charge;                                // 0x1068(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Reached_Min_Charge;                                // 0x1069(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Charging;                                          // 0x106A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6155[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       ChargeAudio;                                       // 0x1070(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FullyChargedVFX;                                   // 0x1078(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x1080(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UpdateTrajectorySpline;                            // 0x1088(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Prj_Dummy;                                         // 0x1090(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   DummyProjectile;                                   // 0x1098(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyGravity;                                      // 0x10A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyExtent;                                       // 0x10A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyMaxSpeed;                                     // 0x10A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Gravity;                                           // 0x10AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GravityScale;                                      // 0x10B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GravityTickIncrease;                               // 0x10B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProjectileVelocity;                                // 0x10B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxProjectileVelocity;                             // 0x10BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VelocityTickIncrease;                              // 0x10C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6156[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ChargingAnim;                                      // 0x10C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          MaxChargeAnim;                                     // 0x10D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MinProjectileSpeed;                                // 0x10D8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        MaxProjectileSpeed;                                // 0x10F8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_ProjectileTrajectory_ExplosiveBow_C* BowTrajectory;                                     // 0x1118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyFriction;                                     // 0x1120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyBouncieness;                                  // 0x1124(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionChannel                 DummyCollisionChannel;                             // 0x1128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6157[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                TrajectoryClass;                                   // 0x1130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBowEquipped;                                     // 0x1138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ReachedHalfCharge;                                 // 0x1139(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6158[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DummyTimeStep;                                     // 0x113C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            LowTensionFire;                                    // 0x1140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            NormalTensionFire;                                 // 0x1148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            FullTensionFire;                                   // 0x1150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            FullTensionFireP1;                                 // 0x1158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            LowTensionFireP1;                                  // 0x1160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            NormalTensionFireP1;                               // 0x1168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       AdditionalFireFX;                                  // 0x1170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       FullyChargeFX;                                     // 0x1178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnCharge;                                     // 0x1180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_TnTinaBow_Athena_C* GetDefaultObj();

	void StopDrawAudio(bool CallFunc_IsValid_ReturnValue);
	void StartDrawAudio(bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void SetupProjectileVariables(struct FVector* StartLocation, struct FVector* InitialVelocity, float* ProjectileVelocity, struct FRotator* OutRotation, float CallFunc_GetProjectilePitchOffset_ReturnValue, const struct FVector& CallFunc_GetDamageStartLocation_AimDir, const struct FVector& CallFunc_GetDamageStartLocation_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void CalculateVelocity(float* Velocity, float CallFunc_GetChargePercent_ReturnValue, float CallFunc_GetProjectileSpeed_ReturnValue);
	void CalculateTrajectorySpline(float CallFunc_GetChargePercent_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_SetupProjectileVariables_StartLocation, const struct FVector& CallFunc_SetupProjectileVariables_InitialVelocity, float CallFunc_SetupProjectileVariables_ProjectileVelocity, const struct FRotator& CallFunc_SetupProjectileVariables_OutRotation, const struct FHitResult& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents);
	void SetDummyVariables(const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, enum class ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, float CallFunc_FMax_ReturnValue, float CallFunc_GetGravityZ_ReturnValue);
	void SetupTrajectoryProjectile(const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_ExplosiveBow_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory_Explosive_Bow, bool K2Node_DynamicCast_bSuccess);
	void OnReachedMinCharge();
	void OnStartCharge();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void EndOfCharge();
	void K2_OnUnEquip();
	void OnChargeDown();
	void OnChargeUp();
	void OnEndCharge();
	void ResetCharge();
	void IncreaseDrawStrength();
	void OnWeaponAttached();
	void ReceiveTick(float DeltaSeconds);
	void OnReachedMaxCharge();
	void ExecuteUbergraph_B_TnTinaBow_Athena(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, bool Temp_bool_Variable_1, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_CalculateVelocity_Velocity, float K2Node_Event_DeltaSeconds, float CallFunc_GetChargePercent_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable_2, class APawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, float CallFunc_GetChargePercent_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, bool Temp_bool_Variable_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class USoundBase* K2Node_Select_Default_2, class USoundBase* K2Node_Select_Default_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1);
};

}


