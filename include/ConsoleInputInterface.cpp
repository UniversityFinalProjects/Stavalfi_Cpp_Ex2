#include "ConsoleInputInterface.h"

ConsoleInputInterface::ConsoleInputInterface(CurrentGameState &currentGameState)
        : InputInterface(currentGameState) {}

void ConsoleInputInterface::printPlayers() const {

}

void ConsoleInputInterface::printMap() const {

}

ConsoleInputInterface::~ConsoleInputInterface() = default;