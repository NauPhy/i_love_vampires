#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StructUtils/InstancedStruct.h"

#include "AttackActor.h"
#include "WeaponAttributes.h"
#include "WeaponConfig.h"

#include "ActiveTemplate.generated.h"



USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API ActiveTemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	//For UActive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveTemplate")
	FString _name = "Weapon";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveTemplate")
	TSubclassOf<AAttackActor> _attackActorClass;

	//For AAttackActor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveTemplate")
	TInstancedStruct<FWeaponConfig> _config;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveTemplate")
	TInstancedStruct<FWeaponAttributes> _attributes;
};