#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AOETemplate_Attr.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FAOETemplate_Attr : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FAOETemplate_Attr() = default;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOETemplate")
	float _radius = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOETemplate")
	float _duration = 0.f;
};
