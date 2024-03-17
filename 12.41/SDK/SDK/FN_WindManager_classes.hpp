#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x558 - 0x458)
// BlueprintGeneratedClass WindManager.WindManager_C
class AWindManager_C : public AFortWindManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  EmptyStaticMesh;                                   // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x468(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SmallerRenderTargetOrthoWidth;                     // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        External_Test_Actor;                               // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AFortStaticMeshActor*>          World_Terrain_Meshes;                              // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                               Camera_Height_Offset;                              // 0x498(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Particle_Z_Offset;                                 // 0x4A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Water_Interaction_Enabled;                      // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStaticMeshMaterialArrayCombo> WorldStaticMeshArray;                              // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FArrayOfWaterMeshWaterBlueprintPairs  Array_Of_Water_Assets;                             // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   PrototypicalStaticMeshes;                          // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        Current_Water_Mesh_Index;                          // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFlowMapMaterials>             WaterVectorMatToDefaultMaterialPairing;            // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         MaterialPairingFound;                              // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          WorldBoundsMinMax;                                 // 0x4FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Black_Scene_Capture_Material;                      // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBox                                  Max_level_bounds_Minus_used_to_isolate_the_level_from_the_vista; // 0x518(0x1C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMeshComponent*>          StormCylinderMeshes;                               // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         Storm_Cyl_Mesh_Match;                              // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Wind_Cyl_Mesh_Array_Match_Index;                   // 0x54C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delta_Wind_Falloff_in_World_Units;                 // 0x550(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortWindImpulseHandle                NewVar_1;                                          // 0x554(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class AWindManager_C* GetDefaultObj();

	void Find_Matching_Wind_Mesh_Index_And_Write_Bool(const struct FVector& Wind_location, bool* Storm_Cyl_Mesh_Match, int32* Wind_Cyl_Mesh_Array_Match_Index, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue);
	void SetWindMatVariables(class UMaterialInstanceDynamic* Mid, bool Set_AnimatedCylinderCenter, const struct FVector& AnimatedCylinderCenter, bool Set_Animating_Wind_Magnitude, float Animating_Wind_Magnitude, bool Set_Static_Wind_Magnitude, float Static_Wind_Magnitude, bool Set_CylinderCenter, const struct FVector& CylinderCenter, bool Set_WindVector, const struct FVector& WindVector, bool Set_WindCrossVector, const struct FVector& WindCrossVector, bool Set_OverallOuterRadius, float OverallOuterRadius, bool Set_OverallInnerRadius, float OverallInnerRadius, bool Set_Wind_Still_0_or_Animating_1, float Wind_Still_0_or_Animating_1, bool Set_Circular_Shader_, float Circular_Shader_, bool* NewParam, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue_5, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_6, class FName CallFunc_MakeLiteralName_ReturnValue_7, class FName CallFunc_MakeLiteralName_ReturnValue_8, class FName CallFunc_MakeLiteralName_ReturnValue_9, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_3);
	void UpdateWindDeltaCyl(float Static_Cylinder_Outer_Radius, float Duration, class UMaterialInstanceDynamic* Mid, bool Is_Wind_Circular_, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2, float K2Node_Select_Default_3);
	void RemoveWindCylinder(struct FFortWindImpulseCylinder& WindImpulseCylinder, class UStaticMeshComponent* CurrentStormCylinder, bool Temp_bool_True_if_break_was_hit_Variable, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue);
	void UpdateStormWindCylinder(const struct FFortWindImpulseCylinder& Wind_Impulse, const struct FFortWindImpulseCylinderDelta& Wind_Delta, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaCenter, bool CallFunc_BreakWindImpulseCylinderDelta_bWindImpulseInitialized, bool CallFunc_BreakWindImpulseCylinderDelta_bWindRipplesOutward, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionWidth, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerSectionRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterSectionRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaMaximumRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredOverallBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaPreviousMagnitude, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentMagnitude, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterWorldBounds, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerWorldBounds, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindImpulseBounds, const struct FFortWindImpulseHandle& CallFunc_BreakWindImpulseCylinderDelta_WindImpulseHandleToModify, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match, int32 CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_SetWindMatVariables_NewParam, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetWindMatVariables_NewParam_1);
	struct FVector Calculate_Camera_Position(float Scale, class USceneCaptureComponent2D* Scene_Capture, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, int32 CallFunc_FCeil_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1);
	void UserConstructionScript(const struct FTransform& Temp_struct_Variable, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue);
	void OnWindImpulseCylinderDeath(struct FFortWindImpulseCylinder& WindImpulseCylinder);
	void OnWindImpulseCylinderDeltaComplete(struct FFortWindImpulseCylinder& WindImpulseCylinder);
	void OnWindImpulseCylinderCreation(struct FFortWindImpulseCylinder& WindImpulseCylinder, struct FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta);
	void SpawnTestWind(float Radius, float ImpulseMagnitude);
	void Play_Water_Splash_Particle_System_At_Location(const struct FTransform& Particle_Transform);
	void AddWindParticleSystemComponent(class UParticleSystemComponent* ParticleSystemComponent);
	void Register_player_for_render_to_texture_purposes(class UPrimitiveComponent* Effect_Water_Interaction_FX, class UPrimitiveComponent* Gameplay_Wind_INteraction_Effects);
	void Add_Wind_Component(class UPrimitiveComponent* InComponent);
	void ReceiveBeginPlay();
	void Update_Test(float NewMagnitude);
	void Add_Render_To_Texture_Particle(class UParticleSystem* EmitterTemplate, struct FTransform& InTransform);
	void ExecuteUbergraph_WindManager(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& K2Node_CustomEvent_Particle_Transform, class UParticleSystemComponent* K2Node_Event_ParticleSystemComponent, class UPrimitiveComponent* K2Node_CustomEvent_Effect_Water_Interaction_FX, class UPrimitiveComponent* K2Node_CustomEvent_Gameplay_Wind_INteraction_Effects, float CallFunc_MakeLiteralFloat_ReturnValue, class UPrimitiveComponent* K2Node_CustomEvent_InComponent, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float K2Node_CustomEvent_NewMagnitude, class UParticleSystem* K2Node_CustomEvent_EmitterTemplate, const struct FTransform& K2Node_CustomEvent_InTransform, bool CallFunc_SetWindImpulseCylinderMagnitude_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, float K2Node_CustomEvent_Radius, float K2Node_CustomEvent_ImpulseMagnitude, const struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder, const struct FFortWindImpulseCylinderDelta& K2Node_Event_WindImpulseCylinderDelta, float CallFunc_Add_FloatFloat_ReturnValue, const struct FFortWindImpulseCylinder& CallFunc_MakeWindImpulseCylinder_ReturnValue, const struct FFortWindImpulseHandle& CallFunc_AddWindImpulseCylinder_ReturnValue, const struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder_1, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, const struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder_2, bool CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match, int32 CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index, class UStaticMeshComponent* CallFunc_Array_Get_Item, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetScalarParameterValue_ReturnValue);
};

}


