#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Alteration_G_OnKill_ChargeStormKingHammer_Buff.GE_Alteration_G_OnKill_ChargeStormKingHammer_Buff_C
// (None)

class UClass* UGE_Alteration_G_OnKill_ChargeStormKingHammer_Buff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Alteration_G_OnKill_ChargeStormKingHammer_Buff_C");

	return Clss;
}


// GE_Alteration_G_OnKill_ChargeStormKingHammer_Buff_C GE_Alteration_G_OnKill_ChargeStormKingHammer_Buff.Default__GE_Alteration_G_OnKill_ChargeStormKingHammer_Buff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Alteration_G_OnKill_ChargeStormKingHammer_Buff_C* UGE_Alteration_G_OnKill_ChargeStormKingHammer_Buff_C::GetDefaultObj()
{
	static class UGE_Alteration_G_OnKill_ChargeStormKingHammer_Buff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Alteration_G_OnKill_ChargeStormKingHammer_Buff_C*>(UGE_Alteration_G_OnKill_ChargeStormKingHammer_Buff_C::StaticClass()->DefaultObject);

	return Default;
}

}


