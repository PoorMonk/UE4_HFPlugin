// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RaceCarGameMode.h"
#include "RaceCarPawn.h"
#include "RaceCarHud.h"

ARaceCarGameMode::ARaceCarGameMode()
{
	DefaultPawnClass = ARaceCarPawn::StaticClass();
	HUDClass = ARaceCarHud::StaticClass();
}
