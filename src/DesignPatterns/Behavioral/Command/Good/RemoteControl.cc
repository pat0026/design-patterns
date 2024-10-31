#include <iostream>
#include "RemoteControl.h"

namespace DesignPatterns::Behavioral::Command
{
    void RemoteControl::press_button()
    {
        if (command)
            command->execute();
        else
            std::cout << "Command non existant";
    }

    void RemoteControl::set_command(std::unique_ptr<ICommand> command)
    {
        this->command = std::move(command);
    }
}