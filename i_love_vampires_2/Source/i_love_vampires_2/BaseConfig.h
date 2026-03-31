#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Definitions.h"
#include "BaseConfig.generated.h"

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UBaseConfig : public UObject {
	GENERATED_BODY()

public:
	virtual void replaceOverrides() {
		LOGERROR("This would be a pure virtual function if Unreal allowed it");
	}
	UBaseConfig(const FObjectInitializer& init) : Super(init) {}
};