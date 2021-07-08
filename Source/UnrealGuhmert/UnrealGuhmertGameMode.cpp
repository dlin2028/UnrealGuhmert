// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealGuhmertGameMode.h"
#include "UnrealGuhmertPlayerController.h"
#include "UnrealGuhmertCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealGuhmertGameMode::AUnrealGuhmertGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUnrealGuhmertPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}