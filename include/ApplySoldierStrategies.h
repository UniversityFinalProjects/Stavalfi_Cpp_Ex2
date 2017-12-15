#ifndef STAVALFI_CPP_EX2_SOLDIER_ACTIONS_H
#define STAVALFI_CPP_EX2_SOLDIER_ACTIONS_H

#include "Warrior.h"
#include "Healer.h"

class ApplySoldierStrategies {
public:
    virtual void playWithSoldier(Soldier &soldier) = 0;

    virtual void playWithSoldier(Warrior &warrior) = 0;

    virtual void playWithSoldier(Healer &healer) = 0;

    virtual ~ApplySoldierStrategies() = 0;
};


#endif //STAVALFI_CPP_EX2_SOLDIER_ACTIONS_H
