#ifndef STAVALFI_CPP_EX2_REPORTER_H
#define STAVALFI_CPP_EX2_REPORTER_H


#include "Reportable.h"
#include "GameState.h"

class Reporter {
public:
    void report(const Reportable &reportable) const;

    virtual void report(const GameState &gameState) const = 0;

    virtual ~Reporter() = 0;
};


#endif //STAVALFI_CPP_EX2_REPORTER_H
