#include <iostream>
#include "Client.h"

namespace DesignPatterns::Behavioral::Visitor
{
    std::string Client::get_email()
    {
        return email;
    }
}