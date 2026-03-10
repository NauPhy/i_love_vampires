#include "Combatant.h"
#include <functional>
#include "MyGameplayStatics.h"
#include "CombatantTemplate.h"
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
		//callbacks
		std::function <void(CombatantAttribute::MyEnum, float, float)> callback = std::bind(&ACombatant::onCurrentHPChanged, this, std::placeholders::_1, std::placeholders::_2);
		size_t offset = 0;
		{
			FCombatantTemplate_Attr temp;
			offset = UMyAttributeSet::calculateOffset(temp, temp._currentHP);
		}
		_attributes.addCallback(offset, callback);
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
	{
		// basic
		UAssetRefs* assetRefs = nullptr;
		if (!MyGameplayStatics::getAssetRefs(this, assetRefs)) {
			return;
		}
		FCombatantTemplate* myTemplate = assetRefs->getCombatantTemplate(newID);
		_name = myTemplate._name;
		_ID = newID;

		// sprite
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
	// attributes
	{
		_attributes.initialise_UMyCombatantAttributeSet(this, newID);
	}
}
void ACombatant::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	_attributes.clearCallback();
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
	_attributes.tick(DeltaTime);
}
void ACombatant::inflictStatus(std::unique_ptr<StatusEffect> newStatus) {
	if (newStatus->getDuration() <= EPSILON) {
		_attributes.inflictInstantStatus(std::move(newStatus));
		return;
	}
	_attributes.inflictStatus(std::move(newStatus));
}

void ACombatant::exchangeContactDamage(ACombatant* left, ACombatant* right) {
	const float leftThreat = left->_attributes.getAttributes()._contactDamage;
	const float rightThreat = right->_attributes.getAttributes()._contactDamage;

	left->inflictStatus(std::make_unique<StatusEffect_Damage>(rightThreat));
	right->inflictStatus(std::make_unique<StatusEffect_Damage>(leftThreat));
}