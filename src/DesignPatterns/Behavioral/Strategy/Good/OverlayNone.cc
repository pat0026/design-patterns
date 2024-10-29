#include <iostream>
#include "OverlayNone.h"

namespace DesignPatterns::Behavioral::Strategy
{
    void OverlayNone::filter()
    {
        std::cout << "No overlay applied." << std::endl;
    }
}