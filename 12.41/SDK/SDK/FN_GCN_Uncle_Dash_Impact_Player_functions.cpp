#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Uncle_Dash_Impact_Player.GCN_Uncle_Dash_Impact_Player_C
// (None)

class UClass* UGCN_Uncle_Dash_Impact_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Uncle_Dash_Impact_Player_C");

	return Clss;
}


// GCN_Uncle_Dash_Impact_Player_C GCN_Uncle_Dash_Impact_Player.Default__GCN_Uncle_Dash_Impact_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Uncle_Dash_Impact_Player_C* UGCN_Uncle_Dash_Impact_Player_C::GetDefaultObj()
{
	static class UGCN_Uncle_Dash_Impact_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Uncle_Dash_Impact_Player_C*>(UGCN_Uncle_Dash_Impact_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


