#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Definitions.h"
#include "BaseAttributeComponent.generated.h"

UCLASS()
class I_LOVE_VAMPIRES_2_API UBaseAttributeComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	virtual const UBaseAttributes* getFinal() const {
		LOGERROR("UBaseAttributeComponent::getFinal - not implemented");
		return NewObject<UBaseAttributes>();
	}
};