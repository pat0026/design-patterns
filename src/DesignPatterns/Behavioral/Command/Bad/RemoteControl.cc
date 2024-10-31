#include "RemoteControl.h"

namespace DesignPatterns::Behavioral::Command
{
    void RemoteControl::push_button(bool turn_on)
    {
        if (auto shared_ptr = light.lock())
        {
            if (turn_on)
            {
                shared_ptr->turn_on();
            }
            else
            {
                shared_ptr->turn_off();
            }
        }
        else
        {
            std::cout << "Lights non existant";
        }
    }

    void RemoteControl::dim_lights()
    {
        if (auto shared_ptr = light.lock())
            shared_ptr->dim();
        else
            std::cout << "Lights non existant";
    }
}