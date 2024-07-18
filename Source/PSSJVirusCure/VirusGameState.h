// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "VirusGameState.generated.h"
/**
 * 
 */
UCLASS()
class PSSJVIRUSCURE_API AVirusGameState : public AGameStateBase
{
	GENERATED_BODY()
protected:

	UPROPERTY(EditAnywhere, Category = "Variables") int Month;

	UFUNCTION(BlueprintCallable, Category = "GameFunction") bool ProceedNextMonth(ACharacter* character);

	// Begin Actor interface
protected:

	virtual void BeginPlay() override;
	
};