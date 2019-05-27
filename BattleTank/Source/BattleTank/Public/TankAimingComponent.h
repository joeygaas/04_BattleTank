// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UTankAimingComponent();

	void SetBarrelReference(UStaticMeshComponent* BarrelToSet);
	void AimAt(FVector WorldSpaceAim, float LaunchSpeed);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:	
	UStaticMeshComponent* Barrel = nullptr;
		
};