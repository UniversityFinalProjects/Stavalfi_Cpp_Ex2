#ifndef STAVALFI_CPP_EX2_FIND_PLAYER_H
#define STAVALFI_CPP_EX2_FIND_PLAYER_H

#include <string.h>
#include <memory>

class Player;

class FindPlayer {
public:
    virtual const std::shared_ptr<Player> getPlayerById(const std::string &playerId) const = 0;

    virtual ~FindPlayer() = 0;
};


#endif //STAVALFI_CPP_EX2_FIND_PLAYER_H
