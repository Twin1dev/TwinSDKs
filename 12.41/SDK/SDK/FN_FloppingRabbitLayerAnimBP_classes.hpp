#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1909 (0x1C39 - 0x330)
// AnimBlueprintGeneratedClass FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C
class UFloppingRabbitLayerAnimBP_C : public UFortItemLayerAnimInstance_FullLocomotion
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_34;                             // 0x338(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_18;                  // 0x368(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_33;                             // 0x3D8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_17;                  // 0x408(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_32;                             // 0x478(0x30)(None)
	float                                        Pitch;                                             // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Yaw;                                               // 0x4AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimOffsetAlpha;                                    // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_16;                  // 0x4B8(0x70)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_15;                  // 0x528(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_31;                             // 0x598(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_14;                  // 0x5C8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_30;                             // 0x638(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x668(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x6E0(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x780(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_29;                             // 0x7F8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x828(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x8A0(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x940(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_28;                             // 0x9B8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x9E8(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0xA60(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0xB00(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_27;                             // 0xB78(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xBA8(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xC20(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xCC0(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_26;                             // 0xD38(0x30)(None)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0xD68(0x240)(NoDestructor)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_13;                  // 0xFA8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_25;                             // 0x1018(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0x1048(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_24;                             // 0x10B8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0x10E8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_23;                             // 0x1158(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_22;                             // 0x1188(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x11B8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x11E8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x1218(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x1248(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1278(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x12A8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x12D8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x1308(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x1338(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x1368(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0x1398(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x1408(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x1438(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x14A8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x14D8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x1548(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x1578(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x15E8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x1618(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x1688(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x16B8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x1728(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x1758(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x17C8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x17F8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x1868(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x1898(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x1908(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1938(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x19A8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x19D8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1A48(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1A78(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1AF0(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1B90(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1C08(0x30)(None)
	bool                                         OneHandGrip;                                       // 0x1C38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFloppingRabbitLayerAnimBP_C* GetDefaultObj();

	void ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd);
	void ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop);
	void ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop);
	void ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop);
	void ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody);
	void ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint);
	void ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive);
	void ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive);
	void ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding);
	void ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive);
	void ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive);
	void ItemFallAdditive(struct FPoseLink* ItemFallAdditive);
	void ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive);
	void ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive);
	void ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive);
	void ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive);
	void ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive);
	void ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive);
	void ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive);
	void ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive);
	void ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive);
	void ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive);
	void ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement);
	void ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive);
	void ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart);
	void ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop);
	void ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot);
	void ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot);
	void ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry);
	void ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_FloppingRabbitLayerAnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess_1);
};

}


