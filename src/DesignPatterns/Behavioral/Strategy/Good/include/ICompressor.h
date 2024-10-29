#pragma once

namespace DesignPatterns::Behavioral::Strategy
{
    class ICompressor
    {
    public:
        virtual void compress() = 0;
    };
}