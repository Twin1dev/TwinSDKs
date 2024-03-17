#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xC50 - 0xBA0)
// BlueprintGeneratedClass BP_Creative_Billboard.BP_Creative_Billboard_C
class ABP_Creative_Billboard_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCreative_VisibleInGame_Component_C*   VisibleInGameComponent;                            // 0xBA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameLogicComponent*           FortMinigameLogic;                                 // 0xBB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayReceiverMessageComponent* HideTextReceiverComponent;                         // 0xBB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayReceiverMessageComponent* ShowTextReceiverComponent;                         // 0xBC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         ToolPickingBox;                                    // 0xBC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0xBD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Background;                                        // 0xBD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FString                                UserDefinedText;                                   // 0xBE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bShowBorder;                                       // 0xBF0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_57C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BackgroundColor;                                   // 0xBF4(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	enum class ETextJustify                      HorizontalTextAlignment;                           // 0xC04(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextSize;                                          // 0xC08(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        ViewDistance;                                      // 0xC0C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAlwaysFaceCamera;                                 // 0xC10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasInRangeLastCheck;                               // 0xC11(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57CA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BackgroundColorOverride;                           // 0xC14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TextColor;                                         // 0xC18(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTextVisible;                                    // 0xC28(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_57CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnabledIndex;                                      // 0xC2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TextFont;                                          // 0xC30(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Debug_Text;                                   // 0xC34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              BackgroundRelativeRotationWithBorder;              // 0xC38(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              BackgroundRelativeRotationWithoutBorder;           // 0xC44(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Creative_Billboard_C* GetDefaultObj();

	class UStaticMesh* GetCollisionStaticMesh();
	TArray<class UMeshComponent*> GetMeshComponents(TArray<class UMeshComponent*>& K2Node_MakeArray_Array);
	void SetTextFont(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void OnRep_TextFont();
	void SetVisibilityBasedOnState(enum class EFortMinigameState MinigameState, enum class EFortMinigameState CachedMinigameState, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void OnRep_bIsTextVisible();
	void SetTextVisibility(bool Visible, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void OnRep_TextColor();
	void OnRep_TextSize();
	void OnRep_HorizontalTextAlignment();
	void OnRep_BackgroundColor();
	void OnRep_bShowBorder();
	void SetViewDistance(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void SetTextColor(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void UpdateProperties(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_ColorToText_ReturnValue, const class FString& CallFunc_Conv_ByteToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_ColorToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetTextAlignment(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void SetTextSize(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void SetDisplayText(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void SetBackgroundColor(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget_1, bool K2Node_DynamicCast_bSuccess_1);
	void PostUpdateProperties();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature(class AController* TriggerInstigator);
	void BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature(class AController* TriggerInstigator);
	void BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature(class AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState);
	void BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame);
	void Play_Mode_Changed(class AFortMinigame* Minigame, bool bIsInPlayMode);
	void Update_Static_Mesh_Component_Visibility_Options();
	void BndEvt__VisibleInGameComponent_K2Node_ComponentBoundEvent_6_On_Visibility_Changed__DelegateSignature(bool Visible);
	void OnWorldReady();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Creative_Billboard(int32 EntryPoint, enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ECollisionResponse Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ECollisionResponse Temp_byte_Variable_3, enum class ECollisionResponse Temp_byte_Variable_4, bool Temp_bool_Variable_2, enum class EVisibleInGameState Temp_byte_Variable_5, enum class EVisibleInGameState Temp_byte_Variable_6, bool Temp_bool_Variable_3, class AController* K2Node_ComponentBoundEvent_TriggerInstigator_1, class AController* K2Node_ComponentBoundEvent_TriggerInstigator, class AFortMinigame* K2Node_ComponentBoundEvent_Minigame_1, enum class EFortMinigameState K2Node_ComponentBoundEvent_NewMinigameState, class AFortMinigame* K2Node_ComponentBoundEvent_Minigame, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_4, class AFortMinigame* K2Node_CustomEvent_Minigame, bool K2Node_CustomEvent_bIsInPlayMode, enum class ECollisionEnabled K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInPlayMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, TArray<class USceneComponent*>& K2Node_MakeArray_Array, enum class ECollisionResponse K2Node_Select_Default_1, enum class ECollisionResponse K2Node_Select_Default_2, bool K2Node_ComponentBoundEvent_Visible, enum class EVisibleInGameState K2Node_Select_Default_3, const struct FRotator& K2Node_Select_Default_4, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}


