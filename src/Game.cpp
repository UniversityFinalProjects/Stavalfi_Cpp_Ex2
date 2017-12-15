#include "../include/Game.h"

Player &Game::getPlayerBySoldier(const Soldier &soldier) const {
    return *this->players.front();
}

const std::list<std::shared_ptr<Player>> &Game::getPlayers() const {
    return this->players;
}

const std::string &Game::getTurnOfPlayerId() const {
    return this->turnOfPlayerId;
}

void Game::report(const Reporter &reporter) const {
    reporter.report(*this);
}

const MapReader& Game::getMap() const {
    return *this->map;
}

void Game::setReporter(const std::shared_ptr<Reporter> &reporter) {
    Game::reporter = reporter;
}
