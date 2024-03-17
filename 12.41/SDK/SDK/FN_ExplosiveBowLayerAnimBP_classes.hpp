#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2680 (0x29E0 - 0x360)
// AnimBlueprintGeneratedClass ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C
class UExplosiveBowLayerAnimBP_C : public UFortItemLayerAnimInstance_ExplosiveBow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_34;                             // 0x368(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_17;                  // 0x398(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_33;                             // 0x408(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_16;                  // 0x438(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_32;                             // 0x4A8(0x30)(None)
	float                                        Pitch;                                             // 0x4D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Yaw;                                               // 0x4DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimOffsetAlpha;                                    // 0x4E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_15;                  // 0x4E8(0x70)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_14;                  // 0x558(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_31;                             // 0x5C8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_13;                  // 0x5F8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_30;                             // 0x668(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_29;                             // 0x698(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_28;                             // 0x6C8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_27;                             // 0x6F8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_26;                             // 0x728(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_25;                             // 0x758(0x30)(None)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0x788(0x240)(NoDestructor)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0x9C8(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0xA38(0xE0)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0xB18(0x188)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0xCA0(0x78)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0xD18(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0xDE0(0xE0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0xEC0(0xB0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0xF70(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x1020(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x1098(0xA0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_24;                             // 0x1138(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0x1168(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_23;                             // 0x11D8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0x1208(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_22;                             // 0x1278(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x12A8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x12D8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x1308(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x1380(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x1420(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x1498(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x1538(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x15B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x15E0(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x1658(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x16F8(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x1770(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x1810(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x1888(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x18B8(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x1930(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x19D0(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x1A48(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x1AE8(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1B60(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x1B90(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1C08(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x1CA8(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1D20(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x1DC0(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x1E38(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1E68(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x1EE0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1F10(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x1F88(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1FB8(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x2030(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x2060(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x2090(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x20C0(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x2130(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x2160(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x21D0(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x2200(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x2270(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x22A0(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x2310(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x2340(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x23B0(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x23E0(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x2450(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x2480(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x24F0(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x2520(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x2590(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x25C0(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x2630(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2660(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x26D0(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x2700(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2770(0x30)(None)
	struct FFortAnimInput_AdjustedAim            AdjustedAim;                                       // 0x27A0(0x240)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UExplosiveBowLayerAnimBP_C* GetDefaultObj();

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
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_EDF172954C1F699670096999A0687B8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_4FE1ED204DA63B600CCE7AB1BB6028C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_11A315AA4DFC9DAEFD15619E18677637();
	void ExecuteUbergraph_ExplosiveBowLayerAnimBP(int32 EntryPoint);
};

}


