#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Uncle_Swing4.CameraShake_Uncle_Swing4_C
// (None)

class UClass* UCameraShake_Uncle_Swing4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Uncle_Swing4_C");

	return Clss;
}


// CameraShake_Uncle_Swing4_C CameraShake_Uncle_Swing4.Default__CameraShake_Uncle_Swing4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Uncle_Swing4_C* UCameraShake_Uncle_Swing4_C::GetDefaultObj()
{
	static class UCameraShake_Uncle_Swing4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Uncle_Swing4_C*>(UCameraShake_Uncle_Swing4_C::StaticClass()->DefaultObject);

	return Default;
}

}


