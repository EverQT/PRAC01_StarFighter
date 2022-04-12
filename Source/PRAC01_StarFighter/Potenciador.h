// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Potenciador.generated.h"

UCLASS()
class PRAC01_STARFIGHTER_API APotenciador : public APawn
{
	GENERATED_BODY()

private:
	float UbicacionX;
	float UbicacionY;
	float TipoPotencia;
	float Aumento;

public:
	// Sets default values for this pawn's properties
	APotenciador();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionX() { return UbicacionX; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionX(float _UbicacionX) { UbicacionX = _UbicacionX; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionY() { return UbicacionY; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionY(float _UbicacionY) { UbicacionY = _UbicacionY; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTipoPotencia() { return TipoPotencia; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTipoPotencia(float _TipoPotencia) { TipoPotencia = _TipoPotencia; }


	UFUNCTION(BluePrintCallable)
		void setAumento(float _Aumento) { Aumento = _Aumento; }
	UFUNCTION(BlueprintCallabe)
		float getAumento() { return Aumento; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
