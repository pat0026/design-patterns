#pragma once
#include <memory>

#include "Beverage.h"

namespace DesignPatterns::Behavioral::Template
{
    class BeverageMaker
    {
        std::unique_ptr<Beverage> beverage;

        void boil_water();
        void pour_water_into_cup();

    public:
        BeverageMaker(std::unique_ptr<Beverage> beverage) : beverage(std::move(beverage)) {};
        void set_beverage(std::unique_ptr<Beverage> beverage);
        void make_beverage();
    };
}
