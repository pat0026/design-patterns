#pragma once
#include "Subject.h"

namespace DesignPatterns::Behavioral::Observer
{

    void Subject::add_observer(std::shared_ptr<Observer> observer)
    {
        observers.emplace_back(observer);
    }

    void Subject::remove_observer(std::shared_ptr<Observer> observer)
    {
        auto observer_itr = std::find(observers.begin(), observers.end(), observer);
        if(observer_itr != observers.end())
            observers.erase(observer_itr);
    }

    void Subject::notify_observers()
    {
        for(const auto &observer : observers)
        {
            observer->update();
        }
    }
}