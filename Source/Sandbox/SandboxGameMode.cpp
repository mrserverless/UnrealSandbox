// Copyright Epic Games, Inc. All Rights Reserved.

#include "SandboxGameMode.h"
#include "SandboxCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASandboxGameMode::ASandboxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
