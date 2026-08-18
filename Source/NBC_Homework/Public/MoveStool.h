// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveStool.generated.h"

UCLASS()
class NBC_HOMEWORK_API AMoveStool : public AActor
{
	GENERATED_BODY()
	
public:	
	AMoveStool();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MoveStool|Components");
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveStool|Components");
	UStaticMeshComponent* StaticMeshComp;

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateSpeed");
	FVector StartLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateSpeed");
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateSpeed");
	float MaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateSpeed");
	FVector LocationVariable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateSpeed");
	FRotator RotationVariable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateSpeed");
	FVector ScaleVariable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateSpeed");
	float xValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateSpeed");
	float yValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateSpeed");
	float zValue;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
