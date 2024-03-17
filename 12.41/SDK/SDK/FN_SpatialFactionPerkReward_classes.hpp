#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x83 (0xC1B - 0xB98)
// WidgetBlueprintGeneratedClass SpatialFactionPerkReward.SpatialFactionPerkReward_C
class USpatialFactionPerkReward_C : public USpatialFactionPerkReward
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowBang;                                          // 0xBA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0xBA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Selected;                                          // 0xBB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Bang;                                       // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Content_Selected;                                  // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              HiddenContent;                                     // 0xBC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_206;                                         // 0xBD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Arrow_Bottom;                                // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Arrow_Top;                                   // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_REwardTile;                                  // 0xBE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SelectedBottom;                              // 0xBF0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SelectedTop_1;                               // 0xBF8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RevealedContent;                                   // 0xC00(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        RewardTile_1;                                      // 0xC08(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_Revealed;                                 // 0xC10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsTop;                                             // 0xC18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsSelected;                                        // 0xC19(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HideArrow;                                         // 0xC1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USpatialFactionPerkReward_C* GetDefaultObj();

	void OnLoaded_3DAD11EA474CE52F9A680ABB88B17B8D(class UObject* Loaded);
	void OnInitializePerkReward(int32 FactionNumber, int32 PerkLevel, TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bIsRevealed, bool bIsEarned, bool bIsCurrentFaction, bool bShowBang);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnDeselected();
	void PreConstruct(bool IsDesignTime);
	void SetPerkReward(int32 FactionNumber, int32 PerkLevel, TSoftObjectPtr<class UTexture2D> RewardTexture, bool IsRevealed, bool IsEarned, bool IsCurrentFaction);
	void HandleInputChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_SpatialFactionPerkReward(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, enum class ECommonInputType Temp_byte_Variable, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_8, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, int32 K2Node_Event_FactionNumber, int32 K2Node_Event_PerkLevel, TSoftObjectPtr<class UTexture2D> K2Node_Event_RewardTexture, bool K2Node_Event_bIsRevealed, bool K2Node_Event_bIsEarned, bool K2Node_Event_bIsCurrentFaction, bool K2Node_Event_bShowBang, bool Temp_bool_Variable_9, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, float Temp_float_Variable_4, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float Temp_float_Variable_5, bool Temp_bool_Variable_10, enum class ESlateVisibility Temp_byte_Variable_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_11, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_6, bool Temp_bool_Variable_12, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_8, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_CustomEvent_FactionNumber, int32 K2Node_CustomEvent_PerkLevel, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_RewardTexture, bool K2Node_CustomEvent_IsRevealed, bool K2Node_CustomEvent_IsEarned, bool K2Node_CustomEvent_IsCurrentFaction, enum class ESlateVisibility K2Node_Select_Default_2, float K2Node_Select_Default_3, float K2Node_Select_Default_4, float K2Node_Select_Default_5, const struct FLinearColor& K2Node_Select_Default_6, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor_3, const struct FLinearColor& K2Node_Select_Default_7, const struct FLinearColor& K2Node_Select_Default_8, bool Temp_bool_Variable_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidget* K2Node_Select_Default_9, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_Select_Default_10);
};

}


