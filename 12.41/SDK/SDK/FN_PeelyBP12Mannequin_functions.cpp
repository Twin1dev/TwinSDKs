#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PeelyBP12Mannequin.PeelyBP12Mannequin_C
// (Actor)

class UClass* APeelyBP12Mannequin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PeelyBP12Mannequin_C");

	return Clss;
}


// PeelyBP12Mannequin_C PeelyBP12Mannequin.Default__PeelyBP12Mannequin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APeelyBP12Mannequin_C* APeelyBP12Mannequin_C::GetDefaultObj()
{
	static class APeelyBP12Mannequin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APeelyBP12Mannequin_C*>(APeelyBP12Mannequin_C::StaticClass()->DefaultObject);

	return Default;
}

}


