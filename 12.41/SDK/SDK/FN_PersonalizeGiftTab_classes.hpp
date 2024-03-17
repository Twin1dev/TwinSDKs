#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x340 - 0x338)
// WidgetBlueprintGeneratedClass PersonalizeGiftTab.PersonalizeGiftTab_C
class UPersonalizeGiftTab_C : public UFortPersonalizeGiftTab
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPersonalizeGiftTab_C* GetDefaultObj();

	void BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
	void BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void ExecuteUbergraph_PersonalizeGiftTab(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected);
};

}


