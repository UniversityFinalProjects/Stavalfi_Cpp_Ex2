#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(const std::string &player_id, const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                         const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
                         const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
                         const std::shared_ptr<HealingStrategy> &healingStrategy,
                         const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy) : Player(player_id,
                                                                                                       attackingStrategy,
                                                                                                       choosingWeaponStrategy,
                                                                                                       choosingArmorStrategy,
                                                                                                       healingStrategy,
                                                                                                       movingSoldierStrategy) {}
