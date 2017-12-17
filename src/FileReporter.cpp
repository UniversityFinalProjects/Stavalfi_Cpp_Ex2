#include "FileReporter.h"

void FileReporter::report(const CurrentGameState &gameState) const {

}

FileReporter::FileReporter(const std::string &filePathToReportInto)
        : filePathToReportInto(filePathToReportInto) {}
