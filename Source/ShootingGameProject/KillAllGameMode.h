// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShootingGameProjectGameModeBase.h"
#include "KillAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGGAMEPROJECT_API AKillAllGameMode : public AShootingGameProjectGameModeBase
{
	GENERATED_BODY()
	public:
	virtual void PawnKilled(APawn* PawnKilled) override;

private:
	void EndGame(bool bIsPlayerWinner);
	
};
