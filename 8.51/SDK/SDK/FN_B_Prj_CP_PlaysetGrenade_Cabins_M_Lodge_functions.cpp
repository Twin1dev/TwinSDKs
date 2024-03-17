#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_CP_PlaysetGrenade_Cabins_M_Lodge.B_Prj_CP_PlaysetGrenade_Cabins_M_Lodge_C
// (Actor)

class UClass* AB_Prj_CP_PlaysetGrenade_Cabins_M_Lodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_CP_PlaysetGrenade_Cabins_M_Lodge_C");

	return Clss;
}


// B_Prj_CP_PlaysetGrenade_Cabins_M_Lodge_C B_Prj_CP_PlaysetGrenade_Cabins_M_Lodge.Default__B_Prj_CP_PlaysetGrenade_Cabins_M_Lodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_CP_PlaysetGrenade_Cabins_M_Lodge_C* AB_Prj_CP_PlaysetGrenade_Cabins_M_Lodge_C::GetDefaultObj()
{
	static class AB_Prj_CP_PlaysetGrenade_Cabins_M_Lodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_CP_PlaysetGrenade_Cabins_M_Lodge_C*>(AB_Prj_CP_PlaysetGrenade_Cabins_M_Lodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


