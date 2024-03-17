#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Uncle_Brolly_Charge_Tier1.GE_Uncle_Brolly_Charge_Tier1_C
// (None)

class UClass* UGE_Uncle_Brolly_Charge_Tier1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Uncle_Brolly_Charge_Tier1_C");

	return Clss;
}


// GE_Uncle_Brolly_Charge_Tier1_C GE_Uncle_Brolly_Charge_Tier1.Default__GE_Uncle_Brolly_Charge_Tier1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Uncle_Brolly_Charge_Tier1_C* UGE_Uncle_Brolly_Charge_Tier1_C::GetDefaultObj()
{
	static class UGE_Uncle_Brolly_Charge_Tier1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Uncle_Brolly_Charge_Tier1_C*>(UGE_Uncle_Brolly_Charge_Tier1_C::StaticClass()->DefaultObject);

	return Default;
}

}


