#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DonutChallengesProgressBar.DonutChallengesProgressBar_C
// (None)

class UClass* UDonutChallengesProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DonutChallengesProgressBar_C");

	return Clss;
}


// DonutChallengesProgressBar_C DonutChallengesProgressBar.Default__DonutChallengesProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDonutChallengesProgressBar_C* UDonutChallengesProgressBar_C::GetDefaultObj()
{
	static class UDonutChallengesProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDonutChallengesProgressBar_C*>(UDonutChallengesProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


