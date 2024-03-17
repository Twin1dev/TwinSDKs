#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassItemChoice.BattlePassItemChoice_C
// (None)

class UClass* UBattlePassItemChoice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassItemChoice_C");

	return Clss;
}


// BattlePassItemChoice_C BattlePassItemChoice.Default__BattlePassItemChoice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassItemChoice_C* UBattlePassItemChoice_C::GetDefaultObj()
{
	static class UBattlePassItemChoice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassItemChoice_C*>(UBattlePassItemChoice_C::StaticClass()->DefaultObject);

	return Default;
}

}


