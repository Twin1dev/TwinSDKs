#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Uncle_Brolly_Dash_End.GE_Uncle_Brolly_Dash_End_C
// (None)

class UClass* UGE_Uncle_Brolly_Dash_End_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Uncle_Brolly_Dash_End_C");

	return Clss;
}


// GE_Uncle_Brolly_Dash_End_C GE_Uncle_Brolly_Dash_End.Default__GE_Uncle_Brolly_Dash_End_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Uncle_Brolly_Dash_End_C* UGE_Uncle_Brolly_Dash_End_C::GetDefaultObj()
{
	static class UGE_Uncle_Brolly_Dash_End_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Uncle_Brolly_Dash_End_C*>(UGE_Uncle_Brolly_Dash_End_C::StaticClass()->DefaultObject);

	return Default;
}

}


