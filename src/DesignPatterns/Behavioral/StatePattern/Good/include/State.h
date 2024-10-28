#pragma once

namespace DesignPatterns::Behavioral::StatePattern
{
    class State
    {
    public:
        virtual void publish() = 0;
    };
}