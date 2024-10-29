#include "ICompressor.h"

namespace DesignPatterns::Behavioral::Strategy
{
    class CompressorMOV : public ICompressor
    {
        void compress() override;
    };
}