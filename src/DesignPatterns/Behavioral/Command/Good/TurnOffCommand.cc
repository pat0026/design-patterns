#include <iostream>
#include "TurnOffCommand.h"

namespace DesignPatterns::Behavioral::Command
{
    void TurnOffCommand::execute()
    {
        if (auto light_sptr = light_ptr.lock())
            light_sptr->turn_off();
        else
            std::cout << "NonExisting light object" << std::endl;
    }
}