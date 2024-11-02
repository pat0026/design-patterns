#pragma once

namespace DesignPatterns::Behavioral::Template
{
    class Beverage
    {
        virtual void brew() = 0;
        virtual void add_condiments() {};
        virtual bool customer_wants_condiments() { return false; };

    public:
        virtual void prepare() = 0;
        virtual ~Beverage() = default;
    };
}