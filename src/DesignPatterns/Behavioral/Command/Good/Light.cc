#include <iostream>
#include "Light.h"

namespace DesignPatterns::Behavioral::Command
{
    void Light::turn_on()
    {
        std::cout << "Turning lights on" << std::endl;
    }

    void Light::turn_off()
    {
        std::cout << "Turning lights off" << std::endl;
    }

    void Light::dim()
    {
        std::cout << "Dimming lights" << std::endl;
    }
}