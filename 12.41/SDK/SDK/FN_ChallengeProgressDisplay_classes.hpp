#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x25C - 0x240)
// WidgetBlueprintGeneratedClass ChallengeProgressDisplay.ChallengeProgressDisplay_C
class UChallengeProgressDisplay_C : public UAthenaChallengeProgressBar
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SelectedHovered;                                   // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxProgressContainer;                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Text_Desired_Minimum_Width;                        // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UChallengeProgressDisplay_C* GetDefaultObj();

	void SelectedHoveredFunc(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ChallengeProgressDisplay(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


