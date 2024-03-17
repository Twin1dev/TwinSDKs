#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ServerBrowser.ServerBrowser_C
// (None)

class UClass* UServerBrowser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ServerBrowser_C");

	return Clss;
}


// ServerBrowser_C ServerBrowser.Default__ServerBrowser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UServerBrowser_C* UServerBrowser_C::GetDefaultObj()
{
	static class UServerBrowser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UServerBrowser_C*>(UServerBrowser_C::StaticClass()->DefaultObject);

	return Default;
}

}


