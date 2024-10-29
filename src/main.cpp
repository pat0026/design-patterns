#include <iostream>
#include <vector>
#include <memory>

#include "ShoppingList.h"

using namespace DesignPatterns::Behavioral::Iterator;

int main(int, char**){
    ShoppingList cart;
    cart.push("milk");
    cart.push("butter");
    std::cout << cart.pop() << std::endl;
    std::vector<std::string> list = cart.get_cart();
    for (const auto &var : list)
        std::cout << var << std::endl;
}