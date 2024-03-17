#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_CP_PlaysetGrenade_Obstacle_Course_G_Stairs.B_Prj_CP_PlaysetGrenade_Obstacle_Course_G_Stairs_C
// (Actor)

class UClass* AB_Prj_CP_PlaysetGrenade_Obstacle_Course_G_Stairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_CP_PlaysetGrenade_Obstacle_Course_G_Stairs_C");

	return Clss;
}


// B_Prj_CP_PlaysetGrenade_Obstacle_Course_G_Stairs_C B_Prj_CP_PlaysetGrenade_Obstacle_Course_G_Stairs.Default__B_Prj_CP_PlaysetGrenade_Obstacle_Course_G_Stairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_CP_PlaysetGrenade_Obstacle_Course_G_Stairs_C* AB_Prj_CP_PlaysetGrenade_Obstacle_Course_G_Stairs_C::GetDefaultObj()
{
	static class AB_Prj_CP_PlaysetGrenade_Obstacle_Course_G_Stairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_CP_PlaysetGrenade_Obstacle_Course_G_Stairs_C*>(AB_Prj_CP_PlaysetGrenade_Obstacle_Course_G_Stairs_C::StaticClass()->DefaultObject);

	return Default;
}

}


