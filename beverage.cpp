#include "beverage.h"

Beverage::Beverage()
{
    description = "Unknown Beverage";
}

Beverage::~Beverage()
{

}

QString Beverage::getDescription() {
    return description;
}
