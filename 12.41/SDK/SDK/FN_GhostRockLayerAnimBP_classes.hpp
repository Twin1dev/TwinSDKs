#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3314 (0x3644 - 0x330)
// AnimBlueprintGeneratedClass GhostRockLayerAnimBP.GhostRockLayerAnimBP_C
class UGhostRockLayerAnimBP_C : public UFortItemLayerAnimInstance_FullLocomotion
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_34;                             // 0x338(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_17;                  // 0x368(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_33;                             // 0x3D8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_16;                  // 0x408(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_32;                             // 0x478(0x30)(None)
	float                                        Pitch;                                             // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Yaw;                                               // 0x4AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimOffsetAlpha;                                    // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5309[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_15;                  // 0x4B8(0x70)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_14;                  // 0x528(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_31;                             // 0x598(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_13;                  // 0x5C8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_30;                             // 0x638(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_29;                             // 0x668(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_28;                             // 0x698(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_27;                             // 0x6C8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_26;                             // 0x6F8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_25;                             // 0x728(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0x758(0x70)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x7C8(0x18)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_24;                             // 0x7E0(0x30)(None)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0x810(0x240)(NoDestructor)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0xA50(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_23;                             // 0xAC0(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0xAF0(0x70)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0xB60(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0xC28(0xE0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0xD08(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39;                   // 0xD30(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xDA8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_38;                   // 0xDD8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xE50(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xE80(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_22;                             // 0xF30(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0xF60(0x70)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_37;                   // 0xFD0(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1048(0xA0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x10E8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x1118(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x1148(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36;                   // 0x1178(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x11F0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x1220(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1298(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x12C8(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x1340(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0x1370(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0x13E8(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1460(0xA0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x1500(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x1530(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x1560(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x1590(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x15C0(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x15F0(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x1620(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_7;                   // 0x1690(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0x1740(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x17B8(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x1830(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x18A8(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x1920(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x1950(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_6;                   // 0x19C0(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x1A70(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x1AE8(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x1B60(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x1BD8(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x1C50(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x1C80(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_5;                   // 0x1CF0(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x1DA0(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x1E18(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x1E90(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x1F08(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x1F80(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x1FB0(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x2020(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x20D0(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x2148(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x21C0(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x2238(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x22B0(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x22E0(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x2350(0xE0)(None)
	struct FFortAnimNode_SpeedWarping            FortAnimGraphNode_SpeedWarping;                    // 0x2430(0x1B8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x25E8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2608(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x2628(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x2658(0x70)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_3;                    // 0x26C8(0xA0)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_2;                    // 0x2768(0xA0)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_1;                    // 0x2808(0xA0)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x28A8(0xA0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x2948(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x29F8(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x2A70(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x2AE8(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x2B60(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x2BD8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x2C08(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x2C78(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x2D28(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x2DA0(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x2E18(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x2E90(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x2F08(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x2F38(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x2FA8(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x3058(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x30D0(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x3148(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x31C0(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x3238(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x3268(0x70)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x32D8(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x3388(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x3400(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x3478(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x34F0(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x3568(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x3598(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x3608(0x30)(None)
	float                                        JogStartPosition;                                  // 0x3638(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartBlendTime;                                    // 0x363C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PivotAnimBlendTime;                                // 0x3640(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGhostRockLayerAnimBP_C* GetDefaultObj();

	void ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive);
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
	void ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart);
	void ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop);
	void ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot);
	void ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot);
	void ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_GhostRockLayerAnimBP(int32 EntryPoint);
};

}


