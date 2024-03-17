#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Arsenic.MissionGen_Arsenic_C
// (None)

class UClass* UMissionGen_Arsenic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Arsenic_C");

	return Clss;
}


// MissionGen_Arsenic_C MissionGen_Arsenic.Default__MissionGen_Arsenic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Arsenic_C* UMissionGen_Arsenic_C::GetDefaultObj()
{
	static class UMissionGen_Arsenic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Arsenic_C*>(UMissionGen_Arsenic_C::StaticClass()->DefaultObject);

	return Default;
}

}


