#include <iostream>
#include "Editor.h"

using namespace DesignPatterns::Behavioral::Memento;

int main(int, char**){
    Editor newEdit;
    newEdit.ChangeTitle("Title1");
    newEdit.ChangeContent("Content1");
    newEdit.ChangeTitle("Title2");
    newEdit.ChangeContent("Content2");
    newEdit.UndoContent();
    newEdit.UndoTitle();
    std::cout << "Content: " << newEdit.get_content() << std::endl;
    std::cout << "Title: " << newEdit.get_title() << std::endl;
}