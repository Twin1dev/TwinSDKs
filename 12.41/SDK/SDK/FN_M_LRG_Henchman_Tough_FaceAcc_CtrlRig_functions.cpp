#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass M_LRG_Henchman_Tough_FaceAcc_CtrlRig.M_LRG_Henchman_Tough_FaceAcc_CtrlRig_C
// (None)

class UClass* UM_LRG_Henchman_Tough_FaceAcc_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_LRG_Henchman_Tough_FaceAcc_CtrlRig_C");

	return Clss;
}


// M_LRG_Henchman_Tough_FaceAcc_CtrlRig_C M_LRG_Henchman_Tough_FaceAcc_CtrlRig.Default__M_LRG_Henchman_Tough_FaceAcc_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_LRG_Henchman_Tough_FaceAcc_CtrlRig_C* UM_LRG_Henchman_Tough_FaceAcc_CtrlRig_C::GetDefaultObj()
{
	static class UM_LRG_Henchman_Tough_FaceAcc_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_LRG_Henchman_Tough_FaceAcc_CtrlRig_C*>(UM_LRG_Henchman_Tough_FaceAcc_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


