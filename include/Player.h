#ifndef STAVALFI_CPP_EX2_PLAYER_H
#define STAVALFI_CPP_EX2_PLAYER_H

#include <string.h>
#include <list>
#include "Soldier.h"
#include "AttackingStrategy.h"
#include "CollectingItemStrategy.h"
#include "HealingStrategy.h"
#include "MovingSoldierStrategy.h"
#include "MapModifier.h"
#include "ApplySoldierStrategies.h"

class Player {
    const std::string player_id;
    std::list<std::shared_ptr<Soldier>> soldiers;
    // const issue - if this property will be const then we can't
    // change in the map of this game (add/remove MapObjects).
    // OR change the strategies of this player.
    // ----
    // reference issue - there will be limited amount of players
    // and each player will be located in the heap so there is
    // no need to locate this object in different place in the heap.
    // in this way, the object will be in the same page as the player object.
    // and this object is very small in it's size.
    ApplySoldierStrategies applySoldierStrategies;
public:
    Player(const std::string &player_id, const ApplySoldierStrategies &applySoldierStrategies);

public:

    void addSoldier(std::shared_ptr<Soldier> &soldier);

    void removeSoldier(const std::shared_ptr<Soldier> &soldier);

    void play();

    ~Player() = default;
};

#endif //STAVALFI_CPP_EX2_PLAYER_H
