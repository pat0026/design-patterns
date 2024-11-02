#include <iostream>
#include <vector>
#include <memory>

#include "Beverage.h"
#include "Coffee.h"
#include "Tea.h"
#include "Camomile.h"

using namespace DesignPatterns::Behavioral::Template;

int main(int, char **)
{
    std::unique_ptr<Beverage> beverage = std::make_unique<Coffee>();
    beverage->prepare();
    beverage = std::make_unique<Tea>();
    beverage->prepare();
    beverage = std::make_unique<Camomile>();
    beverage->prepare();
}