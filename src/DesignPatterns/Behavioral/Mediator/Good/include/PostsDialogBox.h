#pragma once
#include <memory>
#include "DialogBox.h"
#include "ListBox.h"
#include "TextBox.h"
#include "Button.h"

namespace DesignPatterns::Behavioral::Mediator
{
    class PostsDialogBox : public DialogBox
    {
        std::unique_ptr<ListBox> posts_list_box;
        std::unique_ptr<TextBox> title_text_box;
        std::unique_ptr<Button> save_button;
        
        void handle_post_changed();
        void handle_title_changed();
    public:
        PostsDialogBox();
        void simulate_user_interaction();
        void changed(UIControl *ui_control) override;
    };
}