#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_Pink.ButtonStyle-Skew_Pink_C
// (None)

class UClass* UButtonStyleMinusSkew_Pink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_Pink_C");

	return Clss;
}


// ButtonStyle-Skew_Pink_C ButtonStyle-Skew_Pink.Default__ButtonStyle-Skew_Pink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_Pink_C* UButtonStyleMinusSkew_Pink_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_Pink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_Pink_C*>(UButtonStyleMinusSkew_Pink_C::StaticClass()->DefaultObject);

	return Default;
}

}


