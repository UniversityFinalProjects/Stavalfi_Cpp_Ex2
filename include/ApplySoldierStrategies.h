#ifndef STAVALFI_CPP_EX2_SOLDIER_ACTIONS_H
#define STAVALFI_CPP_EX2_SOLDIER_ACTIONS_H

#include "AttackingStrategy.h"
#include "ChoosingWeaponStrategy.h"
#include "HealingStrategy.h"
#include "MovingSoldierStrategy.h"
#include "MapModifier.h"
#include "PlayerGame.h"
#include "ChoosingArmorStrategy.h"

class ApplySoldierStrategies {
    const PlayerGame &playerGame;
    MapModifier &mapModifier;
    // the only reason to use smart pointer here
    // because a strategy can be replaced in runtime
    // and we must delete the old one before setting
    // to the new one.
    std::shared_ptr<AttackingStrategy> attackingStrategy;
    std::shared_ptr<ChoosingWeaponStrategy> choosingWeaponStrategy;
    std::shared_ptr<ChoosingArmorStrategy> choosingArmorStrategy;
    std::shared_ptr<HealingStrategy> healingStrategy;
    std::shared_ptr<MovingSoldierStrategy> movingSoldierStrategy;

public:

    ApplySoldierStrategies(const PlayerGame &playerGame, MapModifier &mapModifier,
                           const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                           const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
                           const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
                           const std::shared_ptr<HealingStrategy> &healingStrategy,
                           const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy);

    void playWithSoldier(Soldier &soldier);

    void playWithSoldier(Warrior &warrior);

    void playWithSoldier(Healer &healer);

    void setAttackingStrategy(const std::shared_ptr<AttackingStrategy> &attackingStrategy);

    void setChoosingWeaponStrategy(const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy);

    void setChoosingArmorStrategy(const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy);

    void setHealingStrategy(const std::shared_ptr<HealingStrategy> &healingStrategy);

    void setMovingSoldierStrategy(const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy);
};


#endif //STAVALFI_CPP_EX2_SOLDIER_ACTIONS_H
