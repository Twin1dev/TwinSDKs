#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CP_Obstacle_Course_G_Orange.GA_CP_Obstacle_Course_G_Orange_C
// (None)

class UClass* UGA_CP_Obstacle_Course_G_Orange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CP_Obstacle_Course_G_Orange_C");

	return Clss;
}


// GA_CP_Obstacle_Course_G_Orange_C GA_CP_Obstacle_Course_G_Orange.Default__GA_CP_Obstacle_Course_G_Orange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CP_Obstacle_Course_G_Orange_C* UGA_CP_Obstacle_Course_G_Orange_C::GetDefaultObj()
{
	static class UGA_CP_Obstacle_Course_G_Orange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CP_Obstacle_Course_G_Orange_C*>(UGA_CP_Obstacle_Course_G_Orange_C::StaticClass()->DefaultObject);

	return Default;
}

}


