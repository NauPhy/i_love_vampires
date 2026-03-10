#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpriteManagerUEnum.h"
#include "CombatantTemplate.generated.h"
USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FCombatantTemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FCombatantTemplate() = default;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	FString _name = "Combatant";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	ESprite _sprite = static_cast<ESprite>(0);
};