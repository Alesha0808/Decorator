#include "whip.h"

Whip::Whip(Beverage *beverage)
{
    this->beverage = beverage;
}


QString Whip::getDescription() {
    return beverage->getDescription() + ", Whip";
}

double Whip::cost() {
    return 0.1 + beverage->cost();
}
