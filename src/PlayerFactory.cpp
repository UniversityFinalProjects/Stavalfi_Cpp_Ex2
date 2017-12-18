#include "PlayerFactory.h"

#define ENUM_TO_STR(ENUM) std::string(#ENUM)

#include "HumanPlayer.h"
#include "ComputerPlayer.h"

std::shared_ptr<Player>
PlayerFactory::create(PlayerType playerType,
                      const std::list<std::shared_ptr<Soldier>> &soldiers,
                      const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                      const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
                      const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
                      const std::shared_ptr<HealingStrategy> &healingStrategy,
                      const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy) {
    static signed int id = 0;
    switch (playerType) {
        case PlayerType::HUMAN:
            return std::shared_ptr<Player>(new HumanPlayer(std::to_string(id++),
                                                           soldiers,
                                                           attackingStrategy,
                                                           choosingWeaponStrategy,
                                                           choosingArmorStrategy,
                                                           healingStrategy,
                                                           movingSoldierStrategy));
        case PlayerType::COMPUTER:
            return std::shared_ptr<Player>(new ComputerPlayer(std::to_string(id++),
                                                              soldiers,
                                                              attackingStrategy,
                                                              choosingWeaponStrategy,
                                                              choosingArmorStrategy,
                                                              healingStrategy,
                                                              movingSoldierStrategy));
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}
