#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StructUtils/InstancedStruct.h"

#include "WeaponConfig.h"
#include "WeaponAttributes.h"
#include "SubActiveTemplate.h"

#include "ActiveTemplate.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FActiveTemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	//For UActive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveTemplate")
	FSubActiveTemplate _sub;

	//For AAttackActor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveTemplate")
	TInstancedStruct<FWeaponConfig> _config;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveTemplate")
	TInstancedStruct<FWeaponAttributes> _attributes;
};