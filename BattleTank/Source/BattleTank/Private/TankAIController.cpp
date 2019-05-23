// Fill out your copyright notice in the Description page of Project Settings.


#include "..\Public\TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Player Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player tank: %s"), *PlayerTank->GetName());
	}
}

ATank* ATankAIController::GetControllerTank() const 
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) { return nullptr; }


	return Cast<ATank>(PlayerPawn);
}
