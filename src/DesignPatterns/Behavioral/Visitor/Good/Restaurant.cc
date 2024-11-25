#include <iostream>
#include "Restaurant.h"

namespace DesignPatterns::Behavioral::Visitor
{
    void Restaurant::accept(std::shared_ptr<Visitor> visitor)
    {
        visitor->visit_restaurant(this);
    }
}