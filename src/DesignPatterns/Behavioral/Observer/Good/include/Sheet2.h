#pragma once
#include <vector>
#include <memory>
#include "Observer.h"
#include "DataSource.h"

namespace DesignPatterns::Behavioral::Observer
{
    class Sheet2 : public Observer
    {
        int total;
        std::weak_ptr<DataSource> data_source;

    public:
        Sheet2(std::weak_ptr<DataSource> data_source) : data_source(data_source) {};
        int get_total();
        void update() override;
        int calculate_total(std::vector<int> values);
    };
}