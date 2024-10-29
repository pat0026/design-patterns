#include <iostream>
#include "CompressorMOV.h"

namespace DesignPatterns::Behavioral::Strategy
{
    void CompressorMOV::compress()
    {
        std::cout << "Compressing using MOV" << std::endl;
    }
}