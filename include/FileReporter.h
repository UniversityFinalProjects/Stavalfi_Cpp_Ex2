#ifndef STAVALFI_CPP_EX2_FILE_REPORTER_H
#define STAVALFI_CPP_EX2_FILE_REPORTER_H


#include "Reporter.h"
#include "GameState.h"

class FileReporter : public Reporter{
public:
    void report(const GameState &gameState) const override;
};


#endif //STAVALFI_CPP_EX2_FILE_REPORTER_H
