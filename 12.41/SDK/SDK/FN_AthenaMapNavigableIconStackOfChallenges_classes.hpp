#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x75 (0x375 - 0x300)
// WidgetBlueprintGeneratedClass AthenaMapNavigableIconStackOfChallenges.AthenaMapNavigableIconStackOfChallenges_C
class UAthenaMapNavigableIconStackOfChallenges_C : public UAthenaMapNavigableIconStackOfChallenges
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnSelectAnimMinusFromHover;                        // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FlareMinusLoop;                                    // 0x318(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnStartAnim;                                       // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnChangingStackIndexAnim;                          // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnSelectedAnim;                                    // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_Stack;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_Stack_Count;                            // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      Image_Bang;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      Image_Flare;                                       // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ShadowFor3dMap;                              // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_1;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture*                              DefaultIcon;                                       // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChangingStackIndexBaseStateTime;                   // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnforceHideCount;                                 // 0x374(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaMapNavigableIconStackOfChallenges_C* GetDefaultObj();

	void SetAnywhereState(bool bIsAnytimeChallenge, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetMaterialState(bool Complete, bool Locked, bool HasIconOverride);
	void OnChallengeSet(bool bIsComplete, bool bIsLocked, bool bHasIconOverride, float Progress, bool bShouldShowBang);
	void OnSetIsInGame(bool bIsInGame);
	void OnChangingStackIndexAnimFinished();
	void Destruct();
	void Construct();
	void OnChallengeReset();
	void OnBeginIntroAnimation();
	void OnSetHasLocation(bool bHasLocation);
	void OnChangedStackData(int32 NewStackCount, int32 NonCompletedCount);
	void OnChallengeIconOverriden(class UTexture2D* Icon);
	void OnSelected(bool bUserInteraction);
	void OnUnselected(bool bUserInteraction);
	void OnHovered(bool bUserInteraction);
	void OnUnhovered(bool bUserInteraction);
	void OnChangeBangVisibility(bool bShouldShow);
	void ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool K2Node_Event_bIsComplete, bool K2Node_Event_bIsLocked, bool K2Node_Event_bHasIconOverride, float K2Node_Event_Progress, bool K2Node_Event_bShouldShowBang, bool K2Node_Event_bIsInGame, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, bool Temp_bool_Variable_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_GetSelectStackedDataIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_4, class FText CallFunc_Conv_IntToText_ReturnValue, float Temp_float_Variable, bool Temp_bool_Variable_5, float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_ShouldCycleAutomatically_ReturnValue, float Temp_float_Variable_1, bool K2Node_Event_bHasLocation, float Temp_float_Variable_2, int32 K2Node_Event_NewStackCount, int32 K2Node_Event_NonCompletedCount, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class UTexture2D* K2Node_Event_Icon, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, bool K2Node_Event_bUserInteraction_3, bool CallFunc_ShouldCycleAutomatically_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsIconHovered_ReturnValue, bool Temp_bool_Variable_6, bool K2Node_Event_bUserInteraction_2, float K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_Event_bUserInteraction_1, bool CallFunc_IsIconSelected_ReturnValue, bool K2Node_Event_bUserInteraction, bool CallFunc_IsIconSelected_ReturnValue_1, bool CallFunc_IsIconSelected_ReturnValue_2, bool CallFunc_IsIconSelected_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_8, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UWidgetAnimation* K2Node_Select_Default_3, float CallFunc_GetEndTime_ReturnValue, float K2Node_Select_Default_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, enum class ESlateVisibility K2Node_Select_Default_5, enum class ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_7, enum class ESlateVisibility K2Node_Select_Default_6, bool K2Node_Event_bShouldShow, enum class ESlateVisibility K2Node_Select_Default_7);
};

}


