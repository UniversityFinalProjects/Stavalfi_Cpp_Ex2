#ifndef STAVALFI_CPP_EX2_PLAYER_FACTORY_H
#define STAVALFI_CPP_EX2_PLAYER_FACTORY_H


#include "Player.h"

enum PlayerType {
    COMPUTER,
    HUMAN
};

class PlayerFactory {
public:
    static std::shared_ptr<Player> create(PlayerType playerType,
                                          const std::list<std::shared_ptr<Soldier>> &soldiers,
                                          const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                                          const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
                                          const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
                                          const std::shared_ptr<HealingStrategy> &healingStrategy,
                                          const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy);
};


#endif //STAVALFI_CPP_EX2_PLAYER_FACTORY_H
