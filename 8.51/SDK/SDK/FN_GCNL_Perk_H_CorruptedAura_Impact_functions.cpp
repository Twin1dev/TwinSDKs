#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Perk_H_CorruptedAura_Impact.GCNL_Perk_H_CorruptedAura_Impact_C
// (Actor)

class UClass* AGCNL_Perk_H_CorruptedAura_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Perk_H_CorruptedAura_Impact_C");

	return Clss;
}


// GCNL_Perk_H_CorruptedAura_Impact_C GCNL_Perk_H_CorruptedAura_Impact.Default__GCNL_Perk_H_CorruptedAura_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_Perk_H_CorruptedAura_Impact_C* AGCNL_Perk_H_CorruptedAura_Impact_C::GetDefaultObj()
{
	static class AGCNL_Perk_H_CorruptedAura_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_Perk_H_CorruptedAura_Impact_C*>(AGCNL_Perk_H_CorruptedAura_Impact_C::StaticClass()->DefaultObject);

	return Default;
}

}


