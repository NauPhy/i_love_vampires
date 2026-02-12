// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "CombatantAttributeSet.generated.h"
struct FCombatantData;

UCLASS()
class I_LOVE_VAMPIRES_2_API UCombatantAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UCombatantAttributeSet();
	//UCombatantAttributeSet(const FCombatantData& CombatantData);
private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Defense")
	FGameplayAttributeData maxHP;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Defense")
	FGameplayAttributeData damageReduction_flat;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Defense")
	FGameplayAttributeData damageReduction_percent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Defense")
	FGameplayAttributeData healthRegen_flat;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Defense")
	FGameplayAttributeData healthRegen_percent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Offense")
	FGameplayAttributeData critChance;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Offense")
	FGameplayAttributeData critMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Offense")
	FGameplayAttributeData attackSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Projectile")
	FGameplayAttributeData bonusBounces;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Projectile")
	FGameplayAttributeData bonusPierce;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Projectile")
	FGameplayAttributeData bonusProjectiles;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Projectile")
	FGameplayAttributeData projectileSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Projectile")
	FGameplayAttributeData projectileSize;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "AOE")
	FGameplayAttributeData AOESize;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Utility")
	FGameplayAttributeData movementSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Utility")
	FGameplayAttributeData range;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"), Category = "Misc")
	FGameplayAttributeData contactDamage;

	// Exactly as mutable as the others in practice
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Misc")
	FGameplayAttributeData currentHP;
};
