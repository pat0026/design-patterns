#include <iostream>
#include "EmailVisitor.h"

namespace DesignPatterns::Behavioral::Visitor
{
    void EmailVisitor::visit_law(Law *law)
    {
        std::cout << "Sending law marketing tips email to " << law->get_email() << std::endl;
    }

    void EmailVisitor::visit_restaurant(Restaurant *restaurant)
    {
        std::cout << "Sending restaurant marketing tips email to " << restaurant->get_email() << std::endl;
    }

    void EmailVisitor::visit_retail(Retail *retail)
    {
        std::cout << "Sending retail marketing tips email to " << retail->get_email() << std::endl;
    }
}