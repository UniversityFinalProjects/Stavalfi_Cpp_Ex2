#include "ApplySoldierStrategies.h"
#include "Player.h"

ApplySoldierStrategies::ApplySoldierStrategies(const std::shared_ptr<MapModifier> &map,
                                               const std::shared_ptr<Player> &player, const FindPlayer &findPlayer)
        : map(map), player(player), findPlayer(findPlayer) {}

void ApplySoldierStrategies::applySoldierStrategies(Warrior &warrior) const {
    this->player->getMovingSoldierStrategy()->chooseNewLocation(warrior);
}

void ApplySoldierStrategies::applySoldierStrategies(Healer &healer) const {
    this->player->getMovingSoldierStrategy()->chooseNewLocation(healer);
}
