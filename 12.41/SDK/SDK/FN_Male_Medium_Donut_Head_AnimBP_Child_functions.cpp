#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Male_Medium_Donut_Head_AnimBP_Child.Male_Medium_Donut_Head_AnimBP_Child_C
// (None)

class UClass* UMale_Medium_Donut_Head_AnimBP_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Male_Medium_Donut_Head_AnimBP_Child_C");

	return Clss;
}


// Male_Medium_Donut_Head_AnimBP_Child_C Male_Medium_Donut_Head_AnimBP_Child.Default__Male_Medium_Donut_Head_AnimBP_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMale_Medium_Donut_Head_AnimBP_Child_C* UMale_Medium_Donut_Head_AnimBP_Child_C::GetDefaultObj()
{
	static class UMale_Medium_Donut_Head_AnimBP_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMale_Medium_Donut_Head_AnimBP_Child_C*>(UMale_Medium_Donut_Head_AnimBP_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


