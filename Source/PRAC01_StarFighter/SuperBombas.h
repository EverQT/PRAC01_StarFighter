// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SuperBombas.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PRAC01_STARFIGHTER_API USuperBombas : public UActorComponent
{
	GENERATED_BODY()

private:
	float TipoBonbas;
	float RadioDano;
	float Tamano;
	float NivelDano;
	float UbicacionX;
	float UbicacionY;

public:	
	// Sets default values for this component's properties
	USuperBombas();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTipoBonbas() { return TipoBonbas; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTipoBonbas(float _TipoBonbas) { TipoBonbas = _TipoBonbas; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getRadioDano() { return RadioDano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setRadioDano(float _RadioDano) { RadioDano = _RadioDano; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getTamano() { return Tamano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTamano(float _Tamano) { Tamano = _Tamano; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionX() { return UbicacionX; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionX(float _UbicacionX) { UbicacionX = _UbicacionX; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getUbicacionY() { return UbicacionY; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setUbicacionY(float _UbicacionY) { UbicacionY = _UbicacionY; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getNIvelDano() { return NivelDano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setNivelDano(float _NivelDano) { NivelDano = _NivelDano; }


	UFUNCTION(BlueprintCallable)
		void setMatar(float _Matar) { Matar = _Matar; }
	UFUNCTION(BlueprintCallable)
		float getMatar() { return Matar; }


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	float Matar;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
