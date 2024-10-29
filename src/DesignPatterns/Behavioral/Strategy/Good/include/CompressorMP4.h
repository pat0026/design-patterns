#include "ICompressor.h"

namespace DesignPatterns::Behavioral::Strategy 
{
    class CompressorMP4 : public ICompressor
    {
        void compress() override;
    };
}