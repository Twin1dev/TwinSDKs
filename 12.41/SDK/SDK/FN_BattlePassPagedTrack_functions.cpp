#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassPagedTrack.BattlePassPagedTrack_C
// (None)

class UClass* UBattlePassPagedTrack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassPagedTrack_C");

	return Clss;
}


// BattlePassPagedTrack_C BattlePassPagedTrack.Default__BattlePassPagedTrack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassPagedTrack_C* UBattlePassPagedTrack_C::GetDefaultObj()
{
	static class UBattlePassPagedTrack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassPagedTrack_C*>(UBattlePassPagedTrack_C::StaticClass()->DefaultObject);

	return Default;
}

}


