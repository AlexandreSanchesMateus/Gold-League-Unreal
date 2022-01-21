// Copyright Epic Games, Inc. All Rights Reserved.

#include "Gold_League_ProjectGameMode.h"
#include "Gold_League_ProjectHUD.h"
#include "Gold_League_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGold_League_ProjectGameMode::AGold_League_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGold_League_ProjectHUD::StaticClass();
}
