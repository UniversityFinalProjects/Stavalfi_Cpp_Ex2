#ifndef STAVALFI_CPP_EX2_MAP_READER_MODIFIER_H
#define STAVALFI_CPP_EX2_MAP_READER_MODIFIER_H

#include "MapModifier.h"
#include "MapReader.h"

class MapReaderModifier : public MapReader, public MapModifier {
public:
    virtual ~MapReaderModifier() = 0;
};

#endif //STAVALFI_CPP_EX2_MAP_READER_MODIFIER_H
