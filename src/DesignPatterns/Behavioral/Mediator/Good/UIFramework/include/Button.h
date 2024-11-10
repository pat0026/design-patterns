#pragma once
#include "UIControl.h"

namespace DesignPatterns::Behavioral::Mediator
{
    class Button : public UIControl
    {
        bool enabled;
    public:
        Button(DialogBox *owner) : UIControl(owner) {};
        bool is_enabled();
        void set_enabled(bool is_enabled);
    };
}