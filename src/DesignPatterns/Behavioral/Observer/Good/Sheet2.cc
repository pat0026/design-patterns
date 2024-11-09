#pragma once
#include <iostream>
#include "Sheet2.h"

namespace DesignPatterns::Behavioral::Observer
{
    int Sheet2::get_total()
    {
        return total;
    }

    void Sheet2::update()
    {
        if (auto data_sptr = data_source.lock())
        {
            total = calculate_total(data_sptr->get_values());
            std::cout << "Total: " << total << std::endl;
        }
    }

    int Sheet2::calculate_total(std::vector<int> values)
    {
        int sum = 0;
        for (auto value : values)
        {
            sum += value;
        }
        return sum;
    }

}