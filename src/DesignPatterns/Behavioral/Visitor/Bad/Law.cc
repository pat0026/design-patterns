#include <iostream>
#include "Law.h"

namespace DesignPatterns::Behavioral::Visitor
{
    void Law::send_email()
    {
        std::cout << "Sending law marketing tips to " << email << std::endl;
    }
}