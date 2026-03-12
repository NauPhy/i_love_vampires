//couldn't think of a better name. This is the portion of ActiveTemplate used only by UActive.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"

#include "AttackActor.h"

#include "SubActiveTemplate.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FSubActiveTemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveTemplate")
	FString _name = "Active";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveTemplate")
	TSubclassOf<AAttackActor> _attackActorClass = AAttackActor::StaticClass();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponConfig")
	bool _startOnCooldown = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponAttributes")
	float warmup = 1.f;
};