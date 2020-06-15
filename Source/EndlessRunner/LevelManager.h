// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelManager.generated.h"

UCLASS()
class ENDLESSRUNNER_API ALevelManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(EditAnywhere, Category = Properties)
	int NumberOfLanes;

	UPROPERTY(EditAnywhere, Category = Properties)
	float LaneWidth;

	UPROPERTY(EditAnywhere, Category = Properties)
	float LevelSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties, meta = (MakeEditWidget))
	FVector OutOfBoundsBoxScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties, meta = (MakeEditWidget))
	FVector OutOfBoundsBoxLocation;





};
