#ifndef STAVALFI_CPP_EX2_SOLID_ITEM_H
#define STAVALFI_CPP_EX2_SOLID_ITEM_H

#include "Item.h"

class SolidItem : public Item {
    const short high;
    const short width;
public:
    SolidItem(const std::string &id, const Point2d &location,
              short high, short width);

    void report(const Reporter &reporter) const override;

    bool isPointInside(double y, double x) const;

    bool isPointInside(const Point2d &location) const;

    const short getHigh() const;

    const short getWidth() const;
};


#endif //STAVALFI_CPP_EX2_SOLID_ITEM_H
