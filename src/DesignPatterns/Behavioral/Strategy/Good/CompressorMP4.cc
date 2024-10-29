#include <iostream>
#include "CompressorMP4.h"

namespace DesignPatterns::Behavioral::Strategy
{
    void CompressorMP4::compress()
    {
        std::cout << "Compressing using MP4" << std::endl;
    }
}