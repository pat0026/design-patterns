#include "TextBox.h"

namespace DesignPatterns::Behavioral::Mediator
{
    std::string TextBox::get_text()
    {
        return text;
    }

    void TextBox::set_text(std::string text)
    {
        this->text = text;
        owner->changed(this);
    }
}