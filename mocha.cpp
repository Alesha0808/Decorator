#include "mocha.h"

Mocha::Mocha(Beverage *beverage)
{
    this->beverage = beverage;
}

QString Mocha::getDescription() {
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost() {
    return 0.2 + beverage->cost();
}
