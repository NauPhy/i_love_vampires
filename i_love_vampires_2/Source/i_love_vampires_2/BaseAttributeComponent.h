#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Definitions.h"
#include "BaseAttributes.h"
#include "StatusEffect.h"
#include "BaseAttributeComponent.generated.h"
class UStatusEffect;

UCLASS()
class I_LOVE_VAMPIRES_2_API UBaseAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	UBaseAttributes* _final = nullptr;
	UPROPERTY()
	UBaseAttributes* _base = nullptr;
	UPROPERTY()
	UBaseAttributes* _offsets = nullptr;

public:
	// I cannot figure out how to force Unreal into compile time safety- even double dispatch requires "error- not implemented" functions.
	// I'm going to leave the double dispatch on the factories because all the hard work is already done, and it's specialised enough that I don't think
	// I will need to add any new features to it, but for this I'm just gonna say fuck it and do runtime casts.	
	template <typename attributeType>
	attributeType* getFinal() const;
	template <typename attributeType>
	attributeType* getBase() const;
	template <typename attributeType>
	attributeType* getOffsets() const;
	template <typename attributeType>
	attributeType* getDiscretizedFinal(UObject* outer) const;
};
/////////////////////////////////////////////////////////////

template<typename attributeType>
attributeType* UBaseAttributeComponent::getFinal() const {
	static_assert(TIsDerivedFrom<attributeType, UBaseAttributes>::IsDerived, "T must derive from UBaseAttributes");
	attributeType* ret = Cast<attributeType>(_final);
	if (ret == nullptr) {
		LOGERROR("Abondon hope all ye who enter here");
		return nullptr;
	}
	return ret;
}
template<typename attributeType>
attributeType* UBaseAttributeComponent::getBase() const {
	static_assert(TIsDerivedFrom<attributeType, UBaseAttributes>::IsDerived, "T must derive from UBaseAttributes");
	attributeType* ret = Cast<attributeType>(_base);
	if (ret == nullptr) {
		LOGERROR("Abondon hope all ye who enter here");
		return nullptr;
	}
	return ret;
}
template<typename attributeType>
attributeType* UBaseAttributeComponent::getOffsets() const {
	static_assert(TIsDerivedFrom<attributeType, UBaseAttributes>::IsDerived, "T must derive from UBaseAttributes");
	attributeType* ret = Cast<attributeType>(_offsets);
	if (ret == nullptr) {
		LOGERROR("Abondon hope all ye who enter here");
		return nullptr;
	}
	return ret;
}
template<typename attributeType>
attributeType* UBaseAttributeComponent::getDiscretizedFinal(UObject* outer) const {
	static_assert(TIsDerivedFrom<attributeType, UBaseAttributes>::IsDerived, "T must derive from UBaseAttributes");
	attributeType* ret = Cast<attributeType>(_offsets);
	if (ret == nullptr) {
		LOGERROR("Abondon hope all ye who enter here");
		return nullptr;
	}
	return ret->getDiscretizedCopy(outer);
}