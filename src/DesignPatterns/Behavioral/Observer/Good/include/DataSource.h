#pragma once
#include <vector>
#include "Subject.h"

namespace DesignPatterns::Behavioral::Observer
{
    class DataSource : public Subject
    {
        std::vector<int> values;
    public:
        std::vector<int> get_values();
        void set_values(std::vector<int> values);
    };
}