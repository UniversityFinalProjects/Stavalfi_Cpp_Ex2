#ifndef STAVALFI_CPP_EX2_PLAYER_H
#define STAVALFI_CPP_EX2_PLAYER_H

#include <string.h>
#include <list>
#include "Soldier.h"
#include "AttackingStrategy.h"
#include "ChoosingWeaponStrategy.h"
#include "HealingStrategy.h"
#include "MovingSoldierStrategy.h"
#include "ApplySoldierStrategies.h"
#include "ChoosingArmorStrategy.h"
#include "MapModifier.h"

class Player {
    const std::string playerId;
    std::list<std::shared_ptr<Soldier>> soldiers;

    // one reason, for example, to use pointer here is
    // because a strategy can be replaced in runtime
    // and we must delete the old one before setting
    // to the new one.
    std::shared_ptr<AttackingStrategy> attackingStrategy;
    std::shared_ptr<ChoosingWeaponStrategy> choosingWeaponStrategy;
    std::shared_ptr<ChoosingArmorStrategy> choosingArmorStrategy;
    std::shared_ptr<HealingStrategy> healingStrategy;
    std::shared_ptr<MovingSoldierStrategy> movingSoldierStrategy;

public:

    Player(const std::string &playerId,
           const std::shared_ptr<AttackingStrategy> &attackingStrategy,
           const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
           const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
           const std::shared_ptr<HealingStrategy> &healingStrategy,
           const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy);

    const std::list<std::shared_ptr<Soldier>> &getSoldiers() const;

    const std::shared_ptr<AttackingStrategy> &getAttackingStrategy() const;

    void setAttackingStrategy(const std::shared_ptr<AttackingStrategy> &attackingStrategy);

    const std::shared_ptr<ChoosingWeaponStrategy> &getChoosingWeaponStrategy() const;

    void setChoosingWeaponStrategy(const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy);

    const std::shared_ptr<ChoosingArmorStrategy> &getChoosingArmorStrategy() const;

    void setChoosingArmorStrategy(const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy);

    const std::shared_ptr<HealingStrategy> &getHealingStrategy() const;

    void setHealingStrategy(const std::shared_ptr<HealingStrategy> &healingStrategy);

    const std::shared_ptr<MovingSoldierStrategy> &getMovingSoldierStrategy() const;

    void setMovingSoldierStrategy(const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy);

    const std::string &getPlayerId() const;

    void addSoldier(std::shared_ptr<Soldier> &soldier);

    void removeSoldier(const std::shared_ptr<Soldier> &soldier);



    virtual ~Player() = 0;
};

#endif //STAVALFI_CPP_EX2_PLAYER_H
