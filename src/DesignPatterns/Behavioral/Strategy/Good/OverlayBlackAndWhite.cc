#include <iostream>
#include "OverlayBlackAndWhite.h"

namespace DesignPatterns::Behavioral::Strategy
{
    void OverlayBlackAndWhite::filter()
    {
        std::cout << "Applying black and white overlay." << std::endl;
    }
}