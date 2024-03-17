#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xC98 - 0xC18)
// WidgetBlueprintGeneratedClass SpatialCustomizationCategoryEntry.SpatialCustomizationCategoryEntry_C
class USpatialCustomizationCategoryEntry_C : public UAthenaSpatialCustomizationCategoryEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC18(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Unhover;                                           // 0xC20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HoverLeft;                                         // 0xC28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HoverRight;                                        // 0xC30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0xC38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Smallstate;                                 // 0xC40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFakeStatsGraphs_C*                    FakeStatsGraphs;                                   // 0xC48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBox_EntryContents;                                // 0xC50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0xC58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SceenSpaceTexture;                                 // 0xC60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_EntryName_Big;                                // 0xC68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_1;                                     // 0xC70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_SmallState;                         // 0xC78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bLeftText;                                         // 0xC80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6D6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                GlitchinessRandomizer;                             // 0xC88(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class USpatialCustomizationCategoryEntry_C* GetDefaultObj();

	void Set_rim_brush_color(class UCommonActionWidget* Target, const struct FLinearColor& Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void HandleCategoryStateSet(enum class ESpatialCustomizationCategoryState State, const struct FLinearColor& StateColor, float Temp_float_Variable, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R_1, float CallFunc_BreakColor_G_1, float CallFunc_BreakColor_B_1, float CallFunc_BreakColor_A_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_BooleanOR_ReturnValue, float Temp_float_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInterface* Temp_object_Variable, float K2Node_Select_Default, class UMaterialInterface* Temp_object_Variable_1, class FText CallFunc_GetText_ReturnValue, bool Temp_bool_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default_1);
	void PreConstruct(bool IsDesignTime);
	void OnCategoryStateSet(enum class ESpatialCustomizationCategoryState State, const struct FLinearColor& StateColor);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SpatialCustomizationCategoryEntry(int32 EntryPoint, class USpatialCustomizationChoice_C* K2Node_DynamicCast_AsSpatial_Customization_Choice, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, enum class ESpatialCustomizationCategoryState K2Node_Event_State, const struct FLinearColor& K2Node_Event_StateColor, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class USpatialCustomizationChoice_C* K2Node_DynamicCast_AsSpatial_Customization_Choice_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


