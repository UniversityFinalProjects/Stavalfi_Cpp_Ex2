#include "ComputerPlayer.h"

ComputerPlayer::ComputerPlayer(const std::string &playerId, const std::list<std::shared_ptr<Soldier>> &soldiers,
                               const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                               const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
                               const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
                               const std::shared_ptr<HealingStrategy> &healingStrategy,
                               const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy) : Player(playerId,
                                                                                                             soldiers,
                                                                                                             attackingStrategy,
                                                                                                             choosingWeaponStrategy,
                                                                                                             choosingArmorStrategy,
                                                                                                             healingStrategy,
                                                                                                             movingSoldierStrategy) {}
