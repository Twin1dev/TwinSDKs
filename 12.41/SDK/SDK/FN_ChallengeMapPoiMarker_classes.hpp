#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x398 - 0x270)
// WidgetBlueprintGeneratedClass ChallengeMapPoiMarker.ChallengeMapPoiMarker_C
class UChallengeMapPoiMarker_C : public UAthenaFrontEndMapPoiIcon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Redacted;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                           POI_SpyBaseColor;                                  // 0x280(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           POI_NormalColor;                                   // 0x2A8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           POI_Redacted;                                      // 0x2D0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateFontInfo                        SpayBaseFont;                                      // 0x2F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        DefaultFont;                                       // 0x348(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UChallengeMapPoiMarker_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void HandleTextChanged(bool bIsRedacted, bool bIsSpybase);
	void ExecuteUbergraph_ChallengeMapPoiMarker(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsRedacted, bool K2Node_Event_bIsSpybase, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, const struct FSlateFontInfo& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3);
};

}


