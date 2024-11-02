#include "Beverage.h"

namespace DesignPatterns::Behavioral::Template
{
    class Tea : public Beverage
    {
        void brew() override;
        void add_condiments() override;
        bool customer_wants_condiments() override;
    };
}