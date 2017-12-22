#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(const std::string &playerId,
                         const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                         const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
                         const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
                         const std::shared_ptr<HealingStrategy> &healingStrategy,
                         const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy) : Player(playerId,
                                                                                                       attackingStrategy,
                                                                                                       choosingWeaponStrategy,
                                                                                                       choosingArmorStrategy,
                                                                                                       healingStrategy,
                                                                                                       movingSoldierStrategy) {}
