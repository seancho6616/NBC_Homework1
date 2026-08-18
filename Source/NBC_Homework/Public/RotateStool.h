// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotateStool.generated.h"

UCLASS()
class NBC_HOMEWORK_API ARotateStool : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotateStool();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SceneComponent")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StaticMeshComponent")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateSpeed");
	float XRotateSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateSpeed");
	float YRotateSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotateSpeed");
	float ZRotateSpeed;
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
