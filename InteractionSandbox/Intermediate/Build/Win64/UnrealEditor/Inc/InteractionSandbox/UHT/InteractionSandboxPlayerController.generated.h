// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionSandboxPlayerController.h"

#ifdef INTERACTIONSANDBOX_InteractionSandboxPlayerController_generated_h
#error "InteractionSandboxPlayerController.generated.h already included, missing '#pragma once' in InteractionSandboxPlayerController.h"
#endif
#define INTERACTIONSANDBOX_InteractionSandboxPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInteractionSandboxPlayerController **************************************
INTERACTIONSANDBOX_API UClass* Z_Construct_UClass_AInteractionSandboxPlayerController_NoRegister();

#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionSandboxPlayerController(); \
	friend struct Z_Construct_UClass_AInteractionSandboxPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIONSANDBOX_API UClass* Z_Construct_UClass_AInteractionSandboxPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AInteractionSandboxPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSandbox"), Z_Construct_UClass_AInteractionSandboxPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AInteractionSandboxPlayerController)


#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInteractionSandboxPlayerController(AInteractionSandboxPlayerController&&) = delete; \
	AInteractionSandboxPlayerController(const AInteractionSandboxPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionSandboxPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionSandboxPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AInteractionSandboxPlayerController) \
	NO_API virtual ~AInteractionSandboxPlayerController();


#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxPlayerController_h_17_PROLOG
#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInteractionSandboxPlayerController;

// ********** End Class AInteractionSandboxPlayerController ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
