#pragma once
#include <iostream>
#include "BarChart.h"

namespace DesignPatterns::Behavioral::Observer
{

    void BarChart::render(std::vector<int> values)
    {
        std::cout << "Rendering bar chart with new values" << std::endl;
    }

}