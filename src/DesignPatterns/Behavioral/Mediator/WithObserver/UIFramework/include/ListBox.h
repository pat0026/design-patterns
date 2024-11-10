#pragma once
#include <string>
#include "UIControl.h"

namespace DesignPatterns::Behavioral::Mediator
{
    class ListBox : public UIControl
    {
        std::string selection;
    public:
        std::string get_selection();
        void set_selection(std::string selection);
    };
}