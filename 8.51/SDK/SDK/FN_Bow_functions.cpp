#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bow.Bow_C
// (Actor)

class UClass* ABow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bow_C");

	return Clss;
}


// Bow_C Bow.Default__Bow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABow_C* ABow_C::GetDefaultObj()
{
	static class ABow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABow_C*>(ABow_C::StaticClass()->DefaultObject);

	return Default;
}

}


