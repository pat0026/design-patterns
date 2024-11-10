#include "UIControl.h"

namespace DesignPatterns::Behavioral::Mediator
{
    void UIControl::add_event_handler(EventHandler handler)
    {
        event_handlers.emplace_back(handler);
    }

    void UIControl::notify_event_handlers()
    {
        for(auto handler : event_handlers)
        {
            handler();
        }
    }
}