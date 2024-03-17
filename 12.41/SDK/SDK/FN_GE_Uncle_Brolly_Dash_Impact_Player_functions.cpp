#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Uncle_Brolly_Dash_Impact_Player.GE_Uncle_Brolly_Dash_Impact_Player_C
// (None)

class UClass* UGE_Uncle_Brolly_Dash_Impact_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Uncle_Brolly_Dash_Impact_Player_C");

	return Clss;
}


// GE_Uncle_Brolly_Dash_Impact_Player_C GE_Uncle_Brolly_Dash_Impact_Player.Default__GE_Uncle_Brolly_Dash_Impact_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Uncle_Brolly_Dash_Impact_Player_C* UGE_Uncle_Brolly_Dash_Impact_Player_C::GetDefaultObj()
{
	static class UGE_Uncle_Brolly_Dash_Impact_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Uncle_Brolly_Dash_Impact_Player_C*>(UGE_Uncle_Brolly_Dash_Impact_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


