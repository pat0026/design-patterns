#pragma once
#include <iostream>
#include "PostsDialogBox.h"

namespace DesignPatterns::Behavioral::Mediator
{
    void PostsDialogBox::handle_post_changed()
    {
        title_text_box->set_text(posts_list_box->get_selection());
        save_button->set_enabled(true);
    }

    void PostsDialogBox::handle_title_changed()
    {
        bool isTitleEmpty = title_text_box->get_text().empty();
        save_button->set_enabled(!isTitleEmpty);
    }

    PostsDialogBox::PostsDialogBox()
    {
        posts_list_box = std::make_unique<ListBox>(this);
        title_text_box = std::make_unique<TextBox>(this);
        save_button = std::make_unique<Button>(this);
        save_button->set_enabled(false);
    }

    void PostsDialogBox::simulate_user_interaction()
    {
        posts_list_box->set_selection("Post 2");
        title_text_box->set_text("");
        std::cout << "Title text box: " << title_text_box->get_text() << std::endl;
        std::cout << "Button enabled: " << save_button->is_enabled() << std::endl;
    }

    void PostsDialogBox::changed(UIControl *ui_control)
    {
        if (ui_control == posts_list_box.get())
        {
            handle_post_changed();
        }
        else if (ui_control == title_text_box.get())
        {
            handle_title_changed();
        }
    }
}