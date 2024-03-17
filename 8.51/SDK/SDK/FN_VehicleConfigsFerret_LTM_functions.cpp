#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VehicleConfigsFerret_LTM.VehicleConfigsFerret_LTM_C
// (None)

class UClass* UVehicleConfigsFerret_LTM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleConfigsFerret_LTM_C");

	return Clss;
}


// VehicleConfigsFerret_LTM_C VehicleConfigsFerret_LTM.Default__VehicleConfigsFerret_LTM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicleConfigsFerret_LTM_C* UVehicleConfigsFerret_LTM_C::GetDefaultObj()
{
	static class UVehicleConfigsFerret_LTM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleConfigsFerret_LTM_C*>(UVehicleConfigsFerret_LTM_C::StaticClass()->DefaultObject);

	return Default;
}

}


