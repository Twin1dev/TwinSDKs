#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Uncle_Swing1.CameraShake_Uncle_Swing1_C
// (None)

class UClass* UCameraShake_Uncle_Swing1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Uncle_Swing1_C");

	return Clss;
}


// CameraShake_Uncle_Swing1_C CameraShake_Uncle_Swing1.Default__CameraShake_Uncle_Swing1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Uncle_Swing1_C* UCameraShake_Uncle_Swing1_C::GetDefaultObj()
{
	static class UCameraShake_Uncle_Swing1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Uncle_Swing1_C*>(UCameraShake_Uncle_Swing1_C::StaticClass()->DefaultObject);

	return Default;
}

}


