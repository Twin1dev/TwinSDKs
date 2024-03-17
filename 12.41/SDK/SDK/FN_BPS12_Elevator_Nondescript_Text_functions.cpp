#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BPS12_Elevator_Nondescript_Text.BPS12_Elevator_Nondescript_Text_C
// (None)

class UClass* UBPS12_Elevator_Nondescript_Text_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPS12_Elevator_Nondescript_Text_C");

	return Clss;
}


// BPS12_Elevator_Nondescript_Text_C BPS12_Elevator_Nondescript_Text.Default__BPS12_Elevator_Nondescript_Text_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPS12_Elevator_Nondescript_Text_C* UBPS12_Elevator_Nondescript_Text_C::GetDefaultObj()
{
	static class UBPS12_Elevator_Nondescript_Text_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPS12_Elevator_Nondescript_Text_C*>(UBPS12_Elevator_Nondescript_Text_C::StaticClass()->DefaultObject);

	return Default;
}

}


