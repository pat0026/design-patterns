#pragma once
#include <vector>
#include <memory>
#include "Observer.h"

namespace DesignPatterns::Behavioral::Observer
{
    class Subject
    {
        std::vector<std::shared_ptr<Observer>> observers;

    public:
        void add_observer(std::shared_ptr<Observer> observer);
        void remove_observer(std::shared_ptr<Observer> observer);
        void notify_observers();
        virtual ~Subject() = default;
    };
}