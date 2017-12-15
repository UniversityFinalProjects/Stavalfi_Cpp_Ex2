#ifndef STAVALFI_CPP_EX2_PLAYER_GAME_H
#define STAVALFI_CPP_EX2_PLAYER_GAME_H

class Player;

class Soldier;

class PlayerGame {
    virtual Player &getPlayerBySoldier(const Soldier &soldier) const = 0;
};

#endif //STAVALFI_CPP_EX2_PLAYER_GAME_H
