#ifndef STAVALFI_CPP_EX2_GAME_STATE_H
#define STAVALFI_CPP_EX2_GAME_STATE_H

#include <list>
#include <memory>
#include "Player.h"
#include "Reportable.h"

class GameState : public Reportable {
public:
    std::list<std::shared_ptr<Player>> players;
    std::list<std::shared_ptr<Weapon>> weapons;
    std::list<std::shared_ptr<Armor>> armors;
    std::list<std::shared_ptr<SolidItem>> solidItems;
    std::list<std::shared_ptr<Soldier>> soldiers;
    std::string turnOfPlayerId;

    void report(const Reporter &reporter) const override;

    ~GameState() override;
};


#endif //STAVALFI_CPP_EX2_GAME_STATE_H
