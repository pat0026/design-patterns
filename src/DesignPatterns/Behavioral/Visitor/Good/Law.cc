#include <iostream>
#include "Law.h"

namespace DesignPatterns::Behavioral::Visitor
{
    void Law::accept(std::shared_ptr<Visitor> visitor)
    {
        visitor->visit_law(this);
    }
}