#pragma once
#include <string>
#include "UIControl.h"

namespace DesignPatterns::Behavioral::Mediator
{
    class TextBox : public UIControl
    {
        std::string text;

    public:
        TextBox(DialogBox *owner) : UIControl(owner) {};
        std::string get_text();
        void set_text(std::string text);
    };
}