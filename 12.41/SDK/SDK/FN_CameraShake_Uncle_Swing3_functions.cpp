#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Uncle_Swing3.CameraShake_Uncle_Swing3_C
// (None)

class UClass* UCameraShake_Uncle_Swing3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Uncle_Swing3_C");

	return Clss;
}


// CameraShake_Uncle_Swing3_C CameraShake_Uncle_Swing3.Default__CameraShake_Uncle_Swing3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Uncle_Swing3_C* UCameraShake_Uncle_Swing3_C::GetDefaultObj()
{
	static class UCameraShake_Uncle_Swing3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Uncle_Swing3_C*>(UCameraShake_Uncle_Swing3_C::StaticClass()->DefaultObject);

	return Default;
}

}


