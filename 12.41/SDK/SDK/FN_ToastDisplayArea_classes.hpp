#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2B8 - 0x2A0)
// WidgetBlueprintGeneratedClass ToastDisplayArea.ToastDisplayArea_C
class UToastDisplayArea_C : public UFortToastDisplayArea
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USafeZone*                             SafeZone_0;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFriendSubscriptionToastWidget_C*      NewVar_0;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UToastDisplayArea_C* GetDefaultObj();

	void AttemptDisplayNextToast();
	void BndEvt__ToastWidget_New_K2Node_ComponentBoundEvent_9_OnFinishedToast__DelegateSignature();
	void BndEvt__ToastWidget_MinorError_K2Node_ComponentBoundEvent_3_OnFinishedToast__DelegateSignature();
	void BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_0_OnToastFinished__DelegateSignature();
	void BndEvt__VoiceChannelChangePopup_K2Node_ComponentBoundEvent_1_OnToastDisplayFinished__DelegateSignature();
	void OnDisplayToast(class UFortUINotification* NewToast);
	void BndEvt__SubscribeToastWidget_K2Node_ComponentBoundEvent_2_OnToastFinished__DelegateSignature();
	void BndEvt__ToastWidgetDonut_K2Node_ComponentBoundEvent_4_OnFinishedToast__DelegateSignature();
	void TestFrontendToast();
	void ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint, class UFortUINotification* K2Node_Event_NewToast, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UToastWidget_New_C* K2Node_DynamicCast_AsToast_Widget_New, bool K2Node_DynamicCast_bSuccess, class UToastWidget_MinorError_C* K2Node_DynamicCast_AsToast_Widget_Minor_Error, bool K2Node_DynamicCast_bSuccess_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortPlayerPowerRatingToast* K2Node_DynamicCast_AsFort_Player_Power_Rating_Toast, bool K2Node_DynamicCast_bSuccess_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_LessEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UToastWidgetDonut_C* K2Node_DynamicCast_AsToast_Widget_Donut, bool K2Node_DynamicCast_bSuccess_3);
};

}


