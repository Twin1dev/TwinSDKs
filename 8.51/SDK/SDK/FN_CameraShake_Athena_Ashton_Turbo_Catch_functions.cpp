#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Athena_Ashton_Turbo_Catch.CameraShake_Athena_Ashton_Turbo_Catch_C
// (None)

class UClass* UCameraShake_Athena_Ashton_Turbo_Catch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Athena_Ashton_Turbo_Catch_C");

	return Clss;
}


// CameraShake_Athena_Ashton_Turbo_Catch_C CameraShake_Athena_Ashton_Turbo_Catch.Default__CameraShake_Athena_Ashton_Turbo_Catch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Athena_Ashton_Turbo_Catch_C* UCameraShake_Athena_Ashton_Turbo_Catch_C::GetDefaultObj()
{
	static class UCameraShake_Athena_Ashton_Turbo_Catch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Athena_Ashton_Turbo_Catch_C*>(UCameraShake_Athena_Ashton_Turbo_Catch_C::StaticClass()->DefaultObject);

	return Default;
}

}


