#include <iostream>
#include "DimCommand.h"

namespace DesignPatterns::Behavioral::Command
{
    void DimCommand::execute()
    {
        if (auto light_sptr = light_ptr.lock())
            light_sptr->dim();
        else
            std::cout << "NonExisting light object" << std::endl;
    }
}