#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2A0 - 0x218)
// BlueprintGeneratedClass BP_Spybase_Q_Room_Preview.BP_Spybase_Q_Room_Preview_C
class ABP_Spybase_Q_Room_Preview_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_03F56DBA49B07A13BB985B9A204F0C97; // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_684C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Gunfire_Timeline__Direction_3C529FB04D9FB4235565208E51286CFA; // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_684D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Gunfire_Timeline;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Explosions_Timeline__Direction_9620817D4BBB98B288BFF3BBF0AFB5A5; // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_684E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Explosions_Timeline;                               // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EffectIndex;                                       // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_684F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALevelSequenceActor*                   PeelyAnimGliderLoop;                               // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlaying;                                         // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6850[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxValue;                                          // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            HomeTransform;                                     // 0x270(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Spybase_Q_Room_Preview_C* GetDefaultObj();

	void Explosions_Timeline__FinishedFunc();
	void Explosions_Timeline__UpdateFunc();
	void Explosions_Timeline__NewTrack_0__EventFunc();
	void Gunfire_Timeline__FinishedFunc();
	void Gunfire_Timeline__UpdateFunc();
	void Gunfire_Timeline__NewTrack_0__EventFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__NewTrack_0__EventFunc();
	void ReceiveBeginPlay();
	void Spawn_Shield_Effect();
	void SpawnRandomEffect();
	void Spawn_GunFire();
	void Spawn_Electric_Arcs();
	void Spawn_Explosions();
	void Spawn_Klaxon();
	void Spawn_Peely();
	void ExecuteUbergraph_BP_Spybase_Q_Room_Preview(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class AB_BGA_Athena_SilverBlazer_V2_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_4, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, float CallFunc_RandomFloatInRange_ReturnValue_5, float CallFunc_RandomFloatInRange_ReturnValue_6, float CallFunc_RandomFloatInRange_ReturnValue_7, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_8, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_9, float CallFunc_RandomFloatInRange_ReturnValue_10, float CallFunc_RandomFloatInRange_ReturnValue_11, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_3);
};

}


