#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11A (0x34A - 0x230)
// WidgetBlueprintGeneratedClass BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C
class UBattlePassScreen_SideMessaging_NewTech_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimatePulse;                                      // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnIntro;                                           // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Backing;                                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BottomAngle;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  Messaging;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NewTechIcon;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pulse;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TopAngle;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         FlipAxis;                                          // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_510C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Skye;                                              // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Midas;                                             // 0x2A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Meowscles;                                         // 0x2B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  TNTina_Character;                                  // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  TNTina_Glider;                                     // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Brutus;                                            // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Maya;                                              // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Agent_Peely;                                       // 0x330(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bShown;                                            // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bItemHasNewTech;                                   // 0x349(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBattlePassScreen_SideMessaging_NewTech_C* GetDefaultObj();

	void SetTechText(const struct FGameplayTagContainer& NewParam, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_HasTag_ReturnValue_3, bool CallFunc_HasTag_ReturnValue_4, bool CallFunc_HasTag_ReturnValue_5, bool CallFunc_HasTag_ReturnValue_6);
	void Construct();
	void HandleItemSet(class UFortItemDefinition* NewItem);
	void HandleTrackShown();
	void HandleDetailsShown();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BattlePassScreen_SideMessaging_NewTech(int32 EntryPoint, const struct FVector2D& Temp_struct_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, bool Temp_bool_Variable_2, const struct FVector2D& Temp_struct_Variable_3, const struct FVector2D& Temp_struct_Variable_4, const struct FVector2D& Temp_struct_Variable_5, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, bool Temp_bool_Variable_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortItemDefinition* K2Node_CustomEvent_NewItem, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_HasTag_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FVector2D& K2Node_Select_Default, const struct FMargin& K2Node_Select_Default_1, const struct FVector2D& K2Node_Select_Default_2, const struct FVector2D& K2Node_Select_Default_3);
};

}


