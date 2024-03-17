#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x113 (0xCB3 - 0xBA0)
// BlueprintGeneratedClass B_TargetTrack.B_TargetTrack_C
class AB_TargetTrack_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      ProximityTrigger;                                  // 0xBA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Target_Move_Loop_Cue;                              // 0xBB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Target_Move_Stop_Cue;                              // 0xBB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Target_Move_Start_Cue;                             // 0xBC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0xBC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       TargetAttachPoint;                                 // 0xBD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Target_Track;                                   // 0xBD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TargetMovement_NewTrack_0_9F61BF394D22B10B7DAB4683CA4746AC; // 0xBE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TargetMovement__Direction_9F61BF394D22B10B7DAB4683CA4746AC; // 0xBE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_627D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TargetMovement;                                    // 0xBE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            BaseTransformForTarget;                            // 0xBF0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        LengthScaleSetting;                                // 0xC20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayAtEndSetting;                                 // 0xC24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProximityTriggerSizeSetting;                       // 0xC28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InitialMovementDelaySetting;                       // 0xC2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrackSpeedSetting;                                 // 0xC30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCurrentlyMoving;                                 // 0xC34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AtStartPoint;                                      // 0xC35(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LoopingSetting;                                    // 0xC36(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6281[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RotationSetting;                                   // 0xC38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6283[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_ShootingTarget_Master_C*            AttachedTarget;                                    // 0xC40(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            LeftRightTargetBaseMesh;                           // 0xC48(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            ForwardBackwardTargetBaseMesh;                     // 0xC70(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>           NewVar_0;                                          // 0xC98(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsTargetUp;                                        // 0xCA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        CurrentMovementState;                              // 0xCA9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6286[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Audio_Speed_Parameter;                             // 0xCAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        LeftToRightmovementState;                          // 0xCB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        RightToLeftMovementState;                          // 0xCB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        StopMovementState;                                 // 0xCB2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_TargetTrack_C* GetDefaultObj();

	TArray<class UMeshComponent*> GetMeshComponents();
	class UStaticMesh* GetCollisionStaticMesh();
	void Set_Audio_Speed_Sound(float Target_Speed, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnRep_CurrentMovementState(int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void SetMovementState(uint8 State, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void UpdateLerpedPosition(float Alpha, const struct FVector& CallFunc_GetFinalDestinationOfTarget_Destination, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void OnRep_CurrentLerpValue();
	void UpdateForRepNotify();
	void OnRep_IsCurrentlyMoving();
	void OnRep_CurrentDirection();
	void OnRep_IsTargetUp();
	void OnRep_ServerMoveStartTime();
	void SetTrackLength(const struct FVector& CallFunc_MakeVector_ReturnValue);
	void SetTargetRotationAndBaseMesh(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, bool K2Node_SwitchInteger_CmpSuccess);
	float CalculatePlayRate(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetFinalDestinationOfTarget(struct FVector* Destination, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void TargetMovement__FinishedFunc();
	void TargetMovement__UpdateFunc();
	void OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8(class UObject* Loaded);
	void OnLoaded_3C01053C48BCC07B689033B6DB9706E0(class UObject* Loaded);
	void ReceiveBeginPlay();
	void MoveTarget();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature();
	void AttachedTargetKnockedDown();
	void StopTargetMovement();
	void AttachedTargetPoppedUp();
	void ReverseTargetMovement();
	void AsyncLoadTargetBase();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void InitializeSettings();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Move_Target_Audio();
	void Stop_Move_Target_Audio();
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_TargetTrack(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AB_ShootingTarget_Master_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_CalculatePlayRate_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* Temp_object_Variable, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_SetStaticMesh_ReturnValue_1, class UObject* Temp_object_Variable_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_2, bool K2Node_DynamicCast_bSuccess_2, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue_4, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_4, enum class EEndPlayReason K2Node_Event_EndPlayReason, TMap<class FString, class FString> CallFunc_GetPropertyOverrides_CurrentOptions, bool CallFunc_GetPropertyOverrides_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SetPropertyOverrides_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


