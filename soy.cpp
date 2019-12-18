#include "soy.h"

Soy::Soy(Beverage *beverage)
{
    this->beverage = beverage;
}

QString Soy::getDescription() {
    return beverage->getDescription() + ", Soy";
}

double Soy::cost() {
    return 0.15 + beverage->cost();
}
