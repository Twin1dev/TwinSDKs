#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2B0 - 0x288)
// WidgetBlueprintGeneratedClass BattlePass_Door_LeftPanel.BattlePass_Door_LeftPanel_C
class UBattlePass_Door_LeftPanel_C : public UFortEventLevelNavigationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFakeStatsGraphs_C*                    FakeStatsGraphs_Bottom;                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFakeStatsGraphs_C*                    FakeStatsGraphs_Top;                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LevelHeaderText;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LevelNumber;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBattlePass_Door_LeftPanel_C* GetDefaultObj();

	void SetDoorPanelStyle(bool Purchased, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, bool Temp_bool_Variable_2, class UObject* K2Node_Select_Default_1, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, bool Temp_bool_Variable_3, class UObject* K2Node_Select_Default_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UObject* Temp_object_Variable_4, class UObject* Temp_object_Variable_5, bool Temp_bool_Variable_4, class UObject* K2Node_Select_Default_3, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, class UObject* Temp_object_Variable_6, class UObject* Temp_object_Variable_7, const struct FLinearColor& Temp_struct_Variable_3, class UObject* K2Node_Select_Default_4, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, bool Temp_bool_Variable_5, const struct FLinearColor& K2Node_Select_Default_5);
	void SetStyleUnpurchased(class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue_1);
	void InitLevel(int32 Level);
	void ExecuteUbergraph_BattlePass_Door_LeftPanel(int32 EntryPoint, int32 K2Node_CustomEvent_Level, class FText CallFunc_Conv_IntToText_ReturnValue);
};

}


