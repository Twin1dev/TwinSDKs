#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class AnimationCore.AnimationDataSourceRegistry
class UAnimationDataSourceRegistry : public UObject
{
public:
	TMap<class FName, class UObject*>            DataSources;                                       // 0x28(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAnimationDataSourceRegistry* GetDefaultObj();

};

}


