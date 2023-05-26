// Copyright Epic Games, Inc. All Rights Reserved.

#include "PolyTheftGameMode.h"
#include "PolyTheftCharacter.h"
#include "UObject/ConstructorHelpers.h"

APolyTheftGameMode::APolyTheftGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
