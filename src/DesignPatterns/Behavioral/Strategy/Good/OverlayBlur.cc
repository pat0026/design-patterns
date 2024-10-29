#include <iostream>
#include "OverlayBlur.h"

namespace DesignPatterns::Behavioral::Strategy
{
    void OverlayBlur::filter()
    {
        std::cout << "Applying blur overlay." << std::endl;
    }
}