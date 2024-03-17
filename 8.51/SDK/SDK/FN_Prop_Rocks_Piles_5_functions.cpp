#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prop_Rocks_Piles_5.Prop_Rocks_Piles_5_C
// (Actor)

class UClass* AProp_Rocks_Piles_5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prop_Rocks_Piles_5_C");

	return Clss;
}


// Prop_Rocks_Piles_5_C Prop_Rocks_Piles_5.Default__Prop_Rocks_Piles_5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProp_Rocks_Piles_5_C* AProp_Rocks_Piles_5_C::GetDefaultObj()
{
	static class AProp_Rocks_Piles_5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProp_Rocks_Piles_5_C*>(AProp_Rocks_Piles_5_C::StaticClass()->DefaultObject);

	return Default;
}

}


