#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Countdown_Frontend_S12.BP_Countdown_Frontend_S12_C
// (Actor)

class UClass* ABP_Countdown_Frontend_S12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Countdown_Frontend_S12_C");

	return Clss;
}


// BP_Countdown_Frontend_S12_C BP_Countdown_Frontend_S12.Default__BP_Countdown_Frontend_S12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Countdown_Frontend_S12_C* ABP_Countdown_Frontend_S12_C::GetDefaultObj()
{
	static class ABP_Countdown_Frontend_S12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Countdown_Frontend_S12_C*>(ABP_Countdown_Frontend_S12_C::StaticClass()->DefaultObject);

	return Default;
}

}


