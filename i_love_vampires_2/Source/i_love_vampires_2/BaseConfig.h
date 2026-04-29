#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Definitions.h"
#include "BaseConfig.generated.h"

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UBaseConfig : public UObject {
	GENERATED_BODY()

public:
	virtual void dynamicDeepCopy(const UObject* context)
		PURE_VIRTUAL(UBaseConfig::dynamicDeepCopy,
			LOGERROR("dynamicDeepCopy not implemented in this class"););
	virtual void replaceOverrides()
		PURE_VIRTUAL(UBaseConfig::replaceOverrides,
			LOGERROR("replaceOverrides not implemented in this class"););
	UBaseConfig(const FObjectInitializer& init) : Super(init) {}
};