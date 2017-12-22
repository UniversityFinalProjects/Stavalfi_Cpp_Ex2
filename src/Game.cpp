#include "Game.h"
#include "Map.h"
#include <cassert>

Game::Game(const std::shared_ptr<MapReaderModifier> &map,
           const std::list<std::shared_ptr<Player>> &players,
           const std::shared_ptr<const Reporter> &reporter)
        : map(map),
          players(players),
          reporter(reporter) {
}

const std::list<std::shared_ptr<Player>> &Game::getPlayers() const {
    return players;
}

const std::shared_ptr<const MapReader> Game::getMap() const {
    return this->map;
}

void Game::report(const Reporter &reporter) const {
    reporter.report(*this);
}

void Game::start() const {
    static size_t i = 0;
    while (!isGameFinished()) {
        if (i == 4) {
            i = 4;
        }
        startIteration();
        endIteration();
        i++;
    }
    endGame();
}

void Game::startIteration() const {
    for (auto &player:this->players)
        player->play(ApplySoldierStrategies(this->map, player, *this));
}

void Game::endIteration() const {
    report(*this->reporter);
}

void Game::endGame() const {

}

bool Game::isGameFinished() const {
    // if there is only one player
    // with at list one soldier
    size_t playersWithSoldiers = 0;
    for (auto &player:this->players)
        if (player->getSoldiers().size() > 0)
            playersWithSoldiers++;

    if (playersWithSoldiers == 1)
        return true;

    // all the soldiers of all players
    // moved by all their pre-defined directions.
    for (auto &player:this->players)
        for (auto &soldier: player->getSoldiers())
            if (soldier->getSoldierDirections().isEnabled() &&
                soldier->getSoldierDirections().anyLeft())
                return false;
    return true;
}

const std::shared_ptr<Player> Game::getPlayerById(const std::string &playerId) const {
    for (auto &player:this->players)
        if (player->getPlayerId() == playerId)
            return player;
    return std::shared_ptr<Player>(nullptr);
}