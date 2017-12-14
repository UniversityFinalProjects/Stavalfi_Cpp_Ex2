#ifndef STAVALFI_CPP_EX2_PLAYER_H
#define STAVALFI_CPP_EX2_PLAYER_H

#include <string>
#include "Soldier.h"
#include "AttackingStrategy.h"
#include "CollectingItemStrategy.h"
#include "HealingStrategy.h"
#include "MovingSoldierStrategy.h"

class Player {
    const std::string player_id;
    std::vector<Soldier &> soldiers;
    SoldierActions &soldierActions;

public:
    Player(const std::string &player_id, SoldierActions &soldierActions) : player_id(player_id),
                                                                           soldierActions(soldierActions) {}

    void addSoldier(Soldier &soldier) {
        this->soldiers.push_back(soldier);
    }

    void play() {
        for (auto soldier:this->soldiers)
            soldier.play(this->soldierActions);
    }
};

#endif //STAVALFI_CPP_EX2_PLAYER_H
