#include <iostream>
#include "Restaurant.h"

namespace DesignPatterns::Behavioral::Visitor
{
    void Restaurant::send_email()
    {
        std::cout << "Sending restaurant marketing tips to " << email << std::endl;
    }
}