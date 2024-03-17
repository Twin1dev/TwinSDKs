#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x358 - 0x258)
// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C
class UAthenaCustomizationSlotButtonWrapper_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Populate;                                          // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButton_C*      SlotButton;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  BannerDisplayName;                                 // 0x270(0x18)(Edit, BlueprintVisible)
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSlotClicked;                                     // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotHovered;                                     // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  CategoryDescription;                               // 0x2B0(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            OnSlotUnhovered;                                   // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        SubslotIndex;                                      // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBangType                     BangType;                                          // 0x2DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowUnownedItems;                                // 0x2DD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bOneItemPerSlot;                                   // 0x2DE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6F53[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     OverrideSlotImage;                                 // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RequiredSlotTag;                                   // 0x2E8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class FText                                  NoCosmeticWarning;                                 // 0x2F0(0x18)(Edit, BlueprintVisible)
	class FText                                  SlotInactiveWarning;                               // 0x308(0x18)(Edit, BlueprintVisible)
	float                                        SlottedItemCardWidth;                              // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UObject>                SlotLazyImage;                                     // 0x328(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UTexture2D*                            Emptytexture;                                      // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaCustomizationSlotButtonWrapper_C* GetDefaultObj();

	void ResetPopulateAnimVisual(float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetCardImage(TSoftObjectPtr<class UObject> InImage);
	void GetCustomizationSlotActiveState(bool* bCosmeticAvaialble, bool* bActive, bool CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable, bool CallFunc_GetCustomizationSlotActiveState_bOutActive);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void AnimPopulateInternal(int32 ButtonIndex);
	void ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_CanShowLockerSlotType_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, const struct FAthenaCustomizationParams& K2Node_MakeStruct_AthenaCustomizationParams, int32 K2Node_CustomEvent_ButtonIndex, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue);
	void OnSlotUnhovered__DelegateSignature();
	void OnSlotHovered__DelegateSignature(class UAthenaCustomizationSlotButtonWrapper_C* ButtonWrapper, enum class EAthenaCustomizationCategory CustomizationType, class FText BannerLabel, class FText CustomizationDescription, int32 SubslotIndex);
	void OnSlotClicked__DelegateSignature(class UCommonButton* Button, const struct FAthenaCustomizationParams& CustomizationParams);
};

}


