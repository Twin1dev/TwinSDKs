#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xC58 - 0xC30)
// WidgetBlueprintGeneratedClass AthenaChallengePageRotator.AthenaChallengePageRotator_C
class UAthenaChallengePageRotator_C : public UAthenaChallengePageRotator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Outro;                                             // 0xC38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0xC40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Background;                                        // 0xC48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GradientBackground;                                // 0xC50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaChallengePageRotator_C* GetDefaultObj();

	void BP_OnOptionsPopulated(int32 Count);
	void BP_OnOptionSelected(int32 Index);
	void OnNumPagesSet(int32 NumPages);
	void SetVisibilityMinusPostAnim();
	void SetInputBindingVisiblity(enum class ESlateVisibility InVisibility);
	void ExecuteUbergraph_AthenaChallengePageRotator(int32 EntryPoint, int32 K2Node_Event_Count, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 K2Node_Event_Index, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 K2Node_Event_NumPages, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class ESlateVisibility K2Node_Event_InVisibility);
};

}


