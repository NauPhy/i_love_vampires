#pragma once
#include "CoreMinimal.h"
#include "Definitions.h"
#include "BaseUpgradeContainer.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UBaseUpgradeContainer : public UObject {
	GENERATED_BODY()

public:
	virtual void replaceOverrides()
		PURE_VIRTUAL(UBaseUpgradeContainer::replaceOverrides,
			LOGERROR("replaceOverrides not implemented in this class"););
};
