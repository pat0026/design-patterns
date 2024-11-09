#pragma once
#include "DataSource.h"

namespace DesignPatterns::Behavioral::Observer
{

    std::vector<int> DataSource::get_values()
    {
        return values;
    }

    void DataSource::set_values(std::vector<int> values)
    {
        this->values = values;
        notify_observers();
    }
}