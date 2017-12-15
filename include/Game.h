#ifndef STAVALFI_CPP_EX2_GAME_H
#define STAVALFI_CPP_EX2_GAME_H


#include "Player.h"
#include "PlayerGame.h"

class Game : public PlayerGame {
    std::list<std::shared_ptr<Player>> players;
public:
    Player &getPlayerBySoldier(const Soldier &soldier) const override {
        return *this->players.front();
    }
};


#endif //STAVALFI_CPP_EX2_GAME_H
