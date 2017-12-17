#ifndef STAVALFI_CPP_EX2_GAME_STATE_H
#define STAVALFI_CPP_EX2_GAME_STATE_H

#include <list>
#include <memory>
#include "Player.h"
#include "MapReader.h"
#include "Reportable.h"

class CurrentGameState : public Reportable {
public:
    virtual const std::list<std::shared_ptr<Player>> &getPlayers() const = 0;

    virtual const std::shared_ptr<const MapReader> getMap() const = 0;

    virtual const std::list<std::shared_ptr<Player>>::iterator &getPlayerTurn() const = 0;

    virtual ~CurrentGameState() = 0;
};


#endif //STAVALFI_CPP_EX2_GAME_STATE_H
