#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_FireOfTheDragon.GCN_FireOfTheDragon_C
// (None)

class UClass* UGCN_FireOfTheDragon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_FireOfTheDragon_C");

	return Clss;
}


// GCN_FireOfTheDragon_C GCN_FireOfTheDragon.Default__GCN_FireOfTheDragon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_FireOfTheDragon_C* UGCN_FireOfTheDragon_C::GetDefaultObj()
{
	static class UGCN_FireOfTheDragon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_FireOfTheDragon_C*>(UGCN_FireOfTheDragon_C::StaticClass()->DefaultObject);

	return Default;
}

}


