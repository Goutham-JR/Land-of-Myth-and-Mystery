// Copyright Epic Games, Inc. All Rights Reserved.

#include "LOMAMGameMode.h"
#include "LOMAMCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALOMAMGameMode::ALOMAMGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
