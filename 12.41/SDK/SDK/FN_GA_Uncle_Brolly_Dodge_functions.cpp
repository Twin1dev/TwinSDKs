#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Uncle_Brolly_Dodge.GA_Uncle_Brolly_Dodge_C
// (None)

class UClass* UGA_Uncle_Brolly_Dodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Uncle_Brolly_Dodge_C");

	return Clss;
}


// GA_Uncle_Brolly_Dodge_C GA_Uncle_Brolly_Dodge.Default__GA_Uncle_Brolly_Dodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Uncle_Brolly_Dodge_C* UGA_Uncle_Brolly_Dodge_C::GetDefaultObj()
{
	static class UGA_Uncle_Brolly_Dodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Uncle_Brolly_Dodge_C*>(UGA_Uncle_Brolly_Dodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


