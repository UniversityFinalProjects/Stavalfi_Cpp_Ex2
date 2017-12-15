#ifndef STAVALFI_CPP_EX2_GAME_H
#define STAVALFI_CPP_EX2_GAME_H


#include "Player.h"
#include "FindPlayer.h"
#include "Reportable.h"
#include "MapReaderModifier.h"
#include "CurrentGameState.h"
#include "Reporter.h"

class Game : public FindPlayer, public CurrentGameState {
    std::shared_ptr<MapReaderModifier> map;
    std::list<std::shared_ptr<Player>> players;
    std::string turnOfPlayerId;
    std::shared_ptr<Reporter> reporter;

public:
    Game(signed int MapWidth, signed int mapLength,
         std::list<std::shared_ptr<Player>> players,
         std::list<std::shared_ptr<Armor>> armorsInMap,
         std::list<std::shared_ptr<Weapon>> weaponsInMap,
         std::list<std::shared_ptr<SolidItem>> solidItemsInMap,
         const std::shared_ptr<Reporter> reporter,
         std::string beginnerPlayerId);

    void endIteration();

    void changeTurnToNextPlayer();

    void setReporter(const std::shared_ptr<Reporter> &reporter);

    Player &getPlayerBySoldier(const Soldier &soldier) const override;

    const std::list<std::shared_ptr<Player>> &getPlayers() const override;

    const std::string &getTurnOfPlayerId() const;

    const MapReader &getMap() const override;

    void report(const Reporter &reporter) const override;
};


#endif //STAVALFI_CPP_EX2_GAME_H
