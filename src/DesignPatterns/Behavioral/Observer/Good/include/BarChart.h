#pragma once
#include <memory>
#include "Observer.h"
#include "DataSource.h"

namespace DesignPatterns::Behavioral::Observer
{
    class BarChart : public Observer
    {
        std::weak_ptr<DataSource> data_source;
        
    public:
        BarChart(std::weak_ptr<DataSource> data_source) : data_source(data_source) {};
        void update() override;
    };
}