// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/ObsidianIDComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObsidianIDComponent() {}
// Cross Module References
	OEICOMMON_API UClass* Z_Construct_UClass_UObsidianIDComponent_NoRegister();
	OEICOMMON_API UClass* Z_Construct_UClass_UObsidianIDComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
// End Cross Module References
	void UObsidianIDComponent::StaticRegisterNativesUObsidianIDComponent()
	{
	}
	UClass* Z_Construct_UClass_UObsidianIDComponent_NoRegister()
	{
		return UObsidianIDComponent::StaticClass();
	}
	struct Z_Construct_UClass_UObsidianIDComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObsidianIDComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObsidianIDComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObsidianIDComponent.h" },
		{ "ModuleRelativePath", "Public/ObsidianIDComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObsidianIDComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObsidianIDComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObsidianIDComponent_Statics::ClassParams = {
		&UObsidianIDComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObsidianIDComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObsidianIDComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObsidianIDComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObsidianIDComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObsidianIDComponent, 704853306);
	template<> OEICOMMON_API UClass* StaticClass<UObsidianIDComponent>()
	{
		return UObsidianIDComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObsidianIDComponent(Z_Construct_UClass_UObsidianIDComponent, &UObsidianIDComponent::StaticClass, TEXT("/Script/OEICommon"), TEXT("UObsidianIDComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObsidianIDComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
