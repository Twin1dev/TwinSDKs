#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_PG_PlaysetGrenade_Props_S_EQ_Blocks.B_Prj_PG_PlaysetGrenade_Props_S_EQ_Blocks_C
// (Actor)

class UClass* AB_Prj_PG_PlaysetGrenade_Props_S_EQ_Blocks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_PG_PlaysetGrenade_Props_S_EQ_Blocks_C");

	return Clss;
}


// B_Prj_PG_PlaysetGrenade_Props_S_EQ_Blocks_C B_Prj_PG_PlaysetGrenade_Props_S_EQ_Blocks.Default__B_Prj_PG_PlaysetGrenade_Props_S_EQ_Blocks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_PG_PlaysetGrenade_Props_S_EQ_Blocks_C* AB_Prj_PG_PlaysetGrenade_Props_S_EQ_Blocks_C::GetDefaultObj()
{
	static class AB_Prj_PG_PlaysetGrenade_Props_S_EQ_Blocks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_PG_PlaysetGrenade_Props_S_EQ_Blocks_C*>(AB_Prj_PG_PlaysetGrenade_Props_S_EQ_Blocks_C::StaticClass()->DefaultObject);

	return Default;
}

}


