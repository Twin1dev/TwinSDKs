#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraMode_Uncle_Dash.Athena_PlayerCameraMode_Uncle_Dash_C
// (None)

class UClass* UAthena_PlayerCameraMode_Uncle_Dash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraMode_Uncle_Dash_C");

	return Clss;
}


// Athena_PlayerCameraMode_Uncle_Dash_C Athena_PlayerCameraMode_Uncle_Dash.Default__Athena_PlayerCameraMode_Uncle_Dash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraMode_Uncle_Dash_C* UAthena_PlayerCameraMode_Uncle_Dash_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraMode_Uncle_Dash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraMode_Uncle_Dash_C*>(UAthena_PlayerCameraMode_Uncle_Dash_C::StaticClass()->DefaultObject);

	return Default;
}

}


