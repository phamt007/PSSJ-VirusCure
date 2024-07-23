// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerStats.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PSSJVIRUSCURE_API UPlayerStats : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerStats();
	UPROPERTY(EditAnywhere, Category = "Variables") float Money;

	UFUNCTION(BlueprintCallable, Category = "MoneyFunction") bool SubtractMoney(float value);
	UFUNCTION(BlueprintCallable, Category = "MoneyFunction") bool AddMoney(float value);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
