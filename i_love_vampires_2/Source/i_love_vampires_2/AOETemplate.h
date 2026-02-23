#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AOETemplate.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FAOETemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FAOETemplate() :
		ID("AOE"),
		shape(0),
		radius(1.f),
		duration(0.f)
	{
	}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOETemplate")
	FName ID;
	//0 is circle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOETemplate")
	int shape;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOETemplate")
	float radius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOETemplate")
	float duration;
};
