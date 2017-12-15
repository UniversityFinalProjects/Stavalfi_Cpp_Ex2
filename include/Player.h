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
#include "FindPlayer.h"

class Player : public ApplySoldierStrategies {
    const std::string player_id;
    std::list<std::shared_ptr<Soldier>> soldiers;

    // there is reason and no easy way to
    // use smart pointer here because the
    // class who will send this reference
    // is the Game Class and by default it
    // will be destroyed almost last.
    const FindPlayer &findPlayer;

    MapModifier &mapModifier;

    // one reason, for example, to use smart pointer here is
    // because a strategy can be replaced in runtime
    // and we must delete the old one before setting
    // to the new one.
    std::shared_ptr<AttackingStrategy> attackingStrategy;
    std::shared_ptr<ChoosingWeaponStrategy> choosingWeaponStrategy;
    std::shared_ptr<ChoosingArmorStrategy> choosingArmorStrategy;
    std::shared_ptr<HealingStrategy> healingStrategy;
    std::shared_ptr<MovingSoldierStrategy> movingSoldierStrategy;

public:

    Player(const std::string &player_id, const FindPlayer &findPlayer, MapModifier &mapModifier,
           const std::shared_ptr<AttackingStrategy> &attackingStrategy,
           const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
           const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
           const std::shared_ptr<HealingStrategy> &healingStrategy,
           const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy);

    void addSoldier(std::shared_ptr<Soldier> &soldier);

    void removeSoldier(const std::shared_ptr<Soldier> &soldier);

    void play();

    void playWithSoldier(Soldier &soldier) override;

    void playWithSoldier(Warrior &warrior) override;

    void playWithSoldier(Healer &healer) override;

    ~Player() override = default;
};

#endif //STAVALFI_CPP_EX2_PLAYER_H
