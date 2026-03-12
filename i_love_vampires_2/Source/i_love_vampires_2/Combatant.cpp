#include "Combatant.h"
#include <functional>
#include "MyGameplayStatics.h"
#include "CombatantTemplateFull.h"
#include "SpriteManager.h"
#include "AssetRefs.h"
#include "Definitions.h"
#include "StatusEffect_Damage.h"

ACombatant::ACombatant()
{
	{
		PrimaryActorTick.bCanEverTick = true;
	}
	// Attribute init
	{
		_attributeSet = MakeShared<UMyCombatantAttributeSet>();
		//callbacks
		std::function <void(CombatantAttribute::MyEnum, float, float)> callback = std::bind(&ACombatant::onCurrentHPChanged, this, std::placeholders::_1, std::placeholders::_2);
		size_t offset = 0;
		{
			FCombatantAttributes temp;
			offset = UMyAttributeSet::calculateOffset(temp, temp._currentHP);
		}
		_attributeSet->addCallback(offset, callback);
	}
	//Flipbook init
	{
		_combatantFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("CombatantFlipbook"));
		_combatantFlipbook->SetupAttachment(RootComponent);
		_combatantFlipbook->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
		_combatantFlipbook->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
	}
}

void ACombatant::initialise_ACombatant(FName newID)
{
	//basic
	_ID = ID;
	//attributes and config
	UAssetRefs* assetRefs = nullptr;
	if (!MyGameplayStatics::getAssetRefs(this, assetRefs)) {
		return;
	}
	const FCombatantTemplateFull* templateData = assetRefs->getCombatantTemplate(newID);
	if (templateData == nullptr) {
		LOGERROR("ACombatant::initialise_ACombatant - templateData is null");
		return;
	}
	_config = templateData->_config;
	_attributeSet->initialise_UMyCombatantAttributeSet(&templateData->_attributes);
	//weapons
	for (const FName& activeID : templateData->_config._startingWeapons) {
		_activeAbilities.Add(NewObject<UActive>(this));
		_activeAbilities.Back()->initialise_UActive(this, activeID, _attributeSet);
	}
	//sprite
	ESprite spriteName = myTemplate._sprite;
	USpriteManager* spriteManager = nullptr;
	if (!MyGameplayStatics::getSpriteManager(this, spriteManager)) {
		return;
	}
	UPaperFlipbook* tempSprite = nullptr;
	if (!tempSprite = spriteManager->getSprite(spriteName, tempSprite))
		return;
	_combatantFlipbook->SetFlipbook(tempSprite);
}
void ACombatant::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	_attributeSet->clearCallback();
	Super::EndPlay(EndPlayReason);
}
void ACombatant::onCurrentHPChanged(float oldVal, float newVal)
{
	if (newVal <= 0.0f) {
		Destroy();
	}
}
void ACombatant::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	_attributeSet->tick(DeltaTime);
	for (auto& active : _activeAbilities) {
		active->tick(DeltaTime);
	}
}
void ACombatant::inflictStatus(std::unique_ptr<StatusEffect> newStatus) {
	if (newStatus->getDuration() <= EPSILON) {
		_attributeSet->inflictInstantStatus(std::move(newStatus));
		return;
	}
	_attributeSet->inflictStatus(std::move(newStatus));
}

void ACombatant::exchangeContactDamage(ACombatant* left, ACombatant* right) {
	const float leftThreat = left->_attributeSet->getAttributes()._contactDamage;
	const float rightThreat = right->_attributeSet->getAttributes()._contactDamage;

	left->inflictStatus(std::make_unique<StatusEffect_Damage>(rightThreat));
	right->inflictStatus(std::make_unique<StatusEffect_Damage>(leftThreat));
}