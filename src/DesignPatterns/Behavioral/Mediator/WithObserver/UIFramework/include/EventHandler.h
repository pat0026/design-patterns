#pragma once
#include <functional>

namespace DesignPatterns::Behavioral::Mediator
{
    typedef std::function<void()> EventHandler;
}