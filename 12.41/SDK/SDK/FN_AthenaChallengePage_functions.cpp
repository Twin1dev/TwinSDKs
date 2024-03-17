#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaChallengePage.AthenaChallengePage_C
// (None)

class UClass* UAthenaChallengePage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaChallengePage_C");

	return Clss;
}


// AthenaChallengePage_C AthenaChallengePage.Default__AthenaChallengePage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaChallengePage_C* UAthenaChallengePage_C::GetDefaultObj()
{
	static class UAthenaChallengePage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaChallengePage_C*>(UAthenaChallengePage_C::StaticClass()->DefaultObject);

	return Default;
}

}


