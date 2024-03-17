#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1390 (0x16C0 - 0x330)
// AnimBlueprintGeneratedClass BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C
class UBadgerBangsLayerAnimBP_C : public UFortItemLayerAnimInstance_FullLocomotion
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
	uint8                                        Pad_5FBD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_16;                  // 0x4B8(0x70)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_15;                  // 0x528(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_31;                             // 0x598(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_14;                  // 0x5C8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_30;                             // 0x638(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x668(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_29;                             // 0x6E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x710(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_28;                             // 0x788(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x7B8(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_27;                             // 0x830(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x860(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_26;                             // 0x8D8(0x30)(None)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0x908(0x240)(NoDestructor)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_13;                  // 0xB48(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_25;                             // 0xBB8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0xBE8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_24;                             // 0xC58(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0xC88(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_23;                             // 0xCF8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_22;                             // 0xD28(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0xD58(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0xD88(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0xDB8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0xDE8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0xE18(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0xE48(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0xE78(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0xEA8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0xED8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0xF08(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0xF38(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0xFA8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0xFD8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x1048(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x1078(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x10E8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x1118(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x1188(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x11B8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x1228(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x1258(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x12C8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x12F8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x1368(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x1398(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x1408(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x1438(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x14A8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x14D8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x1548(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1578(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x15E8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1618(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1690(0x30)(None)

	static class UClass* StaticClass();
	static class UBadgerBangsLayerAnimBP_C* GetDefaultObj();

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
	void ExecuteUbergraph_BadgerBangsLayerAnimBP(int32 EntryPoint);
};

}


