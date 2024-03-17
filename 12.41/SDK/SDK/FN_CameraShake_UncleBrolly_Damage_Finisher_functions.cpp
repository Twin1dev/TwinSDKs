#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_UncleBrolly_Damage_Finisher.CameraShake_UncleBrolly_Damage_Finisher_C
// (None)

class UClass* UCameraShake_UncleBrolly_Damage_Finisher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_UncleBrolly_Damage_Finisher_C");

	return Clss;
}


// CameraShake_UncleBrolly_Damage_Finisher_C CameraShake_UncleBrolly_Damage_Finisher.Default__CameraShake_UncleBrolly_Damage_Finisher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_UncleBrolly_Damage_Finisher_C* UCameraShake_UncleBrolly_Damage_Finisher_C::GetDefaultObj()
{
	static class UCameraShake_UncleBrolly_Damage_Finisher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_UncleBrolly_Damage_Finisher_C*>(UCameraShake_UncleBrolly_Damage_Finisher_C::StaticClass()->DefaultObject);

	return Default;
}

}


