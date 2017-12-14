#ifndef STAVALFI_CPP_EX2_WARRIOR_ACTIONS_H
#define STAVALFI_CPP_EX2_WARRIOR_ACTIONS_H

#include "AttackingStrategy.h"
#include "CollectingItemStrategy.h"
#include "HealingStrategy.h"
#include "MovingSoldierStrategy.h"
#include "MapModifier.h"

class SoldierActions {
    MapModifier &mapModifier;
    // the only reason to use smart pointer here
    // because a strategy can be replaced in runtime
    // and we must delete the old one before setting
    // to the new one.
    std::shared_ptr<AttackingStrategy> attackingStrategy;
    std::shared_ptr<CollectingItemStrategy> collectingItemStrategy;
    std::shared_ptr<HealingStrategy> healingStrategy;
    std::shared_ptr<MovingSoldierStrategy> movingSoldierStrategy;
public:
    SoldierActions(MapModifier &mapModifier, const std::shared_ptr<AttackingStrategy> &attackingStrategy,
                   const std::shared_ptr<CollectingItemStrategy> &collectingItemStrategy,
                   const std::shared_ptr<HealingStrategy> &healingStrategy,
                   const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy);

    void setAttackingStrategy(const std::shared_ptr<AttackingStrategy> &attackingStrategy);

    void setCollectingItemStrategy(const std::shared_ptr<CollectingItemStrategy> &collectingItemStrategy);

    void setHealingStrategy(const std::shared_ptr<HealingStrategy> &healingStrategy);

    void setMovingSoldierStrategy(const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy);

    void play(Soldier &soldier);

    void play(Warrior &warrior);

    void play(Healer &healer);
};


#endif //STAVALFI_CPP_EX2_WARRIOR_ACTIONS_H
