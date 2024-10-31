#pragma once
#include <memory>
#include "ICommand.h"

namespace DesignPatterns::Behavioral::Command
{
    class RemoteControl
    {
        std::unique_ptr<ICommand> command;

    public:
        RemoteControl(std::unique_ptr<ICommand> command) : command(std::move(command)) {};
        void press_button();
        void set_command(std::unique_ptr<ICommand> command);
    };
}