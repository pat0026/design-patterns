#include "ICompressor.h"

namespace DesignPatterns::Behavioral::Strategy 
{
    class CompressorWebM : public ICompressor
    {
        void compress() override;
    };
}