#include <iostream>
#include <vector>
#include <memory>

#include "BeverageMaker.h"
#include "Coffee.h"
#include "Tea.h"
#include "Camomile.h"

using namespace DesignPatterns::Behavioral::Template;

int main(int, char **)
{
    BeverageMaker beverage(std::make_unique<Coffee>());
    beverage.make_beverage();
    beverage.set_beverage(std::make_unique<Tea>());
    beverage.make_beverage();
    beverage.set_beverage(std::make_unique<Camomile>());
    beverage.make_beverage();
}