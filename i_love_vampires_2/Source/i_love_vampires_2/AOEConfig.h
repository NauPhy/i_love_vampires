#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AOEUEnum.h"
#include "AOETemplate.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FAOETemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FAOETemplate() = default;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOETemplate")
	EAOEShape _shape = static_cast<EAOEShape>(0);
};
