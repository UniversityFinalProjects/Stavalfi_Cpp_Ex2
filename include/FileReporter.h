#ifndef STAVALFI_CPP_EX2_FILE_REPORTER_H
#define STAVALFI_CPP_EX2_FILE_REPORTER_H


#include "Reporter.h"
#include "CurrentGameState.h"

class FileReporter : public Reporter{
    const std::string filePathToReportInto;

public:
    FileReporter(const std::string &filePathToReportInto);

    void report(const CurrentGameState &gameState) const override;
};


#endif //STAVALFI_CPP_EX2_FILE_REPORTER_H
