#pragma once

namespace DesignPatterns::Behavioral::Observer
{
    class Observer
    {
    public:
        virtual void update() = 0;
        virtual void observer_func() {};
        virtual ~Observer() = default;
    };
}