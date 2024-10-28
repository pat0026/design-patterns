#pragma once
#include <iostream>
#include <vector>
#include "EditorState.h"

namespace DesignPatterns::Behavioral::Memento
{
    class Editor
    {
    public:
        std::string content;
        std::string title;

        EditorState create_state();
        void restore(EditorState state);
    };
}