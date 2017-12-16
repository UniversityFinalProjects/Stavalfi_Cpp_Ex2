#include "Game.h"
#include <Map.h>

Player &Game::getPlayerBySoldier(const Soldier &soldier) const {
    return *this->players.front();
}

const std::list<std::shared_ptr<Player>> &Game::getPlayers() const {
    return this->players;
}

const std::shared_ptr<const MapReader> Game::getMap() const {
    return this->map;
}

void Game::setReporter(const std::shared_ptr<const Reporter> &reporter) {
    Game::reporter = reporter;
}

Game::Game(signed int mapWidth, signed int mapLength,
           std::list<std::shared_ptr<Player>> &players,
           std::list<std::shared_ptr<Armor>> &armorsInMap,
           std::list<std::shared_ptr<Weapon>> &weaponsInMap,
           std::list<std::shared_ptr<SolidItem>> &solidItemsInMap,
           const std::shared_ptr<const Reporter> &reporter,
           std::string &beginnerPlayerId)
        : map(new Map(mapWidth, mapLength)), players(players), reporter(reporter) {
}

void Game::endIteration() {

}

void Game::changeTurnToNextPlayer() {

}

void Game::report(const Reporter &reporter) const {
    reporter.report(*this);
}

const std::list<std::shared_ptr<Player>>::iterator &Game::getPlayerTurn() const {
    return playerTurn;
}

void Game::playWithSoldier(Soldier &soldier) {
    soldier.play(*this);
}

void Game::playWithSoldier(Warrior &warrior) {
    // logic
}

void Game::playWithSoldier(Healer &healer) {
    // logic
}

void Game::endGame() {

}

void Game::startIteration() {

}

void Game::playCurrentWithPlayer() {

}
