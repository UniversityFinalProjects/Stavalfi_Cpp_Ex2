#ifndef STAVALFI_CPP_EX2_GAME_H
#define STAVALFI_CPP_EX2_GAME_H


#include "Player.h"
#include "Reportable.h"
#include "MapReaderModifier.h"
#include "CurrentGameState.h"
#include "Reporter.h"

class Game : public CurrentGameState, public ApplySoldierStrategies {
    std::shared_ptr<MapReaderModifier> map;
    std::list<std::shared_ptr<Player>> players;
    std::list<std::shared_ptr<Player>>::iterator playerTurn;

    // usually a reporter object won't be inside a reportable class.
    // someone else should have a reporter object and call his method:
    // report and send him a reportable object. then the report method
    // will invoke the reportable's report method which will be invoking
    // the report's report method.
    // ----------------------------------------------------------------
    // Now we can skip some steps and call from this object to the
    // report method in report object.
    std::shared_ptr<const Reporter> reporter;

    void endGame();

    void endIteration();

    void startIteration();

    void changeTurnToNextPlayer();

    void playCurrentWithPlayer();

public:
    Game(signed int mapWidth, signed int mapLength,
         std::list<std::shared_ptr<Player>> &players,
         std::list<std::shared_ptr<Armor>> &armorsInMap,
         std::list<std::shared_ptr<Weapon>> &weaponsInMap,
         std::list<std::shared_ptr<SolidItem>> &solidItemsInMap,
         const std::shared_ptr<const Reporter> &reporter,
         std::string &beginnerPlayerId);

    const std::list<std::shared_ptr<Player>>::iterator &getPlayerTurn() const;

    void setReporter(const std::shared_ptr<const Reporter> &reporter);

    Player &getPlayerBySoldier(const Soldier &soldier) const;

    const std::list<std::shared_ptr<Player>> &getPlayers() const override;

    const std::shared_ptr<const MapReader> getMap() const override;

    void report(const Reporter &reporter) const override;

    void playWithSoldier(Soldier &soldier) override;

    void playWithSoldier(Warrior &warrior) override;

    void playWithSoldier(Healer &healer) override;
};


#endif //STAVALFI_CPP_EX2_GAME_H
