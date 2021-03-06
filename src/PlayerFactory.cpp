#include "PlayerFactory.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"

std::shared_ptr<Player>
PlayerFactory::create(PlayerType playerType,
                      const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                      const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
                      const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
                      const std::shared_ptr<HealingStrategy> &healingStrategy,
                      const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy) {
    static signed int id = 0;
    switch (playerType) {
        case PlayerType::HUMAN:
            return std::make_shared<HumanPlayer>(std::to_string(id++),
                                                 attackingStrategy,
                                                 choosingWeaponStrategy,
                                                 choosingArmorStrategy,
                                                 healingStrategy,
                                                 movingSoldierStrategy);
        case PlayerType::COMPUTER:
            return std::make_shared<ComputerPlayer>(std::to_string(id++),
                                                    attackingStrategy,
                                                    choosingWeaponStrategy,
                                                    choosingArmorStrategy,
                                                    healingStrategy,
                                                    movingSoldierStrategy);
    }
}
