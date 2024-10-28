#include "Editor.h"

namespace DesignPatterns::Behavioral::Memento
{
    void Editor::ChangeContent(std::string content)
    {
        if (!this->content.empty())
            prev_contents.push_back(this->content);
        this->content = content;
    }

    void Editor::ChangeTitle(std::string title)
    {
        if (!this->title.empty())
            prev_titles.push_back(this->title);
        this->title = title;
    }

    void Editor::UndoContent()
    {
        content = prev_contents.back();
        prev_contents.pop_back();
    }

    void Editor::UndoTitle()
    {
        title = prev_titles.back();
        prev_titles.pop_back();
    }
    std::string Editor::get_content()
    {
        return content;
    }
    std::string Editor::get_title()
    {
        return title;
    }
}
