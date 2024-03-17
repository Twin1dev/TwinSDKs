#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Goose.MissionGen_Goose_C
// (None)

class UClass* UMissionGen_Goose_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Goose_C");

	return Clss;
}


// MissionGen_Goose_C MissionGen_Goose.Default__MissionGen_Goose_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Goose_C* UMissionGen_Goose_C::GetDefaultObj()
{
	static class UMissionGen_Goose_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Goose_C*>(UMissionGen_Goose_C::StaticClass()->DefaultObject);

	return Default;
}

}


