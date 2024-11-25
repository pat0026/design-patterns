#include <iostream>
#include "Retail.h"

namespace DesignPatterns::Behavioral::Visitor
{
    void Retail::accept(std::shared_ptr<Visitor> visitor)
    {
        visitor->visit_retail(this);
    }
}