// Fill out your copyright notice in the Description page of Project Settings.


#include "VirusGameState.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "PlayerStats.h"
#include "PSSJVirusCureCharacter.h"

void AVirusGameState::BeginPlay()
{
	Super::BeginPlay();
}

bool AVirusGameState::ProceedNextMonth(APSSJVirusCureCharacter* character)
{
	character.AddMoney(10);
}