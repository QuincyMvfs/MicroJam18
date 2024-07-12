// Copyright Epic Games, Inc. All Rights Reserved.

#include "MicroJam18GameMode.h"
#include "MicroJam18Character.h"
#include "UObject/ConstructorHelpers.h"

AMicroJam18GameMode::AMicroJam18GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
