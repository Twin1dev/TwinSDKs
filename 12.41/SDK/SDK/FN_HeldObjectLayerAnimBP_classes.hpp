#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A59 (0x1D19 - 0x2C0)
// AnimBlueprintGeneratedClass HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C
class UHeldObjectLayerAnimBP_C : public UFortItemLayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_34;                             // 0x2C8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_18;                  // 0x2F8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_33;                             // 0x368(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_17;                  // 0x398(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_32;                             // 0x408(0x30)(None)
	float                                        Pitch;                                             // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Yaw;                                               // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimOffsetAlpha;                                    // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_16;                  // 0x448(0x70)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x4B8(0x188)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_15;                  // 0x640(0x70)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x6B0(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x768(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_31;                             // 0x790(0x30)(None)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0x7C0(0x240)(NoDestructor)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_14;                  // 0xA00(0x70)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0xA70(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xAE8(0xA0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_30;                             // 0xB88(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_13;                  // 0xBB8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_29;                             // 0xC28(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0xC58(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_28;                             // 0xCC8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_27;                             // 0xCF8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_26;                             // 0xD28(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0xD58(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_25;                             // 0xDD0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0xE00(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_24;                             // 0xE78(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0xEA8(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_23;                             // 0xF20(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0xF50(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_22;                             // 0xFC8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0xFF8(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x1070(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x10A0(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x1118(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x1148(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x11C0(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x11F0(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1220(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0x1250(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x12C0(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0x12F0(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x1360(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x1390(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x1400(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x1430(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x14A0(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x14D0(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x1540(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x1570(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x15E0(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x1610(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x1680(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x16B0(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x1720(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x1750(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x17C0(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x17F0(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x1860(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1890(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x1900(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x1930(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x19A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x19D8(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x1A50(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1A80(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x1AF8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1B28(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x1BA0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1BD0(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1C48(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1C78(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1CE8(0x30)(None)
	bool                                         IsHeldObjectDropped;                               // 0x1D18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UHeldObjectLayerAnimBP_C* GetDefaultObj();

	void ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride);
	void ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset);
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
	void ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop);
	void ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop);
	void ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop);
	void ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd);
	void ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HeldObjectLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_C2A887E04220180AB9CD6384FDB74E4E();
	void AnimNotify_HeldObjectPlace();
	void AnimNotify_HeldObjectPickUp();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_HeldObjectLayerAnimBP(int32 EntryPoint);
};

}


