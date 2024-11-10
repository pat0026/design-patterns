#include "ListBox.h"

namespace DesignPatterns::Behavioral::Mediator
{
    std::string ListBox::get_selection()
    {
        return selection;
    }

    void ListBox::set_selection(std::string selection)
    {
        this->selection = selection;
        owner->changed(this);
    }
}