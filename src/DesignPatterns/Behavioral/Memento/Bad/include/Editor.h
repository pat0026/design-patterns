#pragma once
#include <iostream>

namespace DesignPatterns::Behavioral::Memento
{
    class Editor
    {
    public:
        inline void printHelloWorld() { std::cout << "HelloWorld" << std::endl; };
    };
}