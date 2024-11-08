#pragma once
#include "DataSource.h"
#include "Barchart.h"
#include "Sheet2.h"

namespace DesignPatterns::Behavioral::Observer
{

    std::vector<int> DataSource::get_values()
    {
        return values;
    }

    void DataSource::set_values(std::vector<int> values)
    {
        this->values = values;

        for (const auto &dependent : dependents)
        {
            if (dependent->type() == typeid(Sheet2))
            {
                std::any_cast<Sheet2>(*dependent).calculate_total(values);
            }
            else if (dependent->type() == typeid(BarChart))
            {
                std::any_cast<BarChart>(*dependent).render(values);
            }
        }
    }

    void DataSource::add_dependent(std::unique_ptr<std::any> dependent)
    {
        dependents.emplace_back(std::move(dependent));
    }

    void DataSource::remove_dependent(std::any dependent)
    {
        dependents.erase(
            std::remove_if(dependents.begin(), dependents.end(),
                           [&](const std::unique_ptr<std::any> &existing)
                           {
                               return existing->type() == dependent.type();
                           }),
            dependents.end());
    }

}