#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCollisionStaticMesh
struct ABP_Creative_Billboard_C_GetCollisionStaticMesh_Params
{
public:
	class UStaticMesh*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetMeshComponents
struct ABP_Creative_Billboard_C_GetMeshComponents_Params
{
public:
	TArray<class UMeshComponent*>                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference)
	TArray<class UMeshComponent*>                K2Node_MakeArray_Array;                            // 0x10(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// 0x11 (0x11 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextFont
struct ABP_Creative_Billboard_C_SetTextFont_Params
{
public:
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCreative_Background_Widget_C*         K2Node_DynamicCast_AsCreative_Background_Widget;   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetVisibilityBasedOnState
struct ABP_Creative_Billboard_C_SetVisibilityBasedOnState_Params
{
public:
	enum class EFortMinigameState                MinigameState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMinigameState                CachedMinigameState;                               // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextVisibility
struct ABP_Creative_Billboard_C_SetTextVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCreative_Background_Widget_C*         K2Node_DynamicCast_AsCreative_Background_Widget;   // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetViewDistance
struct ABP_Creative_Billboard_C_SetViewDistance_Params
{
public:
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextColor
struct ABP_Creative_Billboard_C_SetTextColor_Params
{
public:
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCreative_Background_Widget_C*         K2Node_DynamicCast_AsCreative_Background_Widget;   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x288 (0x288 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.UpdateProperties
struct ABP_Creative_Billboard_C_UpdateProperties_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57C1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x48(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ColorToText_ReturnValue;             // 0x88(0x18)(None)
	class FString                                CallFunc_Conv_ByteToString_ReturnValue;            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0xB0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xF0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x108(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ColorToText_ReturnValue_1;           // 0x148(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x160(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue;              // 0x1A0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x1B8(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1F8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_6;            // 0x210(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x250(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x260(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x278(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextAlignment
struct ABP_Creative_Billboard_C_SetTextAlignment_Params
{
public:
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCreative_Background_Widget_C*         K2Node_DynamicCast_AsCreative_Background_Widget;   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextSize
struct ABP_Creative_Billboard_C_SetTextSize_Params
{
public:
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCreative_Background_Widget_C*         K2Node_DynamicCast_AsCreative_Background_Widget;   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetDisplayText
struct ABP_Creative_Billboard_C_SetDisplayText_Params
{
public:
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCreative_Background_Widget_C*         K2Node_DynamicCast_AsCreative_Background_Widget;   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetBackgroundColor
struct ABP_Creative_Billboard_C_SetBackgroundColor_Params
{
public:
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCreative_Background_Widget_C*         K2Node_DynamicCast_AsCreative_Background_Widget;   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue_1;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCreative_Background_Widget_C*         K2Node_DynamicCast_AsCreative_Background_Widget_1; // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature_Params
{
public:
	class AController*                           TriggerInstigator;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature_Params
{
public:
	class AController*                           TriggerInstigator;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMinigameState                NewMinigameState;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Play Mode Changed
struct ABP_Creative_Billboard_C_Play_Mode_Changed_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInPlayMode;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__VisibleInGameComponent_K2Node_ComponentBoundEvent_6_On Visibility Changed__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__VisibleInGameComponent_K2Node_ComponentBoundEvent_6_On_Visibility_Changed__DelegateSignature_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10C (0x10C - 0x0)
// Function BP_Creative_Billboard.BP_Creative_Billboard_C.ExecuteUbergraph_BP_Creative_Billboard
struct ABP_Creative_Billboard_C_ExecuteUbergraph_BP_Creative_Billboard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionEnabled                 Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionEnabled                 Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECollisionResponse                Temp_byte_Variable_2;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECollisionResponse                Temp_byte_Variable_3;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionResponse                Temp_byte_Variable_4;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EVisibleInGameState               Temp_byte_Variable_5;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVisibleInGameState               Temp_byte_Variable_6;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57C3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_ComponentBoundEvent_TriggerInstigator_1;    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_ComponentBoundEvent_TriggerInstigator;      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMinigame*                         K2Node_ComponentBoundEvent_Minigame_1;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMinigameState                K2Node_ComponentBoundEvent_NewMinigameState;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortMinigame*                         K2Node_ComponentBoundEvent_Minigame;               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable_4;                              // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortMinigame*                         K2Node_CustomEvent_Minigame;                       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsInPlayMode;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECollisionEnabled                 K2Node_Select_Default;                             // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInPlayMode_ReturnValue;                 // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57C7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               K2Node_MakeArray_Array;                            // 0x60(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	enum class ECollisionResponse                K2Node_Select_Default_1;                           // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionResponse                K2Node_Select_Default_2;                           // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_Visible;                // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EVisibleInGameState               K2Node_Select_Default_3;                           // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_Select_Default_4;                           // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x80(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}


