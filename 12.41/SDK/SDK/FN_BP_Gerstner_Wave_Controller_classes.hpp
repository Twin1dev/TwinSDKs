#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x268 (0x480 - 0x218)
// BlueprintGeneratedClass BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C
class ABP_Gerstner_Wave_Controller_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh;                   // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mid;                                               // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWaterQualityLevel                Quality_Setting;                                   // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxWavesPerWaterBody;                              // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaveSpectrumSettings                 Wave_Generation_Spectrum;                          // 0x240(0x48)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         Seed;                                              // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	float                                        LastAlpha;                                         // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Detail_Normal_Intensity;                           // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Detail_Normal_Scale;                               // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOverrideScalarParam>          Override_Scalar_Params;                            // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FOverrideVectorParam>          Override_Vector_Params;                            // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        Manual_Time;                                       // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Freeze_Time_Editor;                                // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Tick_In_Game;                                      // 0x2C5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60AB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Inscatter_Brightness;                              // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Inscatter_Contrast;                                // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Material;                                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Randomness;                                        // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWaveParams>                   Waves;                                             // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FWaveParams>                   Override_Waves;                                    // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	int32                                        Display_Waves;                                     // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Detail_Normal;                                     // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable_Overrides;                                  // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Cubemap;                                           // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BottomMesh;                                        // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawn_Water_Meshes;                                // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Grid_Size;                                         // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Grid_Cells_X;                                      // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Grid_Cells_Y;                                      // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Water_HISMC_Grid_C*                Grid;                                              // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseOceanwaves;                                     // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                WaveParamsRT;                                      // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Target_Depth_for_Full_Waves;                       // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaveSpectrumSettings                 Lake_Spectrum;                                     // 0x354(0x48)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaveSpectrumSettings                 Null_Spectrum;                                     // 0x39C(0x48)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWaterWaveParams>              NullWaves;                                         // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FWaterWaveParams>              OceanWaves;                                        // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FWaterWaveParams>              WaterWaves;                                        // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FWaterWaveParams>              LakeWaves;                                         // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	class ALandscapeWaterInfo_C*                 LandscaleWaterINfo;                                // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWaterMeshActor*                       WaterMeshActor;                                    // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWaveSpectrumSettings                 Ocean_Spectrum;                                    // 0x438(0x48)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Gerstner_Wave_Controller_C* GetDefaultObj();

	void Render_Standalone_Waves(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FWaterWaveParams& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context);
	void Generate_Spectrum(const struct FWaveSpectrumSettings& Spectrum, TArray<struct FWaterWaveParams>* Waves, const struct FRandomStream& Local_Seed, const TArray<struct FWaterWaveParams>& OutWaves, const struct FWaveSpectrumSettings& Local_Spectrum, enum class EWaterQualityLevel Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable, int32 Temp_int_Variable_4, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, const struct FWaterWaveParams& K2Node_MakeStruct_WaterWaveParams, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, bool Temp_bool_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, int32 K2Node_Select_Default, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& K2Node_Select_Default_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue_2, const struct FWaterWaveParams& K2Node_MakeStruct_WaterWaveParams_1, const struct FWaterWaveParams& K2Node_Select_Default_2, int32 CallFunc_Array_Add_ReturnValue);
	void Set_Waves_On_WaterBodies(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AWaterBody*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AWaterBody* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2);
	void RenderWaveTextureData(int32 Temp_int_Array_Index_Variable, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 Temp_int_Loop_Counter_Variable, TArray<class ALandscapeWaterInfo_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ALandscapeWaterInfo_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AWaterBody*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class AWaterBody* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_Min_ReturnValue, int32 Temp_int_Variable, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue);
	void GetWaterWaves(TArray<struct FWaterWaveParams>* WaterWaveParams, float* BigWaveDepth, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, enum class EWaterQualityLevel Temp_byte_Variable, int32 Temp_int_Variable_4, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWaterWaveParams& K2Node_MakeStruct_WaterWaveParams, int32 CallFunc_Array_Add_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Set_Distance_Field(class UTexture* Rt);
	void Set_Single_Wave_MPC_Parameters(struct FWaveParams& WaveParams, int32 Idx, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_1);
	void General_MPC_Params(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z);
	void Manual_Parameter_Overrides(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FWaveParams& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue_1, const struct FVector2D& CallFunc_Normal2D_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const struct FWaveParams& K2Node_MakeStruct_WaveParams, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FOverrideVectorParam& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FOverrideScalarParam& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void Set_All_Wave_MPC_Params(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FWaveParams& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UserConstructionScript(class UMaterialInstanceDynamic* TempMID, float LastWave, TArray<class ALandscapeWaterInfo_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ALandscapeWaterInfo_C* CallFunc_Array_Get_Item, TArray<struct FWaterWaveParams>& CallFunc_Generate_Spectrum_Waves, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<struct FWaterWaveParams>& CallFunc_Generate_Spectrum_Waves_1, TArray<struct FWaterWaveParams>& CallFunc_Generate_Spectrum_Waves_2, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Harvest_Material_Params();
	void Spawn_Grid();
	void ExecuteUbergraph_BP_Gerstner_Wave_Controller(int32 EntryPoint, int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, float K2Node_Event_DeltaSeconds, const struct FVectorParameterValue& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FOverrideVectorParam& K2Node_MakeStruct_OverrideVectorParam, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_5, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_AddInstanceWorldSpace_ReturnValue, TArray<class ALandscapeWaterInfo_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ALandscapeWaterInfo_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FScalarParameterValue& CallFunc_Array_Get_Item_2, const struct FOverrideScalarParam& K2Node_MakeStruct_OverrideScalarParam, int32 CallFunc_Array_Add_ReturnValue_1);
};

}


