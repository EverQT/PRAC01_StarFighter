// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Stage.generated.h"

UCLASS()
class PRAC01_STARFIGHTER_API AStage : public ACharacter
{
	GENERATED_BODY()

private:
	float Tamano;

public:
	// Sets default values for this character's properties
	AStage();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTamano() { return Tamano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTamano(float _Tamano) { Tamano = _Tamano; }

	UFUNCTION(BlueprintCallable)
		void setMatar(float _Matar) { Matar = _Matar; }
	UFUNCTION(BlueprintCallable)
		float getMatar() { return Matar; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
