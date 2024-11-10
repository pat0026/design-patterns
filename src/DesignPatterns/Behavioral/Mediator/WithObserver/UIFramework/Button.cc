#include "Button.h"

namespace DesignPatterns::Behavioral::Mediator
{
    bool Button::is_enabled()
    {
        return enabled;
    }

    void Button::set_enabled(bool is_enabled)
    {
        this->enabled = is_enabled;
        notify_event_handlers();
    }
}