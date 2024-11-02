#include <iostream>
#include "BeverageMaker.h"

namespace DesignPatterns::Behavioral::Template
{
    void BeverageMaker::boil_water()
    {
        std::cout << "Boiling water" << std::endl;
    }

    void BeverageMaker::pour_water_into_cup()
    {
        std::cout << "Pouring water into cup" << std::endl;
    }

    void BeverageMaker::set_beverage(std::unique_ptr<Beverage> beverage)
    {
        this->beverage = std::move(beverage);
    }

    void BeverageMaker::make_beverage()
    {
        boil_water();
        pour_water_into_cup();

        beverage->prepare();
    }
}