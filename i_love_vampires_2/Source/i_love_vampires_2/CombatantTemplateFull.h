#pragma once

#include "CoreMinimal.h"
#include "CombatantConfig.h"
#include "CombatantAttributes.h"
#include "CombatantTemplateFull.generated.h"
USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FCombatantTemplateFull : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	//may need TInstancedStruct later
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplateFull")
	FCombatantConfig _config;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplateFull")
	FCombatantAttributes _attributes;
};