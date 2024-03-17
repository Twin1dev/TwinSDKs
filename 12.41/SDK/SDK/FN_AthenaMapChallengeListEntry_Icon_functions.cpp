#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMapChallengeListEntry_Icon.AthenaMapChallengeListEntry_Icon_C
// (None)

class UClass* UAthenaMapChallengeListEntry_Icon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMapChallengeListEntry_Icon_C");

	return Clss;
}


// AthenaMapChallengeListEntry_Icon_C AthenaMapChallengeListEntry_Icon.Default__AthenaMapChallengeListEntry_Icon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMapChallengeListEntry_Icon_C* UAthenaMapChallengeListEntry_Icon_C::GetDefaultObj()
{
	static class UAthenaMapChallengeListEntry_Icon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMapChallengeListEntry_Icon_C*>(UAthenaMapChallengeListEntry_Icon_C::StaticClass()->DefaultObject);

	return Default;
}

}


