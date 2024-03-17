#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x89 (0x391 - 0x308)
// WidgetBlueprintGeneratedClass AthenaMapNavigableIconStackOfNoLocationChallenges.AthenaMapNavigableIconStackOfNoLocationChallenges_C
class UAthenaMapNavigableIconStackOfNoLocationChallenges_C : public UAthenaMapNavigableIconStackOfNoLocationChallenges
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnStartSelected;                                   // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnSelectAnimMinusFromHover;                        // 0x318(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FlareMinusLoop;                                    // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnStartAnim;                                       // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnSelectedAnim;                                    // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_Stack;                                  // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_Stack_Count;                            // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CompletedCountText;                                // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      Image_Bang;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      Image_Flare;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ShadowFor3dMap;                              // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_1;                                         // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_2;                                     // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture*                              DefaultIcon;                                       // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnforceHideCount;                                 // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaMapNavigableIconStackOfNoLocationChallenges_C* GetDefaultObj();

	void SetAnywhereState(const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetMaterialState(bool Completed, bool Lock, bool HasIconOverride);
	void OnChallengeSet(bool bIsComplete, bool bIsLocked, bool bHasIconOverride, float Progress, bool bShouldShowBang);
	void OnChallengeIconOverriden(class UTexture2D* Icon);
	void OnChallengeReset();
	void OnBeginIntroAnimation();
	void OnSetHasLocation(bool bHasLocation);
	void OnChangedStackData(int32 NewStackCount, int32 NonCompletedCount);
	void OnSetIsInGame(bool bIsInGame);
	void OnHovered(bool bUserInteraction);
	void OnUnhovered(bool bUserInteraction);
	void OnSelected(bool bUserInteraction);
	void OnUnselected(bool bUserInteraction);
	void OnChangeBangVisibility(bool bShouldShow);
	void OnSetChallengesInfo(int32 ChallengesNum, int32 CountOfCompletedChallenges);
	void Construct();
	void ExecuteUbergraph_AthenaMapNavigableIconStackOfNoLocationChallenges(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, bool K2Node_Event_bIsComplete, bool K2Node_Event_bIsLocked, bool K2Node_Event_bHasIconOverride, float K2Node_Event_Progress, bool K2Node_Event_bShouldShowBang, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, class UTexture2D* K2Node_Event_Icon, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_GetSelectStackedDataIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_7, class FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable_5, float Temp_float_Variable, enum class ESlateVisibility K2Node_Select_Default_1, bool Temp_bool_Variable_6, float Temp_float_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bHasLocation, int32 K2Node_Event_NewStackCount, int32 K2Node_Event_NonCompletedCount, bool K2Node_Event_bIsInGame, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, bool K2Node_Event_bUserInteraction_3, bool K2Node_Event_bUserInteraction_2, bool K2Node_Event_bUserInteraction_1, bool K2Node_Event_bUserInteraction, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsIconSelected_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsIconSelected_ReturnValue_1, float Temp_float_Variable_2, bool Temp_bool_Variable_7, bool CallFunc_IsIconSelected_ReturnValue_2, float K2Node_Select_Default_2, class UWidgetAnimation* K2Node_Select_Default_3, enum class ESlateVisibility Temp_byte_Variable_8, float CallFunc_GetEndTime_ReturnValue, float K2Node_Select_Default_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6, bool K2Node_Event_bShouldShow, enum class ESlateVisibility K2Node_Select_Default_7, int32 K2Node_Event_ChallengesNum, int32 K2Node_Event_CountOfCompletedChallenges, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Greater_IntInt_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


