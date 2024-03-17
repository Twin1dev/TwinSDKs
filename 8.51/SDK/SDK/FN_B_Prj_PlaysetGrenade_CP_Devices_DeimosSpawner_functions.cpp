#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_PlaysetGrenade_CP_Devices_DeimosSpawner.B_Prj_PlaysetGrenade_CP_Devices_DeimosSpawner_C
// (Actor)

class UClass* AB_Prj_PlaysetGrenade_CP_Devices_DeimosSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_PlaysetGrenade_CP_Devices_DeimosSpawner_C");

	return Clss;
}


// B_Prj_PlaysetGrenade_CP_Devices_DeimosSpawner_C B_Prj_PlaysetGrenade_CP_Devices_DeimosSpawner.Default__B_Prj_PlaysetGrenade_CP_Devices_DeimosSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_PlaysetGrenade_CP_Devices_DeimosSpawner_C* AB_Prj_PlaysetGrenade_CP_Devices_DeimosSpawner_C::GetDefaultObj()
{
	static class AB_Prj_PlaysetGrenade_CP_Devices_DeimosSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_PlaysetGrenade_CP_Devices_DeimosSpawner_C*>(AB_Prj_PlaysetGrenade_CP_Devices_DeimosSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


