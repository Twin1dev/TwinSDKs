#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x390 - 0x368)
// WidgetBlueprintGeneratedClass LoginResultWIdget.LoginResultWIdget_C
class ULoginResultWIdget_C : public UFortLoginResultWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                   RetryAction;                                       // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Restart_Action;                                    // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ULoginResultWIdget_C* GetDefaultObj();

	void SetForceQuitButtons(bool bForceQuit);
	void ExecuteUbergraph_LoginResultWIdget(int32 EntryPoint, bool K2Node_Event_bForceQuit, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1);
};

}


