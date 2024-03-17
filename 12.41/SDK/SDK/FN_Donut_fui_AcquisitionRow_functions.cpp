#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Donut_fui_AcquisitionRow.Donut_fui_AcquisitionRow_C
// (None)

class UClass* UDonut_fui_AcquisitionRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Donut_fui_AcquisitionRow_C");

	return Clss;
}


// Donut_fui_AcquisitionRow_C Donut_fui_AcquisitionRow.Default__Donut_fui_AcquisitionRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDonut_fui_AcquisitionRow_C* UDonut_fui_AcquisitionRow_C::GetDefaultObj()
{
	static class UDonut_fui_AcquisitionRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDonut_fui_AcquisitionRow_C*>(UDonut_fui_AcquisitionRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Donut_fui_AcquisitionRow.Donut_fui_AcquisitionRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDonut_fui_AcquisitionRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Donut_fui_AcquisitionRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Donut_fui_AcquisitionRow.Donut_fui_AcquisitionRow_C.ExecuteUbergraph_Donut_fui_AcquisitionRow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonut_fui_AcquisitionRow_C::ExecuteUbergraph_Donut_fui_AcquisitionRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Donut_fui_AcquisitionRow_C", "ExecuteUbergraph_Donut_fui_AcquisitionRow");

	Params::UDonut_fui_AcquisitionRow_C_ExecuteUbergraph_Donut_fui_AcquisitionRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


