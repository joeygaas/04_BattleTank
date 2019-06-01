// Fill out your copyright notice in the Description page of Project Settings.


#include "TankTurret.h"

void UTankTurret::Rotate(float RelativeSpeed)
{
	// clamp relative speed 
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto RotationChange = RelativeSpeed * MaxDegressPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawRotationChange = RelativeRotation.Yaw + RotationChange;

	// rotate the turret
	SetRelativeRotation(FRotator(0, RawRotationChange, 0));
}

