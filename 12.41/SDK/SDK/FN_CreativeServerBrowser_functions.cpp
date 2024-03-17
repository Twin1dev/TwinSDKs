#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CreativeServerBrowser.CreativeServerBrowser_C
// (None)

class UClass* UCreativeServerBrowser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeServerBrowser_C");

	return Clss;
}


// CreativeServerBrowser_C CreativeServerBrowser.Default__CreativeServerBrowser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreativeServerBrowser_C* UCreativeServerBrowser_C::GetDefaultObj()
{
	static class UCreativeServerBrowser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeServerBrowser_C*>(UCreativeServerBrowser_C::StaticClass()->DefaultObject);

	return Default;
}

}


