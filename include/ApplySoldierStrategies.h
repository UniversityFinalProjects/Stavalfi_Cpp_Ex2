#ifndef STAVALFI_CPP_EX2_SOLDIER_ACTIONS_H
#define STAVALFI_CPP_EX2_SOLDIER_ACTIONS_H

#include "MapModifier.h"
#include "FindPlayer.h"

class Player;

class Warrior;

class Healer;

class ApplySoldierStrategies {
    // this class have read map permission only.
    const std::shared_ptr<MapModifier> map;
    // from the following pointer I get all
    // the strategies objects so I can activate
    // them on each soldier I get in the method:
    // applySoldierStrategies.
    const std::shared_ptr<Player> player;

    // interface to find a player by playerId
    const FindPlayer &findPlayer;

public:
    ApplySoldierStrategies(const std::shared_ptr<MapModifier> &map,
                               const std::shared_ptr<Player> &player, const FindPlayer &findPlayer);

    void applySoldierStrategies(Warrior &warrior) const;

    void applySoldierStrategies(Healer &healer) const;

    ~ApplySoldierStrategies() = default;
};


#endif //STAVALFI_CPP_EX2_SOLDIER_ACTIONS_H
