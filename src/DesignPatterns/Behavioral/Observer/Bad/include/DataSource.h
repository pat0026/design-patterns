#pragma once
#include <vector>
#include <memory>
#include <any>

namespace DesignPatterns::Behavioral::Observer
{
    class DataSource
    {
        std::vector<int> values;
        std::vector<std::unique_ptr<std::any>> dependents;

    public:
        std::vector<int> get_values();
        void set_values(std::vector<int> values);
        void add_dependent(std::unique_ptr<std::any> dependent);
        void remove_dependent(std::any dependent);
    };
}