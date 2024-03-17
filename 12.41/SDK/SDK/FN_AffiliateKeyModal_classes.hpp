#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x528 - 0x460)
// WidgetBlueprintGeneratedClass AffiliateKeyModal.AffiliateKeyModal_C
class UAffiliateKeyModal_C : public UFortAffilateModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SuccessAnim;                                       // 0x468(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Shake;                                             // 0x470(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Check;                                             // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CloseButton;                                       // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                        CloseButton_Mobile;                                // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_2;                                 // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ConnectionError;                                   // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Description;                                       // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   EditTextActionWidget;                              // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EntryError;                                        // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ErrorPart2;                                        // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LaunchWebsite;                                     // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                McpWaitingSpinner;                                 // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FoundItem;                                         // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ConnectionTimeout;                                 // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPopupClosed;                                     // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bSkipAutoPopulate;                                 // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_6CEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAffiliateKeyModal_C* GetDefaultObj();

	void SetupAffiliateField(const class FString& AffilateName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetMobileButtons(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsUsingTouch_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnSet(bool bSuccess);
	void BP_OnActivated();
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnCheckComplete(bool bSuccess, bool bWasValidAffiliateName, const class FString& AffilateNameChecked);
	void OnInputModeChanged(bool bUsingGamepad);
	void Construct();
	void BndEvt__CloseButton_Mobile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void WidgetAnimationEvt_SuccessAnim_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_AffiliateKeyModal(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_GetAffiliateName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_2, const class FString& CallFunc_GetAffiliateName_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, TArray<class FString>& CallFunc_GetValidAffiliateNames_ReturnValue, bool K2Node_CustomEvent_bSuccess_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_3, const class FString& CallFunc_GetAffiliateName_ReturnValue_2, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetOverrideAffiliateDescriptionText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_2, class FText CallFunc_GetOverrideAffiliateErrorText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_TextIsEmpty_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_4, class FText CallFunc_GetText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_5, int32 CallFunc_Len_ReturnValue, class FText CallFunc_GetText_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_6, enum class ESlateVisibility Temp_byte_Variable_3, class FText CallFunc_GetText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_GetText_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_7, bool K2Node_CustomEvent_bSuccess, bool K2Node_CustomEvent_bWasValidAffiliateName, const class FString& K2Node_CustomEvent_AffilateNameChecked, class FText CallFunc_GetText_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_bUsingGamepad, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void OnSuccess__DelegateSignature();
	void OnPopupClosed__DelegateSignature();
};

}


