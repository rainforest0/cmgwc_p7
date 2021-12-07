// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "cmgwc_p7HUD.generated.h"

UCLASS()
class Acmgwc_p7HUD : public AHUD
{
	GENERATED_BODY()

public:
	Acmgwc_p7HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

