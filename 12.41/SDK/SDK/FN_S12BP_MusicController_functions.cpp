#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S12BP_MusicController.S12BP_MusicController_C
// (Actor)

class UClass* AS12BP_MusicController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S12BP_MusicController_C");

	return Clss;
}


// S12BP_MusicController_C S12BP_MusicController.Default__S12BP_MusicController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AS12BP_MusicController_C* AS12BP_MusicController_C::GetDefaultObj()
{
	static class AS12BP_MusicController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AS12BP_MusicController_C*>(AS12BP_MusicController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function S12BP_MusicController.S12BP_MusicController_C.GetTracksForRegistration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBP_TimeSynthTrackComponent_C*>Tracks                                                           (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
// TArray<class UBP_TimeSynthTrackComponent_C*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AS12BP_MusicController_C::GetTracksForRegistration(TArray<class UBP_TimeSynthTrackComponent_C*>* Tracks, TArray<class UBP_TimeSynthTrackComponent_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S12BP_MusicController_C", "GetTracksForRegistration");

	Params::AS12BP_MusicController_C_GetTracksForRegistration_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Tracks != nullptr)
		*Tracks = std::move(Parms.Tracks);

}


// Function S12BP_MusicController.S12BP_MusicController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AS12BP_MusicController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S12BP_MusicController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function S12BP_MusicController.S12BP_MusicController_C.ExecuteUbergraph_S12BP_MusicController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AS12BP_MusicController_C::ExecuteUbergraph_S12BP_MusicController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S12BP_MusicController_C", "ExecuteUbergraph_S12BP_MusicController");

	Params::AS12BP_MusicController_C_ExecuteUbergraph_S12BP_MusicController_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


