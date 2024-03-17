#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C
class ICustomLocomotionLayerInterface_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class ICustomLocomotionLayerInterface_C* GetDefaultObj();

	void CustomLocomotionFullBodyLayer(const struct FPoseLink& PassThroughCustomFullBody, struct FPoseLink* CustomLocomotionFullBodyLayer);
};

}


