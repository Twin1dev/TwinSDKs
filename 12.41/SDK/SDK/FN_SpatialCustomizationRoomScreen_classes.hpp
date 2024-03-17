#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x440 - 0x3F8)
// WidgetBlueprintGeneratedClass SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C
class USpatialCustomizationRoomScreen_C : public UAthenaSpatialCustomizationRoom
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPS12_AboutModal_C*                   BPS12_AboutModal;                                  // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoloButton_C*                         Button_About;                                      // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Customization;                             // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Dummy;                                     // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_MobileClose;                               // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_buttons;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      Switcher_CustomizationState;                       // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget*                               WidgetToRestore;                                   // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USpatialCustomizationRoomScreen_C* GetDefaultObj();

	void HandeRoomStateChanged(enum class ESpatialCustomizationRoomState CurrentRoomState, enum class ESpatialCustomizationRoomState PreviousRoomState, enum class ESpatialCustomizationRoomState Temp_byte_Variable, class UWidget* K2Node_Select_Default);
	void OnRoomStateChanged(enum class ESpatialCustomizationRoomState CurrentRoomState, enum class ESpatialCustomizationRoomState PreviousRoomState);
	void BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnShowFirstTimeInfo();
	void BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_2_OnAboutModalClosedDynamic__DelegateSignature();
	void ExecuteUbergraph_SpatialCustomizationRoomScreen(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESpatialCustomizationRoomState K2Node_Event_CurrentRoomState, enum class ESpatialCustomizationRoomState K2Node_Event_PreviousRoomState);
};

}


