#include <iostream>
#include "Retail.h"

namespace DesignPatterns::Behavioral::Visitor
{
    void Retail::send_email()
    {
        std::cout << "Sending retail marketing tips to " << email << std::endl;
    }
}