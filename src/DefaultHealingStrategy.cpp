#include "DefaultHealingStrategy.h"

std::shared_ptr<Soldier> DefaultHealingStrategy::chooseAllieToHeal(const Healer &healer) {
    return this->getMapReader()->getAlliesAround(healer, 1).front();
}

DefaultHealingStrategy::DefaultHealingStrategy(const std::shared_ptr<const MapReader> &mapReader) : HealingStrategy(
        mapReader) {}
