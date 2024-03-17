#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Uncle_Brolly_Passive_ManageFloatingVars.GE_Uncle_Brolly_Passive_ManageFloatingVars_C
// (None)

class UClass* UGE_Uncle_Brolly_Passive_ManageFloatingVars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Uncle_Brolly_Passive_ManageFloatingVars_C");

	return Clss;
}


// GE_Uncle_Brolly_Passive_ManageFloatingVars_C GE_Uncle_Brolly_Passive_ManageFloatingVars.Default__GE_Uncle_Brolly_Passive_ManageFloatingVars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Uncle_Brolly_Passive_ManageFloatingVars_C* UGE_Uncle_Brolly_Passive_ManageFloatingVars_C::GetDefaultObj()
{
	static class UGE_Uncle_Brolly_Passive_ManageFloatingVars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Uncle_Brolly_Passive_ManageFloatingVars_C*>(UGE_Uncle_Brolly_Passive_ManageFloatingVars_C::StaticClass()->DefaultObject);

	return Default;
}

}


