#pragma once
#include <vector>

#include "EditorState.h"
#include "Editor.h"

namespace DesignPatterns::Behavioral::Memento
{
    class History
    {
        std::vector<EditorState> states;
        Editor &editor;

    public:
        History(Editor &editor) : editor(editor) {};
        void back_up();
        void undo();
        void show_history() const;
    };
}