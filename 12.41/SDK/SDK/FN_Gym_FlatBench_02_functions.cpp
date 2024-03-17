#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Gym_FlatBench_02.Gym_FlatBench_02_C
// (Actor)

class UClass* AGym_FlatBench_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gym_FlatBench_02_C");

	return Clss;
}


// Gym_FlatBench_02_C Gym_FlatBench_02.Default__Gym_FlatBench_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGym_FlatBench_02_C* AGym_FlatBench_02_C::GetDefaultObj()
{
	static class AGym_FlatBench_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGym_FlatBench_02_C*>(AGym_FlatBench_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


