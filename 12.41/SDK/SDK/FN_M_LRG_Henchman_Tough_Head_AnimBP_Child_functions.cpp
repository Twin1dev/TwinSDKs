#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass M_LRG_Henchman_Tough_Head_AnimBP_Child.M_LRG_Henchman_Tough_Head_AnimBP_Child_C
// (None)

class UClass* UM_LRG_Henchman_Tough_Head_AnimBP_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("M_LRG_Henchman_Tough_Head_AnimBP_Child_C");

	return Clss;
}


// M_LRG_Henchman_Tough_Head_AnimBP_Child_C M_LRG_Henchman_Tough_Head_AnimBP_Child.Default__M_LRG_Henchman_Tough_Head_AnimBP_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM_LRG_Henchman_Tough_Head_AnimBP_Child_C* UM_LRG_Henchman_Tough_Head_AnimBP_Child_C::GetDefaultObj()
{
	static class UM_LRG_Henchman_Tough_Head_AnimBP_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM_LRG_Henchman_Tough_Head_AnimBP_Child_C*>(UM_LRG_Henchman_Tough_Head_AnimBP_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


