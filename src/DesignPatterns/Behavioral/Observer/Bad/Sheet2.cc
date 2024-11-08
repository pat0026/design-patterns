#pragma once
#include <iostream>
#include "Sheet2.h"

namespace DesignPatterns::Behavioral::Observer
{

    int Sheet2::calculate_total(std::vector<int> values)
    {
        int sum = 0;
        for (int value : values)
        {
            sum += value;
        }
        std::cout << "Total: " << sum << std::endl;
        return sum;
    }

}