// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/UserDefinedEnum.h"
#include "DA_WeaponInfo.generated.h"

UENUM(BlueprintType)
enum class Hand : uint8
{
	RightHand = 0 UMETA(Displayname = "RightHand"),
	LeftHand = 1 UMETA(Displayname = "LeftHand")

};

UCLASS()
class FALLENRAVEN_API UDA_WeaponInfo : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float CharacterSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float CharacterStamina;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	Hand HandType;
};
