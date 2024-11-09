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
    std::shared_ptr<DataSource> source = std::make_shared<DataSource>();
    std::shared_ptr<Sheet2> sheet_1 = std::make_shared<Sheet2>(source);
    std::shared_ptr<BarChart> barchart_1 = std::make_shared<BarChart>(source);
    std::shared_ptr<BarChart> barchart_2 = std::make_shared<BarChart>(source);
    source->add_observer(sheet_1);
    source->set_values(sample);
    source->add_observer(barchart_1);
    source->set_values(sample2);
    source->add_observer(barchart_2);
    source->set_values(sample3);
    source->remove_observer(barchart_2);
    source->set_values(sample3);
}