#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SoldierMannequin_Female.SoldierMannequin_Female_C
// (Actor)

class UClass* ASoldierMannequin_Female_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoldierMannequin_Female_C");

	return Clss;
}


// SoldierMannequin_Female_C SoldierMannequin_Female.Default__SoldierMannequin_Female_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASoldierMannequin_Female_C* ASoldierMannequin_Female_C::GetDefaultObj()
{
	static class ASoldierMannequin_Female_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASoldierMannequin_Female_C*>(ASoldierMannequin_Female_C::StaticClass()->DefaultObject);

	return Default;
}

}


