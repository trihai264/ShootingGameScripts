// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShootingGameProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGGAMEPROJECT_API AShootingGameProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void PawnKilled(APawn* PawnKilled);
};
