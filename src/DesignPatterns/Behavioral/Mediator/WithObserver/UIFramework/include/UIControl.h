#pragma once
#include <vector>
#include "EventHandler.h"


namespace DesignPatterns::Behavioral::Mediator
{
    
    class UIControl
    {
        std::vector<EventHandler> event_handlers;
    public:
        void add_event_handler(EventHandler event_handler);
        void notify_event_handlers();
        virtual ~UIControl() = default;
    };
}