#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass M_LRG_Buff_Cat_CrtlRig.M_LRG_Buff_Cat_CrtlRig_C
// (None)

class UClass* UM_LRG_Buff_Cat_CrtlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_LRG_Buff_Cat_CrtlRig_C");

	return Clss;
}


// M_LRG_Buff_Cat_CrtlRig_C M_LRG_Buff_Cat_CrtlRig.Default__M_LRG_Buff_Cat_CrtlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_LRG_Buff_Cat_CrtlRig_C* UM_LRG_Buff_Cat_CrtlRig_C::GetDefaultObj()
{
	static class UM_LRG_Buff_Cat_CrtlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_LRG_Buff_Cat_CrtlRig_C*>(UM_LRG_Buff_Cat_CrtlRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


