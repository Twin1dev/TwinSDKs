#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Spy_Vault_Open.GCN_Spy_Vault_Open_C
// (None)

class UClass* UGCN_Spy_Vault_Open_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Spy_Vault_Open_C");

	return Clss;
}


// GCN_Spy_Vault_Open_C GCN_Spy_Vault_Open.Default__GCN_Spy_Vault_Open_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Spy_Vault_Open_C* UGCN_Spy_Vault_Open_C::GetDefaultObj()
{
	static class UGCN_Spy_Vault_Open_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Spy_Vault_Open_C*>(UGCN_Spy_Vault_Open_C::StaticClass()->DefaultObject);

	return Default;
}

}


