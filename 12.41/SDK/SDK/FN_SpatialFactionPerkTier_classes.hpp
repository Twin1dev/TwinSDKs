#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x270 - 0x258)
// WidgetBlueprintGeneratedClass SpatialFactionPerkTier.SpatialFactionPerkTier_C
class USpatialFactionPerkTier_C : public USpatialFactionPerkTier
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Highlight_Bottom;                                  // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_TierLevel;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USpatialFactionPerkTier_C* GetDefaultObj();

	void OnInitializePerkTier(int32 PerkLevel, bool bIsRevealed, int32 PerkIndex);
	void OnFactionSet(bool bIsCurrentFactionEarned, bool bIsRevealed, int32 FactionNumber);
	void ExecuteUbergraph_SpatialFactionPerkTier(int32 EntryPoint, int32 K2Node_Event_PerkLevel, bool K2Node_Event_bIsRevealed_1, int32 K2Node_Event_PerkIndex, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility Temp_byte_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_Event_bIsCurrentFactionEarned, bool K2Node_Event_bIsRevealed, int32 K2Node_Event_FactionNumber, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default_1);
};

}


