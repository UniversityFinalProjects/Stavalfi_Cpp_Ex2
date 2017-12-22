#include "DefaultHealingStrategy.h"

std::shared_ptr<Soldier> DefaultHealingStrategy::chooseAllieToHeal(const Healer &healer) {
    return this->getMapReader()->getSoldier(0, 1);
}

DefaultHealingStrategy::DefaultHealingStrategy(const std::shared_ptr<const MapReader> &mapReader) : HealingStrategy(
        mapReader) {}
