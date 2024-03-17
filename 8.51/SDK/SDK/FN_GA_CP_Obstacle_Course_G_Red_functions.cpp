#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CP_Obstacle_Course_G_Red.GA_CP_Obstacle_Course_G_Red_C
// (None)

class UClass* UGA_CP_Obstacle_Course_G_Red_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CP_Obstacle_Course_G_Red_C");

	return Clss;
}


// GA_CP_Obstacle_Course_G_Red_C GA_CP_Obstacle_Course_G_Red.Default__GA_CP_Obstacle_Course_G_Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CP_Obstacle_Course_G_Red_C* UGA_CP_Obstacle_Course_G_Red_C::GetDefaultObj()
{
	static class UGA_CP_Obstacle_Course_G_Red_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CP_Obstacle_Course_G_Red_C*>(UGA_CP_Obstacle_Course_G_Red_C::StaticClass()->DefaultObject);

	return Default;
}

}


