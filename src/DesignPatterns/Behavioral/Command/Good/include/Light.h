#pragma once

namespace DesignPatterns::Behavioral::Command
{
    class Light
    {
    public:
        void turn_on();
        void turn_off();
        void dim();
    };
}