#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x300 - 0x2E0)
// WidgetBlueprintGeneratedClass FortCosmeticItemCard.FortCosmeticItemCard_C
class UFortCosmeticItemCard_C : public UFortCosmeticItemCard
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimMinusHover;                                    // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ImageMaterial_NewItemCard;                         // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFortCosmeticItemCard_C* GetDefaultObj();

	void HandleUpdateRarity(const struct FFortColorPalette& RarityColors, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void HandleUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool IsHero, bool IsReward, bool IsShuffleItem, class UMaterialInstanceDynamic* ItemDynamicMaterial, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_3, float CallFunc_Conv_BoolToFloat_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void UpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool bIsHero, bool bReward, bool bIsShuffleItem);
	void OnCardTypeChanged(bool bUseNewItemCard);
	void OnUpdateEnhanced(bool bEnhanced);
	void OnUpdateItemCardMaterial(class UMaterialInterface* Material);
	void OnUpdateItemCardIcon(TSoftObjectPtr<class UTexture2D>& Icon);
	void OnUpdateSeriesOrRarityColors(struct FFortColorPalette& ColorPalette);
	void OnSizeChanged(float InCardWidth);
	void OnHover();
	void OnUnhover();
	void ExecuteUbergraph_FortCosmeticItemCard(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_bUseNewItemCard, bool K2Node_Event_bEnhanced, class UMaterialInterface* K2Node_Event_Material, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, TSoftObjectPtr<class UTexture2D> K2Node_Event_Icon, const struct FFortColorPalette& K2Node_Event_ColorPalette, bool K2Node_Event_bIsItem, bool K2Node_Event_bIsBorderAnimated, bool K2Node_Event_bIsHero, bool K2Node_Event_bReward, bool K2Node_Event_bIsShuffleItem, float K2Node_Event_InCardWidth, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue, class UWidget* K2Node_Select_Default);
};

}


