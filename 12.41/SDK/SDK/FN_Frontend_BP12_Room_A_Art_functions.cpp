#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_BP12_Room_A_Art.Frontend_BP12_Room_A_Art_C
// (Actor)

class UClass* AFrontend_BP12_Room_A_Art_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_BP12_Room_A_Art_C");

	return Clss;
}


// Frontend_BP12_Room_A_Art_C Frontend_BP12_Room_A_Art.Default__Frontend_BP12_Room_A_Art_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_BP12_Room_A_Art_C* AFrontend_BP12_Room_A_Art_C::GetDefaultObj()
{
	static class AFrontend_BP12_Room_A_Art_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_BP12_Room_A_Art_C*>(AFrontend_BP12_Room_A_Art_C::StaticClass()->DefaultObject);

	return Default;
}

}


