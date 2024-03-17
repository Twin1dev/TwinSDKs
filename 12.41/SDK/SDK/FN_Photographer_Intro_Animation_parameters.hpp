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
// Function Photographer_Intro_Animation.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
struct USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2_Params
{
public:
	class ABP_Battlepass_LightSwitcher_C*        BP_Battlepass_LightSwitcher_Maproom;               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Photographer_Intro_Animation.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
struct USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params
{
public:
	class ABP_Battlepass_LightSwitcher_C*        BP_Battlepass_LightSwitcher_Adventure;             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Photographer_Intro_Animation.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
struct USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0_Params
{
public:
	class AFrontend_EventLevel_Camera_C*         Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_; // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Photographer_Intro_Animation.SequenceDirector_C.Camera_Root_Movement_(Setting_Nav_Camera_for_once_Sequence_Completes)_Event_0
struct USequenceDirector_C_Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes__Event_0_Params
{
public:
	class AFrontend_EventLevel_Camera_C*         Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_; // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStreamIn;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Photographer_Intro_Animation.SequenceDirector_C.BP_Battlepass_LightSwitcher_Adventure_Event_0
struct USequenceDirector_C_BP_Battlepass_LightSwitcher_Adventure_Event_0_Params
{
public:
	class ABP_Battlepass_LightSwitcher_C*        BP_Battlepass_LightSwitcher_Adventure;             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Photographer_Intro_Animation.SequenceDirector_C.BP_Battlepass_LightSwitcher_Maproom_Event_0
struct USequenceDirector_C_BP_Battlepass_LightSwitcher_Maproom_Event_0_Params
{
public:
	class ABP_Battlepass_LightSwitcher_C*        BP_Battlepass_LightSwitcher_Maproom;               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Photographer_Intro_Animation.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
struct USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_681A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Battlepass_LightSwitcher_C*        K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Maproom; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFrontend_EventLevel_Camera_C*         K2Node_CustomEvent_Camera_Root_Movement__Setting_Nav_Camera_for_once_Sequence_Completes_; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bStreamIn;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_681B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Battlepass_LightSwitcher_C*        K2Node_CustomEvent_BP_Battlepass_LightSwitcher_Adventure; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


