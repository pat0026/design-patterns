#include <iostream>
#include <vector>
#include <memory>

#include "ShoppingList.h"

using namespace DesignPatterns::Behavioral::Iterator;

int main(int, char**){
    ShoppingList cart;
    cart.push("milk");
    cart.push("butter");
    cart.push("choco");
    cart.push("peanut");
    cart.push("juice");
    std::cout << cart.pop() << std::endl;
    std::unique_ptr<IIterator<std::string>> list = cart.create_iterator();
    for (;list->has_next();list->next())
        std::cout << list->current() << std::endl;
}