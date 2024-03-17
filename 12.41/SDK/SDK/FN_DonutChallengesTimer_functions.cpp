#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DonutChallengesTimer.DonutChallengesTimer_C
// (None)

class UClass* UDonutChallengesTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DonutChallengesTimer_C");

	return Clss;
}


// DonutChallengesTimer_C DonutChallengesTimer.Default__DonutChallengesTimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDonutChallengesTimer_C* UDonutChallengesTimer_C::GetDefaultObj()
{
	static class UDonutChallengesTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDonutChallengesTimer_C*>(UDonutChallengesTimer_C::StaticClass()->DefaultObject);

	return Default;
}

}


