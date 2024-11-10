#pragma once
#include "UIControl.h"

namespace DesignPatterns::Behavioral::Mediator
{
    class Button : public UIControl
    {
        bool enabled;
    public:
        bool is_enabled();
        void set_enabled(bool is_enabled);
    };
}