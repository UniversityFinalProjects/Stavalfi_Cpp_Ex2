#ifndef STAVALFI_CPP_EX2_HUMAN_PLAYER_H
#define STAVALFI_CPP_EX2_HUMAN_PLAYER_H

#include "Player.h"

class HumanPlayer : public Player {
public:
    HumanPlayer(const std::string &player_id, const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
                const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
                const std::shared_ptr<HealingStrategy> &healingStrategy,
                const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy);

    ~HumanPlayer() override = default;
};


#endif //STAVALFI_CPP_EX2_HUMAN_PLAYER_H
