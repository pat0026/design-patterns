#include <iostream>
#include "Beverage.h"

namespace DesignPatterns::Behavioral::Template
{
    void Beverage::boil_water()
    {
        std::cout << "Boiling water" << std::endl;
    }

    void Beverage::pour_water_into_cup()
    {
        std::cout << "Pouring water into cup" << std::endl;
    }

    void Beverage::prepare()
    {
        boil_water();
        pour_water_into_cup();
        brew();
        add_condiments();
    }
}