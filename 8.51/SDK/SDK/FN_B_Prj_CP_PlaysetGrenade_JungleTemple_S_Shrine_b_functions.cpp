#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_CP_PlaysetGrenade_JungleTemple_S_Shrine_b.B_Prj_CP_PlaysetGrenade_JungleTemple_S_Shrine_b_C
// (Actor)

class UClass* AB_Prj_CP_PlaysetGrenade_JungleTemple_S_Shrine_b_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_CP_PlaysetGrenade_JungleTemple_S_Shrine_b_C");

	return Clss;
}


// B_Prj_CP_PlaysetGrenade_JungleTemple_S_Shrine_b_C B_Prj_CP_PlaysetGrenade_JungleTemple_S_Shrine_b.Default__B_Prj_CP_PlaysetGrenade_JungleTemple_S_Shrine_b_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_CP_PlaysetGrenade_JungleTemple_S_Shrine_b_C* AB_Prj_CP_PlaysetGrenade_JungleTemple_S_Shrine_b_C::GetDefaultObj()
{
	static class AB_Prj_CP_PlaysetGrenade_JungleTemple_S_Shrine_b_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_CP_PlaysetGrenade_JungleTemple_S_Shrine_b_C*>(AB_Prj_CP_PlaysetGrenade_JungleTemple_S_Shrine_b_C::StaticClass()->DefaultObject);

	return Default;
}

}


