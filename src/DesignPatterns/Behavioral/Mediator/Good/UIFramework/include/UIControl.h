#pragma once
#include "DialogBox.h"

namespace DesignPatterns::Behavioral::Mediator
{
    class DialogBox;
    
    class UIControl
    {
    protected:
        DialogBox *owner;

    public:
        UIControl(DialogBox *owner) : owner(owner) {};
        virtual ~UIControl() = default;
    };
}