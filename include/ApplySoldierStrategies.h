#ifndef STAVALFI_CPP_EX2_SOLDIER_ACTIONS_H
#define STAVALFI_CPP_EX2_SOLDIER_ACTIONS_H

#include "MapModifier.h"

class Player;

class Warrior;

class Healer;

class ApplySoldierStrategies {
    const std::shared_ptr<MapModifier> map;
    const std::shared_ptr<Player> player;
public:
    ApplySoldierStrategies(const std::shared_ptr<MapModifier> &map, const std::shared_ptr<Player> &player);

    void applySoldierStrategies(Warrior &warrior) const;

    void applySoldierStrategies(Healer &healer) const;

    ~ApplySoldierStrategies() = default;
};


#endif //STAVALFI_CPP_EX2_SOLDIER_ACTIONS_H
