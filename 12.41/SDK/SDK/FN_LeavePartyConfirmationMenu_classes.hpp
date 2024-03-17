#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x330 - 0x320)
// WidgetBlueprintGeneratedClass LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C
class ULeavePartyConfirmationMenu_C : public UFortLeavePartyMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Opened;                                            // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULeavePartyConfirmationMenu_C* GetDefaultObj();

	void OnOpened();
	void ExecuteUbergraph_LeavePartyConfirmationMenu(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


