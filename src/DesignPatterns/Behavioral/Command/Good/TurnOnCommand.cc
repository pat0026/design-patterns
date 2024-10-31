#include <iostream>
#include "TurnOnCommand.h"

namespace DesignPatterns::Behavioral::Command
{
    void TurnOnCommand::execute()
    {
        if (auto light_sptr = light_ptr.lock())
            light_sptr->turn_on();
        else
            std::cout << "NonExisting light object" << std::endl;
    }
}