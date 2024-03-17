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

// 0x20 (0x20 - 0x0)
// Function F_MED_ASN_Sarah_Head_01_Dyn_AnimBP.F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C.AnimGraph
struct UF_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function F_MED_ASN_Sarah_Head_01_Dyn_AnimBP.F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C.ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Dyn_AnimBP
struct UF_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


