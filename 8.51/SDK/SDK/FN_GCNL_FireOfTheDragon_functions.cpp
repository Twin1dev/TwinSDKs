#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_FireOfTheDragon.GCNL_FireOfTheDragon_C
// (Actor)

class UClass* AGCNL_FireOfTheDragon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_FireOfTheDragon_C");

	return Clss;
}


// GCNL_FireOfTheDragon_C GCNL_FireOfTheDragon.Default__GCNL_FireOfTheDragon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_FireOfTheDragon_C* AGCNL_FireOfTheDragon_C::GetDefaultObj()
{
	static class AGCNL_FireOfTheDragon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_FireOfTheDragon_C*>(AGCNL_FireOfTheDragon_C::StaticClass()->DefaultObject);

	return Default;
}

}


