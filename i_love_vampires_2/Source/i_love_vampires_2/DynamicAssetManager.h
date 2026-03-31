#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BaseTemplate.h"
#include "BaseConfig.h"
#include "BaseAttributeData.h"
#include <type_traits>
#include "DynamicAssetManager.generated.h"
class UInputMappingContext;
class UCombatantTemplate;

UCLASS()
class I_LOVE_VAMPIRES_2_API UDynamicAssetManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TMap<const TObjectPtr<const UBaseTemplate>, UBaseTemplate*> _templateMap;

	UDynamicAssetManager() = default;
	template <typename T>
	const T* registerTemplate(const T* diskTemplate);
};

template <typename T>
const T* UDynamicAssetManager::registerTemplate(const T* diskTemplate) {
	static_assert(std::is_base_of_v<UBaseTemplate, T>, "T must be a subclass of UBaseTemplate");

	if (!IsValid(diskTemplate)) {
		LOGERROR("UDynamicAssetManager::registerTemplate: Invalid template provided");
		return nullptr;
	}

	const UBaseTemplate* myTemplate = Cast<UBaseTemplate>(diskTemplate);

	if (!_templateMap.Contains(diskTemplate)) {
		UBaseTemplate* newTemplate = myTemplate->createOverrideCopy();
		_templateMap.Add(diskTemplate, newTemplate);
		const T* ret = Cast<T>(newTemplate);
		if (!IsValid(ret)) {
			LOGERROR("UDynamicAssetManager::registerTemplate: Failed to cast new template to type T");
			return nullptr;
		}
		return ret;
	}
	else {
		const UBaseTemplate* existingTemplate = _templateMap[diskTemplate];
		const T* ret = Cast<T>(existingTemplate);
		if (!IsValid(ret)) {
			LOGERROR("UDynamicAssetManager::registerTemplate: Failed to cast existing template to type T");
			return nullptr;
		}
		return ret;
	}
}