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
// Function F_MED_Desert_Ops_Camo_AnimBP.F_MED_Desert_Ops_Camo_AnimBP_C.AnimGraph
struct UF_MED_Desert_Ops_Camo_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function F_MED_Desert_Ops_Camo_AnimBP.F_MED_Desert_Ops_Camo_AnimBP_C.ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP
struct UF_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6237[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue; // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


