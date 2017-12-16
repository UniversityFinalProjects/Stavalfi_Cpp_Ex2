#include "InputInterface.h"

InputInterface::~InputInterface() = default;

InputInterface::InputInterface(CurrentGameState &currentGameState)
        : currentGameState(currentGameState) {}
