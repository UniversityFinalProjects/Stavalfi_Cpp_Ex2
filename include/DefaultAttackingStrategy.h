#ifndef STAVALFI_CPP_EX2_DEFAULT_ATTACK_SOLDIER_STRATEGY_H
#define STAVALFI_CPP_EX2_DEFAULT_ATTACK_SOLDIER_STRATEGY_H


#include "MapReader.h"
#include "AttackingStrategy.h"

class DefaultAttackingStrategy : AttackingStrategy {
public:
    DefaultAttackingStrategy(const MapReader &mapReader);

    Soldier &chooseEnemyToAttack(const Warrior &warrior) override {
        return *this->getMapReader().getAlliesAround(warrior, 1).front();
    }

    Soldier &chooseEnemyToAttack(const Healer &healer) override {
        return *this->getMapReader().getAlliesAround(healer, 1).front();
    }
};


#endif //STAVALFI_CPP_EX2_DEFAULT_ATTACK_SOLDIER_STRATEGY_H
