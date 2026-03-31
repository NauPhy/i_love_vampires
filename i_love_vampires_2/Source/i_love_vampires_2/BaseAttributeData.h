#pragma once
#include "CoreMinimal.h"
#include "Definitions.h"
#include "BaseAttributeData.generated.h"

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UBaseAttributeData : public UObject
{
	GENERATED_BODY()

public:
	virtual void replaceOverrides() {
		LOGERROR("This would be a pure virtual function if Unreal allowed it");
	}
	UBaseAttributeData(const FObjectInitializer& init) : Super(init) {}
};