// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/FCTweenBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFCEase : uint8;
#ifdef FCTWEEN_FCTweenBlueprintLibrary_generated_h
#error "FCTweenBlueprintLibrary.generated.h already included, missing '#pragma once' in FCTweenBlueprintLibrary.h"
#endif
#define FCTWEEN_FCTweenBlueprintLibrary_generated_h

#define FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_SPARSE_DATA
#define FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnsureTweenCapacity); \
	DECLARE_FUNCTION(execEaseWithParams); \
	DECLARE_FUNCTION(execEase);


#define FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_ACCESSORS
#define FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCTweenBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UFCTweenBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UFCTweenBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), NO_API) \
	DECLARE_SERIALIZER(UFCTweenBlueprintLibrary)


#define FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCTweenBlueprintLibrary(UFCTweenBlueprintLibrary&&); \
	NO_API UFCTweenBlueprintLibrary(const UFCTweenBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBlueprintLibrary) \
	NO_API virtual ~UFCTweenBlueprintLibrary();


#define FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_8_PROLOG
#define FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_SPARSE_DATA \
	FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_ACCESSORS \
	FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FCTWEEN_API UClass* StaticClass<class UFCTweenBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_music_OneDrive_Documents_Unreal_Projects_Emerald_PokemonEmerald_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
