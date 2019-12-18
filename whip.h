#ifndef WHIP_H
#define WHIP_H

#include "beverage.h"
#include "condimentdecorator.h"

class Whip : public CondimentDecorator
{
private:
    Beverage *beverage;
public:
    Whip(Beverage *beverage);
    QString getDescription();
    double cost();
};

#endif // WHIP_H
