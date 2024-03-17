#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB88 - 0xB78)
// BlueprintGeneratedClass B_HeldObject_Generic.B_HeldObject_Generic_C
class AB_HeldObject_Generic_C : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB78(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0xB80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_HeldObject_Generic_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_HeldObject_Generic(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, TArray<class AActor*>& CallFunc_FilterArray_FilteredArray, class AActor* CallFunc_Array_Get_Item, class AB_HeldObject_Parent_C* K2Node_DynamicCast_AsB_Held_Object_Parent, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
};

}


