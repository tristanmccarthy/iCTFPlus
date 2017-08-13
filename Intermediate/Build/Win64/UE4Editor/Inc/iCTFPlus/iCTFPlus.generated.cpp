// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/iCTFPlusGameMode.h"
#include "iCTFPlus.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1iCTFPlus() {}
	void AiCTFPlusGameMode::StaticRegisterNativesAiCTFPlusGameMode()
	{
	}
	IMPLEMENT_CLASS(AiCTFPlusGameMode, 4107325738);
	void AiCTFPlusGameState::StaticRegisterNativesAiCTFPlusGameState()
	{
	}
	IMPLEMENT_CLASS(AiCTFPlusGameState, 3003825622);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	UNREALTOURNAMENT_API class UClass* Z_Construct_UClass_AUTCTFGameMode();
	UNREALTOURNAMENT_API class UClass* Z_Construct_UClass_AUTCTFGameState();

	ICTFPLUS_API class UClass* Z_Construct_UClass_AiCTFPlusGameMode_NoRegister();
	ICTFPLUS_API class UClass* Z_Construct_UClass_AiCTFPlusGameMode();
	ICTFPLUS_API class UClass* Z_Construct_UClass_AiCTFPlusGameState_NoRegister();
	ICTFPLUS_API class UClass* Z_Construct_UClass_AiCTFPlusGameState();
	ICTFPLUS_API class UPackage* Z_Construct_UPackage__Script_iCTFPlus();
	UClass* Z_Construct_UClass_AiCTFPlusGameMode_NoRegister()
	{
		return AiCTFPlusGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AiCTFPlusGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AUTCTFGameMode();
			Z_Construct_UPackage__Script_iCTFPlus();
			OuterClass = AiCTFPlusGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2080028D;


				OuterClass->ClassConfigName = FName(TEXT("iCTFPlus"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ChildCanTick"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("iCTFPlusGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/iCTFPlusGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AiCTFPlusGameMode(Z_Construct_UClass_AiCTFPlusGameMode, &AiCTFPlusGameMode::StaticClass, TEXT("AiCTFPlusGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AiCTFPlusGameMode);
	UClass* Z_Construct_UClass_AiCTFPlusGameState_NoRegister()
	{
		return AiCTFPlusGameState::StaticClass();
	}
	UClass* Z_Construct_UClass_AiCTFPlusGameState()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AUTCTFGameState();
			Z_Construct_UPackage__Script_iCTFPlus();
			OuterClass = AiCTFPlusGameState::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800284;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("iCTFPlusGameState.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/iCTFPlusGameState.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AiCTFPlusGameState(Z_Construct_UClass_AiCTFPlusGameState, &AiCTFPlusGameState::StaticClass, TEXT("AiCTFPlusGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AiCTFPlusGameState);
	UPackage* Z_Construct_UPackage__Script_iCTFPlus()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/iCTFPlus")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x84B9135E;
			Guid.B = 0xBE150088;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
