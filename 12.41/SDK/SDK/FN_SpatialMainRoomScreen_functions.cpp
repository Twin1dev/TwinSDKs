#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpatialMainRoomScreen.SpatialMainRoomScreen_C
// (None)

class UClass* USpatialMainRoomScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialMainRoomScreen_C");

	return Clss;
}


// SpatialMainRoomScreen_C SpatialMainRoomScreen.Default__SpatialMainRoomScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialMainRoomScreen_C* USpatialMainRoomScreen_C::GetDefaultObj()
{
	static class USpatialMainRoomScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialMainRoomScreen_C*>(USpatialMainRoomScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


