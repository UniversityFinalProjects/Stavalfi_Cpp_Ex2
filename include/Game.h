#ifndef STAVALFI_CPP_EX2_GAME_H
#define STAVALFI_CPP_EX2_GAME_H


#include "Player.h"
#include "Reportable.h"
#include "MapReaderModifier.h"
#include "Reporter.h"
#include "GameController.h"
#include "FindPlayer.h"

class Game : public GameController, public FindPlayer {
public:
    Game(const std::shared_ptr<MapReaderModifier> &map,
         const std::list<std::shared_ptr<Player>> &players,
         const std::shared_ptr<const Reporter> &reporter);

    const std::shared_ptr<Player> getPlayerById(const std::string &playerId) const override;

    const std::list<std::shared_ptr<Player>> &getPlayers() const override;

    const std::shared_ptr<const MapReader> getMap() const override;

    void report(const Reporter &reporter) const override;

    void start() const override;

    ~Game() override = default;

private:
    const std::shared_ptr<MapReaderModifier> map;
    std::list<std::shared_ptr<Player>> players;

    // usually a reporter object won't be a member inside a reportable class.
    // instead, someone else should have a reporter object and call his method:
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

    /**
     * check if game ended by see if there is only
     * one player with at list one soldier or all
     * the soldiers of all players moved by all their
     * pre-defined directions.
     * @return true or false if game ended by the conditions above.
     */
    bool isGameFinished() const;
};


#endif //STAVALFI_CPP_EX2_GAME_H
