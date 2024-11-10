#pragma once
#include "UIControl.h"

namespace DesignPatterns::Behavioral::Mediator
{
    class UIControl;
    
    class DialogBox
    {
    public:
        virtual void changed(UIControl *ui_control) = 0;
        void do_something() {};
        virtual ~DialogBox() = default;
    };
}