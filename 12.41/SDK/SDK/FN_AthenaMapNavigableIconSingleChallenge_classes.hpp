#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x338 - 0x2D0)
// WidgetBlueprintGeneratedClass AthenaMapNavigableIconSingleChallenge.AthenaMapNavigableIconSingleChallenge_C
class UAthenaMapNavigableIconSingleChallenge_C : public UAthenaMapNavigableIconSingleChallenge
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnSelectAnimMinusFromHover;                        // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FlareMinusLoop;                                    // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnStartAnim;                                       // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnSelectAnim;                                      // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_Stack_Count;                            // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      Image_Bang;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      Image_complete;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      Image_Flare;                                       // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ShadowFor3dMap;                              // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_13;                                        // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture*                              DefaultIcon;                                       // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaMapNavigableIconSingleChallenge_C* GetDefaultObj();

	void SetMaterialState(bool Complete, bool Locked, bool HasIconOverride);
	void OnChallengeSet(bool bIsComplete, bool bIsLocked, bool bHasIconOverride, float Progress, bool bShouldShowBang);
	void OnChallengeReset();
	void OnSetHasLocation(bool bHasLocation);
	void OnBeginIntroAnimation();
	void OnSetIsInGame(bool bIsInGame);
	void OnChallengeIconOverriden(class UTexture2D* Icon);
	void OnSelected(bool bUserInteraction);
	void OnUnselected(bool bUserInteraction);
	void OnHovered(bool bUserInteraction);
	void OnUnhovered(bool bUserInteraction);
	void OnChangeBangVisibility(bool bShouldShow);
	void Construct();
	void Play_Start_Animation();
	void ExecuteUbergraph_AthenaMapNavigableIconSingleChallenge(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_bIsComplete, bool K2Node_Event_bIsLocked, bool K2Node_Event_bHasIconOverride, float K2Node_Event_Progress, bool K2Node_Event_bShouldShowBang, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_4, float Temp_float_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1, bool K2Node_Event_bHasLocation, float Temp_float_Variable_2, float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable_5, bool K2Node_Event_bIsInGame, class UTexture2D* K2Node_Event_Icon, float K2Node_Select_Default_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, bool K2Node_Event_bUserInteraction_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsIconHovered_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_6, bool K2Node_Event_bUserInteraction_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_Event_bUserInteraction_1, bool CallFunc_IsIconSelected_ReturnValue, bool K2Node_Event_bUserInteraction, bool CallFunc_IsIconSelected_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_7, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable_6, class UWidgetAnimation* K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, float CallFunc_GetEndTime_ReturnValue, float K2Node_Select_Default_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_Event_bShouldShow, enum class ESlateVisibility K2Node_Select_Default_6);
};

}


