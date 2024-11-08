#include <iostream>
#include <memory>
#include "DataSource.h"
#include "Sheet2.h"
#include "BarChart.h"

using namespace DesignPatterns::Behavioral::Observer;

int main(int, char **)
{
    std::vector<int> sample = {2, 3, 4, 5};
    std::vector<int> sample2 = {1, 1, 1, 1};
    std::vector<int> sample3 = {2, 2, 2, 2};
    std::unique_ptr<DataSource> source = std::make_unique<DataSource>();
    source->add_dependent(std::make_unique<std::any>(Sheet2()));
    source->set_values(sample);
    source->add_dependent(std::make_unique<std::any>(BarChart()));
    source->set_values(sample2);
    source->remove_dependent(BarChart());
    source->set_values(sample3);
}