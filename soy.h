#ifndef SOY_H
#define SOY_H

#include "condimentdecorator.h"

class Soy : public CondimentDecorator
{
private:
    Beverage *beverage;
public:
    Soy(Beverage *beverage);
    QString getDescription();
    double cost();
};

#endif // SOY_H
