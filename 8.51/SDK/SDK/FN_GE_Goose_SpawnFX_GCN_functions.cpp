#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Goose_SpawnFX_GCN.GE_Goose_SpawnFX_GCN_C
// (None)

class UClass* UGE_Goose_SpawnFX_GCN_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Goose_SpawnFX_GCN_C");

	return Clss;
}


// GE_Goose_SpawnFX_GCN_C GE_Goose_SpawnFX_GCN.Default__GE_Goose_SpawnFX_GCN_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Goose_SpawnFX_GCN_C* UGE_Goose_SpawnFX_GCN_C::GetDefaultObj()
{
	static class UGE_Goose_SpawnFX_GCN_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Goose_SpawnFX_GCN_C*>(UGE_Goose_SpawnFX_GCN_C::StaticClass()->DefaultObject);

	return Default;
}

}


