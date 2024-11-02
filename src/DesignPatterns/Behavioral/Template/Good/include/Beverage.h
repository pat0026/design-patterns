#pragma once

namespace DesignPatterns::Behavioral::Template
{
    class Beverage
    {
        void boil_water();
        void pour_water_into_cup();

    protected:
        virtual void brew() = 0;
        virtual void add_condiments() {};
        virtual bool customer_wants_condiments() { return false; };

    public:
        void prepare();
        virtual ~Beverage() = default;
    };
}