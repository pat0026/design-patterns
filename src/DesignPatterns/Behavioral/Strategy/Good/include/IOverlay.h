#pragma once

namespace DesignPatterns::Behavioral::Strategy
{
    class IOverlay
    {
    public:
        virtual void filter() = 0;
        virtual ~IOverlay() = default;
    };
}