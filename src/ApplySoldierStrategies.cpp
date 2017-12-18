#include "ApplySoldierStrategies.h"
#include "Player.h"

ApplySoldierStrategies::ApplySoldierStrategies(const std::shared_ptr<MapModifier> &map,
                                               const std::shared_ptr<Player> &player)
        : map(map), player(player) {}

void ApplySoldierStrategies::applySoldierStrategies(Warrior &warrior) const {

}

void ApplySoldierStrategies::applySoldierStrategies(Healer &healer) const {

}
