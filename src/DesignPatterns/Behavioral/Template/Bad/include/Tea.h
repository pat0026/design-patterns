#pragma once

namespace DesignPatterns::Behavioral::Template
{
    class Tea
    {
        void boil_water();
        void pour_water_into_cup();
        void brew();
        void add_condiments();
        bool customer_wants_condiments();

    public:
        void make_beverage();
    };
}
