#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_CP_PlaysetGrenade_Props_S_Nature_k.B_Prj_CP_PlaysetGrenade_Props_S_Nature_k_C
// (Actor)

class UClass* AB_Prj_CP_PlaysetGrenade_Props_S_Nature_k_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_CP_PlaysetGrenade_Props_S_Nature_k_C");

	return Clss;
}


// B_Prj_CP_PlaysetGrenade_Props_S_Nature_k_C B_Prj_CP_PlaysetGrenade_Props_S_Nature_k.Default__B_Prj_CP_PlaysetGrenade_Props_S_Nature_k_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_CP_PlaysetGrenade_Props_S_Nature_k_C* AB_Prj_CP_PlaysetGrenade_Props_S_Nature_k_C::GetDefaultObj()
{
	static class AB_Prj_CP_PlaysetGrenade_Props_S_Nature_k_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_CP_PlaysetGrenade_Props_S_Nature_k_C*>(AB_Prj_CP_PlaysetGrenade_Props_S_Nature_k_C::StaticClass()->DefaultObject);

	return Default;
}

}


