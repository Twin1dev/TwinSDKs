#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S_Water_Shallow_Half_x_Half.S_Water_Shallow_Half_x_Half_C
// (Actor)

class UClass* AS_Water_Shallow_Half_x_Half_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S_Water_Shallow_Half_x_Half_C");

	return Clss;
}


// S_Water_Shallow_Half_x_Half_C S_Water_Shallow_Half_x_Half.Default__S_Water_Shallow_Half_x_Half_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AS_Water_Shallow_Half_x_Half_C* AS_Water_Shallow_Half_x_Half_C::GetDefaultObj()
{
	static class AS_Water_Shallow_Half_x_Half_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AS_Water_Shallow_Half_x_Half_C*>(AS_Water_Shallow_Half_x_Half_C::StaticClass()->DefaultObject);

	return Default;
}

}


