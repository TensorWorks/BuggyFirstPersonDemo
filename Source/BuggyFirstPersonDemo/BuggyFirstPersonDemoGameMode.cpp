// Copyright Epic Games, Inc. All Rights Reserved.

#include "BuggyFirstPersonDemoGameMode.h"
#include "BuggyFirstPersonDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABuggyFirstPersonDemoGameMode::ABuggyFirstPersonDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
