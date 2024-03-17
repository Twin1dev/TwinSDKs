#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x288 - 0x218)
// Class PlayspaceFramework.GameplayVolume
class AGameplayVolume : public AActor
{
public:
	TSoftClassPtr<class APlayspace>              PlayspaceClassTemplate;                            // 0x218(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class APlayspace>                PlayspaceClass;                                    // 0x240(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 VolumeTags;                                        // 0x248(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_9BD[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayVolume* GetDefaultObj();

};

// 0x1A0 (0x3B8 - 0x218)
// Class PlayspaceFramework.Playspace
class APlayspace : public AInfo
{
public:
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x218(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          RequestedPlayspaceParentTag;                       // 0x238(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class APlayspaceLogic>           PlayspaceLogicClass;                               // 0x240(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class APlayspace>>        ChildPlayspaceClasses;                             // 0x248(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FPlayspaceUserList                    PlayspaceUsers;                                    // 0x258(0x128)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	class APlayspaceLogic*                       PlayspaceLogic;                                    // 0x380(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class APlayspace*>                    ChildPlayspaces;                                   // 0x388(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FUniqueNetIdRepl>              PendingUsers;                                      // 0x398(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UPlayspaceManagerComponent*            PlayspaceManagerCached;                            // 0x3A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9C8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APlayspace* GetDefaultObj();

	void OnRep_PlayspaceUsers();
	void OnRep_PlayspaceLogic();
};

// 0x18 (0x2A0 - 0x288)
// Class PlayspaceFramework.PlayspaceGameState
class APlayspaceGameState : public AGameState
{
public:
	class UPlayspaceManagerComponent*            PlayspaceManagerComponentCached;                   // 0x288(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class APlayspace>                RootPlayspaceClass;                                // 0x290(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsePlayspaceSystem;                               // 0x298(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9C9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APlayspaceGameState* GetDefaultObj();

};

// 0x8 (0x220 - 0x218)
// Class PlayspaceFramework.PlayspaceLogic
class APlayspaceLogic : public AActor
{
public:
	class APlayspace*                            Playspace;                                         // 0x218(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class APlayspaceLogic* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class PlayspaceFramework.PlayspaceManagerComponent
class UPlayspaceManagerComponent : public UGameStateComponent
{
public:
	class APlayspace*                            RootPlayspace;                                     // 0xB0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPlayspaceManagerComponent* GetDefaultObj();

};

}


