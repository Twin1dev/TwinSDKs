#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbankSmall-M-Blue.TextStyle-BurbankSmall-M-Blue_C
// (None)

class UClass* UTextStyleMinusBurbankSmallMinusMMinusBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbankSmall-M-Blue_C");

	return Clss;
}


// TextStyle-BurbankSmall-M-Blue_C TextStyle-BurbankSmall-M-Blue.Default__TextStyle-BurbankSmall-M-Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbankSmallMinusMMinusBlue_C* UTextStyleMinusBurbankSmallMinusMMinusBlue_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbankSmallMinusMMinusBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbankSmallMinusMMinusBlue_C*>(UTextStyleMinusBurbankSmallMinusMMinusBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


