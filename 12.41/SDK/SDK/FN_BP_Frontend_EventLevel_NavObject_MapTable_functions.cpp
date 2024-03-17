#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C
// (Actor)

class UClass* ABP_Frontend_EventLevel_NavObject_MapTable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_EventLevel_NavObject_MapTable_C");

	return Clss;
}


// BP_Frontend_EventLevel_NavObject_MapTable_C BP_Frontend_EventLevel_NavObject_MapTable.Default__BP_Frontend_EventLevel_NavObject_MapTable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_EventLevel_NavObject_MapTable_C* ABP_Frontend_EventLevel_NavObject_MapTable_C::GetDefaultObj()
{
	static class ABP_Frontend_EventLevel_NavObject_MapTable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_EventLevel_NavObject_MapTable_C*>(ABP_Frontend_EventLevel_NavObject_MapTable_C::StaticClass()->DefaultObject);

	return Default;
}

}


