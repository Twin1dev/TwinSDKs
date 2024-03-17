#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialHenchmenQuestProgress.SpatialHenchmenQuestProgress_C
// (None)

class UClass* USpatialHenchmenQuestProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialHenchmenQuestProgress_C");

	return Clss;
}


// SpatialHenchmenQuestProgress_C SpatialHenchmenQuestProgress.Default__SpatialHenchmenQuestProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialHenchmenQuestProgress_C* USpatialHenchmenQuestProgress_C::GetDefaultObj()
{
	static class USpatialHenchmenQuestProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialHenchmenQuestProgress_C*>(USpatialHenchmenQuestProgress_C::StaticClass()->DefaultObject);

	return Default;
}

}


