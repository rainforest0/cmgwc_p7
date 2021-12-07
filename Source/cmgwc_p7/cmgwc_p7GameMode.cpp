// Copyright Epic Games, Inc. All Rights Reserved.

#include "cmgwc_p7GameMode.h"
#include "cmgwc_p7HUD.h"
#include "cmgwc_p7Character.h"
#include "UObject/ConstructorHelpers.h"

Acmgwc_p7GameMode::Acmgwc_p7GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Acmgwc_p7HUD::StaticClass();
}
