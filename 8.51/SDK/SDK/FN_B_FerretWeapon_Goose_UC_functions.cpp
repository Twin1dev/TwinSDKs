#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_FerretWeapon_Goose_UC.B_FerretWeapon_Goose_UC_C
// (Actor)

class UClass* AB_FerretWeapon_Goose_UC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_FerretWeapon_Goose_UC_C");

	return Clss;
}


// B_FerretWeapon_Goose_UC_C B_FerretWeapon_Goose_UC.Default__B_FerretWeapon_Goose_UC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_FerretWeapon_Goose_UC_C* AB_FerretWeapon_Goose_UC_C::GetDefaultObj()
{
	static class AB_FerretWeapon_Goose_UC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_FerretWeapon_Goose_UC_C*>(AB_FerretWeapon_Goose_UC_C::StaticClass()->DefaultObject);

	return Default;
}

}


