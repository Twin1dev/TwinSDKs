#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReportablePlayerEntry.ReportablePlayerEntry_C
// (None)

class UClass* UReportablePlayerEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReportablePlayerEntry_C");

	return Clss;
}


// ReportablePlayerEntry_C ReportablePlayerEntry.Default__ReportablePlayerEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReportablePlayerEntry_C* UReportablePlayerEntry_C::GetDefaultObj()
{
	static class UReportablePlayerEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReportablePlayerEntry_C*>(UReportablePlayerEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


