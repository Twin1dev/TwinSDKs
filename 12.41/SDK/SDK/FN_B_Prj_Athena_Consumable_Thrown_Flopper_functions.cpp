#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_Athena_Consumable_Thrown_Flopper.B_Prj_Athena_Consumable_Thrown_Flopper_C
// (Actor)

class UClass* AB_Prj_Athena_Consumable_Thrown_Flopper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_Athena_Consumable_Thrown_Flopper_C");

	return Clss;
}


// B_Prj_Athena_Consumable_Thrown_Flopper_C B_Prj_Athena_Consumable_Thrown_Flopper.Default__B_Prj_Athena_Consumable_Thrown_Flopper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_Athena_Consumable_Thrown_Flopper_C* AB_Prj_Athena_Consumable_Thrown_Flopper_C::GetDefaultObj()
{
	static class AB_Prj_Athena_Consumable_Thrown_Flopper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_Athena_Consumable_Thrown_Flopper_C*>(AB_Prj_Athena_Consumable_Thrown_Flopper_C::StaticClass()->DefaultObject);

	return Default;
}

}


