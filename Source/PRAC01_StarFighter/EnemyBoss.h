// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnemyBoss.generated.h"

UCLASS()
class PRAC01_STARFIGHTER_API AEnemyBoss : public APawn
{
	GENERATED_BODY()

private:
	float Life;
	float NivelDano;
	float NivelEnergia;
	float LvEnemy;
	float PosicionX;
	float PosicionY;

public:
	// Sets default values for this pawn's properties
	AEnemyBoss();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getLife() { return Life; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setLife(float _Life) { Life = _Life; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getNivelEnergia() { return NivelEnergia; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setNivelEnergia(float _NivelEnergia) { NivelEnergia = _NivelEnergia; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getLvEnemy() { return LvEnemy; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setLvEnemy(float _LvEnemy) { LvEnemy = _LvEnemy; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getPosicionX() { return PosicionX; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setPosicionX(float _PosicionX) { PosicionX = _PosicionX; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getPosicionY() { return PosicionY; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setPosicionY(float _PosicionY) { PosicionY = _PosicionY; }


	UFUNCTION(BlueprintCallable)
		void setEsquivar(float _Esquivar) { Esquivar = _Esquivar; }
	UFUNCTION(BlueprintCallable)
		float getEsquivar() { return Esquivar; }

	UFUNCTION(BlueprintCallable)
		void setMatar(float _Matar) { Matar = _Matar; }
	UFUNCTION(BlueprintCallable)
		float getMatar() { return Matar; }

	UFUNCTION(BlueprintCallable)
		void setMorir(float _Morir) { Morir = _Morir; }
	UFUNCTION(BlueprintCallable)
		float getMirir() { return Morir; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float Matar;
	float Esquivar;
	float Morir;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
