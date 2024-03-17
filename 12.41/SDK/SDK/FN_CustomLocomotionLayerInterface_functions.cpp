#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C
// (None)

class UClass* ICustomLocomotionLayerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomLocomotionLayerInterface_C");

	return Clss;
}


// CustomLocomotionLayerInterface_C CustomLocomotionLayerInterface.Default__CustomLocomotionLayerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICustomLocomotionLayerInterface_C* ICustomLocomotionLayerInterface_C::GetDefaultObj()
{
	static class ICustomLocomotionLayerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICustomLocomotionLayerInterface_C*>(ICustomLocomotionLayerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionFullBodyLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PassThroughCustomFullBody                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CustomLocomotionFullBodyLayer                                    (Parm, OutParm, NoDestructor)

void ICustomLocomotionLayerInterface_C::CustomLocomotionFullBodyLayer(const struct FPoseLink& PassThroughCustomFullBody, struct FPoseLink* CustomLocomotionFullBodyLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomLocomotionLayerInterface_C", "CustomLocomotionFullBodyLayer");

	Params::ICustomLocomotionLayerInterface_C_CustomLocomotionFullBodyLayer_Params Parms{};

	Parms.PassThroughCustomFullBody = PassThroughCustomFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (CustomLocomotionFullBodyLayer != nullptr)
		*CustomLocomotionFullBodyLayer = std::move(Parms.CustomLocomotionFullBodyLayer);

}

}


