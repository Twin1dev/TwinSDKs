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

// 0x10 (0x10 - 0x0)
// Function M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C.AnimGraph
struct UM_LRG_Buff_Cat_AnimBp_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C.OnNotifyPartsStarted
struct UM_LRG_Buff_Cat_AnimBp_C_OnNotifyPartsStarted_Params
{
public:
	class FName                                  Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C.OnNotifyPartsStopped
struct UM_LRG_Buff_Cat_AnimBp_C_OnNotifyPartsStopped_Params
{
public:
	class FName                                  Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function M_LRG_Buff_Cat_AnimBp.M_LRG_Buff_Cat_AnimBp_C.ExecuteUbergraph_M_LRG_Buff_Cat_AnimBp
struct UM_LRG_Buff_Cat_AnimBp_C_ExecuteUbergraph_M_LRG_Buff_Cat_AnimBp_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_Context_1;                            // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_Context;                              // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


