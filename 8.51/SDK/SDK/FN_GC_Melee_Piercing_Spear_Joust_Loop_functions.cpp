#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Melee_Piercing_Spear_Joust_Loop.GC_Melee_Piercing_Spear_Joust_Loop_C
// (Actor)

class UClass* AGC_Melee_Piercing_Spear_Joust_Loop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Melee_Piercing_Spear_Joust_Loop_C");

	return Clss;
}


// GC_Melee_Piercing_Spear_Joust_Loop_C GC_Melee_Piercing_Spear_Joust_Loop.Default__GC_Melee_Piercing_Spear_Joust_Loop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_Melee_Piercing_Spear_Joust_Loop_C* AGC_Melee_Piercing_Spear_Joust_Loop_C::GetDefaultObj()
{
	static class AGC_Melee_Piercing_Spear_Joust_Loop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_Melee_Piercing_Spear_Joust_Loop_C*>(AGC_Melee_Piercing_Spear_Joust_Loop_C::StaticClass()->DefaultObject);

	return Default;
}

}


