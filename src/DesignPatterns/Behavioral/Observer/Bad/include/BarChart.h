#pragma once
#include <vector>

namespace DesignPatterns::Behavioral::Observer
{
    class BarChart
    {
    public:
        void render(std::vector<int> values);
    };
}