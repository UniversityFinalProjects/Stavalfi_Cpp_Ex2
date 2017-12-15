#ifndef STAVALFI_CPP_EX2_ATTACKING_SOLDIER_STRATEGY_H
#define STAVALFI_CPP_EX2_ATTACKING_SOLDIER_STRATEGY_H


#include "MapReader.h"
#include "Soldier.h"
#include "Warrior.h"
#include "Healer.h"
#include "SoldierStrategy.h"

class AttackingStrategy : public SoldierStrategy {

public:

    AttackingStrategy(const MapReader &mapReader);

    virtual Soldier &chooseEnemyToAttack(const Warrior &warrior) = 0;

    virtual Soldier &chooseEnemyToAttack(const Healer &healer) = 0;

    virtual ~AttackingStrategy() = 0;
};

#endif //STAVALFI_CPP_EX2_ATTACKING_SOLDIER_STRATEGY_H
