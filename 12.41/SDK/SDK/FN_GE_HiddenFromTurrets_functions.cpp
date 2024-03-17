#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HiddenFromTurrets.GE_HiddenFromTurrets_C
// (None)

class UClass* UGE_HiddenFromTurrets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HiddenFromTurrets_C");

	return Clss;
}


// GE_HiddenFromTurrets_C GE_HiddenFromTurrets.Default__GE_HiddenFromTurrets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HiddenFromTurrets_C* UGE_HiddenFromTurrets_C::GetDefaultObj()
{
	static class UGE_HiddenFromTurrets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HiddenFromTurrets_C*>(UGE_HiddenFromTurrets_C::StaticClass()->DefaultObject);

	return Default;
}

}


