// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAimingComponent.h"
#include "..\Public\TankAimingComponent.h"

// Sets default values for this component's properties
UTankAimingComponent::UTankAimingComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UTankAimingComponent::SetBarrelReference(UStaticMeshComponent * BarrelToSet)
{
	Barrel = BarrelToSet;
}

void UTankAimingComponent::AimAt(FVector HitLocation, float LaunchSpeed)
{
	auto OurTank = GetOwner()->GetName();
	auto BarrelLocation = Barrel->GetComponentLocation().ToString();
	//UE_LOG(LogTemp, Warning, TEXT("%s Aiming at %s from %s"), *OurTank, *HitLocation.ToString(), *BarrelLocation);
	UE_LOG(LogTemp, Warning, TEXT("Firing at %f"), LaunchSpeed);
}

// Called when the game starts
void UTankAimingComponent::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UTankAimingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

