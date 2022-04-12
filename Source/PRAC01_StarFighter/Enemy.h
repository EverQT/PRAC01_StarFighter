// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enemy.generated.h"

UCLASS()
class PRAC01_STARFIGHTER_API AEnemy : public APawn
{
	GENERATED_BODY()

private:
	float Life;
	float NivelDano;
	float NivelEnemy;
	float PosicionX;
	float PosicionY;

public:
	// Sets default values for this pawn's properties
	AEnemy();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getLife() { return Life; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setLife(float _Life) { Life = _Life; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getNivelDano() { return NivelDano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setNivelDano(float _NivelDano) { NivelDano = _NivelDano; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getNivelEnemy() { return NivelEnemy; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setNivelEnemy(float _NivelEnemy) { NivelEnemy = _NivelEnemy; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getPosicionX() { return PosicionX; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setPosicionX(float _PosicionX) { PosicionX = _PosicionX; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getPosicionY() { return PosicionY; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setPosicionY(float _PosicionY) { PosicionY = _PosicionY; }



	UFUNCTION(BlueprintCallable)
		void setMatar(float _Matar) { Matar = _Matar; }
	UFUNCTION(BlueprintCallable)
		float getMatar() { return Matar; }

	UFUNCTION(BlueprintCallable)
		void setMorir(float _Morir) { Morir = _Morir; }
	UFUNCTION(BlueprintCallable)
		float getMorir() { return Morir; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float Matar;
	float Morir;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
