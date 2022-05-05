// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()

public:
	AMovingPlatform();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;


private:
	UPROPERTY(EditAnywhere, Category="Platform|Movement")
	FVector PlatformVelocity{100.f, 0.f, 0.f};

	FVector StartLocation;

	UPROPERTY(EditAnywhere, Category="Platform|Movement")
	float MoveDistance{100.f};

	UPROPERTY(EditAnywhere, Category="Platform|Rotation")
	FRotator RotationVelocity{0.f, 0.f, 0.f};

	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);
};
