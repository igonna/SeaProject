// Copyright Epic Games, Inc. All Rights Reserved.

#include "SeaProjectGameMode.h"
#include "SeaProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASeaProjectGameMode::ASeaProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
