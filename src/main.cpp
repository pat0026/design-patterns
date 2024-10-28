#include <iostream>
#include "Editor.h"
#include "History.h"

using namespace DesignPatterns::Behavioral::Memento;

int main(int, char**){
    Editor editor;
    History history(editor);

    editor.title = "Title1";
    editor.content = "Content1";

    history.back_up();

    editor.title = "Title2";
    editor.content = "Content2";

    history.back_up();

    editor.title = "Title3";

    history.back_up();

    editor.content = "Content4";

    history.back_up();

    history.show_history();

    history.undo();

    history.show_history();
}