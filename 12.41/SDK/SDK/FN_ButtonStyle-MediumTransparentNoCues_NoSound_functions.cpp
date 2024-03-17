#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-MediumTransparentNoCues_NoSound.ButtonStyle-MediumTransparentNoCues_NoSound_C
// (None)

class UClass* UButtonStyleMinusMediumTransparentNoCues_NoSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-MediumTransparentNoCues_NoSound_C");

	return Clss;
}


// ButtonStyle-MediumTransparentNoCues_NoSound_C ButtonStyle-MediumTransparentNoCues_NoSound.Default__ButtonStyle-MediumTransparentNoCues_NoSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusMediumTransparentNoCues_NoSound_C* UButtonStyleMinusMediumTransparentNoCues_NoSound_C::GetDefaultObj()
{
	static class UButtonStyleMinusMediumTransparentNoCues_NoSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusMediumTransparentNoCues_NoSound_C*>(UButtonStyleMinusMediumTransparentNoCues_NoSound_C::StaticClass()->DefaultObject);

	return Default;
}

}


