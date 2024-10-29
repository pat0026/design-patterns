#include <iostream>
#include "CompressorWebM.h"

namespace DesignPatterns::Behavioral::Strategy
{
    void CompressorWebM::compress()
    {
        std::cout << "Compressing using WebM" << std::endl;
    }
}