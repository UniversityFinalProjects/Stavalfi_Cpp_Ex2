#include "GameState.h"
#include "Reporter.h"

void GameState::report(const Reporter &reporter) const {
    reporter.report(*this);
}

GameState::~GameState() {

}
