// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CarbonDemo.h"
#include "CarbonDemoGameMode.h"
#include "CarbonDemoBall.h"

ACarbonDemoGameMode::ACarbonDemoGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ACarbonDemoBall::StaticClass();
}
