#pragma once

namespace DesignPatterns::Behavioral::Iterator
{
    template <typename T>
    class IIterator
    {
    public:
        virtual void next() = 0;
        virtual bool has_next() const = 0 ;
        virtual T current() const = 0;
        virtual ~IIterator() = default;
    };
}