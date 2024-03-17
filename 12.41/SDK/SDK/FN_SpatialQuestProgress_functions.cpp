#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialQuestProgress.SpatialQuestProgress_C
// (None)

class UClass* USpatialQuestProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialQuestProgress_C");

	return Clss;
}


// SpatialQuestProgress_C SpatialQuestProgress.Default__SpatialQuestProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialQuestProgress_C* USpatialQuestProgress_C::GetDefaultObj()
{
	static class USpatialQuestProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialQuestProgress_C*>(USpatialQuestProgress_C::StaticClass()->DefaultObject);

	return Default;
}

}


