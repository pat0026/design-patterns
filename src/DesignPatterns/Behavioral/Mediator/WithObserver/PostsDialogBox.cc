#pragma once
#include <iostream>
#include "PostsDialogBox.h"

namespace DesignPatterns::Behavioral::Mediator
{
    void PostsDialogBox::post_changed()
    {
        title_text_box->set_text(posts_list_box->get_selection());
        save_button->set_enabled(true);
    }

    void PostsDialogBox::title_changed()
    {
        bool isTitleEmpty = title_text_box->get_text().empty();
        save_button->set_enabled(!isTitleEmpty);
    }

    PostsDialogBox::PostsDialogBox()
    {
        posts_list_box = std::make_unique<ListBox>();
        title_text_box = std::make_unique<TextBox>();
        save_button = std::make_unique<Button>();
        save_button->set_enabled(false);

        posts_list_box->add_event_handler([this]() { post_changed(); });
        title_text_box->add_event_handler([this]() { title_changed(); });
    }

    void PostsDialogBox::simulate_user_interaction()
    {
        posts_list_box->set_selection("Post 2");
        title_text_box->set_text("");
        std::cout << "Title text box: " << title_text_box->get_text() << std::endl;
        std::cout << "Button enabled: " << save_button->is_enabled() << std::endl;
    }
}