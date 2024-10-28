#include "Editor.h"

namespace DesignPatterns::Behavioral::Memento
{
    EditorState Editor::create_state()
    {
        return EditorState(content, title);
    }

    void Editor::restore(EditorState state)
    {
        title = state.get_title();
        content = state.get_content();
    }
}
