#ifndef STAVALFI_CPP_EX2_COMPUTER_PLAYER_H
#define STAVALFI_CPP_EX2_COMPUTER_PLAYER_H


#include <memory.h>
#include "Player.h"

class ComputerPlayer : public Player {
public:
    ComputerPlayer(const std::string &playerId,
                   const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                   const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
                   const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
                   const std::shared_ptr<HealingStrategy> &healingStrategy,
                   const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy);

    void report(const Reporter &reporter) const override;

    ~ComputerPlayer() override = default;;
};


#endif //STAVALFI_CPP_EX2_COMPUTER_PLAYER_H
