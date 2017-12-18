#ifndef STAVALFI_CPP_EX2_GAME_H
#define STAVALFI_CPP_EX2_GAME_H


#include "Player.h"
#include "Reportable.h"
#include "MapReaderModifier.h"
#include "Reporter.h"
#include "GameController.h"

class Game : public GameController {
    const std::shared_ptr<MapReaderModifier> map;
    std::list<std::shared_ptr<Player>> players;

    // usually a reporter object won't be inside a reportable class.
    // someone else should have a reporter object and call his method:
    // report and send him a reportable object. then the report method
    // will invoke the reportable's report method which will be invoking
    // the report's report method.
    // ----------------------------------------------------------------
    // Now we can skip some steps and call from this object to the
    // report method in report object.
    const std::shared_ptr<const Reporter> reporter;

    void endGame() const;

    void endIteration() const;

    void startIteration() const;

public:
    Game(signed int mapHigh, signed int mapWidth,
         const std::list<std::shared_ptr<Player>> &players,
         const std::list<std::shared_ptr<Armor>> &armorsInMap,
         const std::list<std::shared_ptr<Weapon>> &weaponsInMap,
         const std::list<std::shared_ptr<const SolidItem>> &solidItemsInMap,
         const std::shared_ptr<const Reporter> &reporter);

    const std::list<std::shared_ptr<Player>> &getPlayers() const override;

    const std::shared_ptr<const MapReader> getMap() const override;

    void report(const Reporter &reporter) const override;

    void start() const override;

    ~Game() override = default;
};


#endif //STAVALFI_CPP_EX2_GAME_H
