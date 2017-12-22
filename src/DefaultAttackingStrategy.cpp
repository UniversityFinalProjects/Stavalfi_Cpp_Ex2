#include "DefaultAttackingStrategy.h"

DefaultAttackingStrategy::DefaultAttackingStrategy(const std::shared_ptr<const MapReader> &mapReader)
        : AttackingStrategy(mapReader) {}

std::shared_ptr<Soldier> DefaultAttackingStrategy::chooseEnemyToAttack(const Warrior &warrior) {
    return this->getMapReader()->getEnemiesAround(warrior, 200).front();
}

std::shared_ptr<Soldier> DefaultAttackingStrategy::chooseEnemyToAttack(const Healer &healer) {
    return this->getMapReader()->getEnemiesAround(healer, 200).front();
}
