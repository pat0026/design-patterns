#pragma once
#include <memory>
#include "ListBox.h"
#include "TextBox.h"
#include "Button.h"

namespace DesignPatterns::Behavioral::Mediator
{
    class PostsDialogBox
    {
        std::unique_ptr<ListBox> posts_list_box;
        std::unique_ptr<TextBox> title_text_box;
        std::unique_ptr<Button> save_button;
        
        void post_changed();
        void title_changed();
    public:
        PostsDialogBox();
        void simulate_user_interaction();
    };
}