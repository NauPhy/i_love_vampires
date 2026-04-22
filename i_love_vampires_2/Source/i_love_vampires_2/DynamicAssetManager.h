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
	TMap<const TObjectPtr<UBaseTemplate>, UBaseTemplate*> _templateMap;

	UDynamicAssetManager() = default;
	template <typename T>
	const T* registerTemplate(T* diskTemplate);
	template <typename T>
	T* getKey(const T* runtimeTemplate) const;

};

template <typename T>
const T* UDynamicAssetManager::registerTemplate(T* diskTemplate) {
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

template<typename T>
T* UDynamicAssetManager::getKey(const T* runtimeTemplate) const {
	static_assert(std::is_base_of_v<UBaseTemplate, T>, "T must be a subclass of UBaseTemplate");
	if (!IsValid(runtimeTemplate)) {
		LOGERROR("UDynamicAssetManager::getKey: Invalid template provided");
		return nullptr;
	}
	for (const auto& pair : _templateMap) {
		if (pair.Value == runtimeTemplate) {
			T* ret = Cast<T>(pair.Key);
			if (!IsValid(ret)) {
				LOGERROR("UDynamicAssetManager::getKey: Failed to cast key template to type T");
				return nullptr;
			}
			return ret;
		}
	}
	LOGERROR("UDynamicAssetManager::getKey: No matching key found for provided runtime template");
	return nullptr;
}