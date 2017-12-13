//
// Created by stava on 12/12/2017.
//

#ifndef STAVALFI_CPP_EX2_ATTACKING_SOLDIER_STRATEGY_H
#define STAVALFI_CPP_EX2_ATTACKING_SOLDIER_STRATEGY_H


#include "MapReader.h"

class AttackingEnemyStrategy {
    const MapReader &mapReader;
protected:
    const MapReader &getMapReader() const;

public:
    AttackingEnemyStrategy(const MapReader &mapReader);

    virtual Soldier &choose_enemy_to_attack(const Soldier &soldier) = 0;

    virtual ~AttackingEnemyStrategy() = default;
};

#endif //STAVALFI_CPP_EX2_ATTACKING_SOLDIER_STRATEGY_H
