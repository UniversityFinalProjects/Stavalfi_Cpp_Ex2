#ifndef STAVALFI_CPP_EX2_GAME_STATE_H
#define STAVALFI_CPP_EX2_GAME_STATE_H

#include <list>
#include <memory>
#include "Player.h"
#include "MapReaderModifier.h"

struct GameState {
    std::list<std::shared_ptr<Player>> players;
    std::list<std::shared_ptr<Weapon>> weapons;
    std::list<std::shared_ptr<Armor>> armors;
    std::list<std::shared_ptr<SolidItem>> solidItems;
    std::list<std::shared_ptr<Soldier>> soldiers;
    std::string turnOfPlayerId;
};


#endif //STAVALFI_CPP_EX2_GAME_STATE_H
