#pragma once

namespace DesignPatterns::Behavioral::Command
{
    class ICommand
    {
    public:
        virtual void execute() = 0;
        virtual ~ICommand() = default;
    };
}