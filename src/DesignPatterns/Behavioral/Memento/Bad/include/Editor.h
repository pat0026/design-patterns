#pragma once
#include <iostream>
#include <vector>

namespace DesignPatterns::Behavioral::Memento
{
    class Editor
    {
        std::string content;
        std::vector<std::string> prev_contents;

        std::string title;
        std::vector<std::string> prev_titles;

    public:
        void ChangeContent(std::string content);
        void ChangeTitle(std::string title);
        void UndoContent();
        void UndoTitle();
        std::string get_content();
        std::string get_title();
    };
}