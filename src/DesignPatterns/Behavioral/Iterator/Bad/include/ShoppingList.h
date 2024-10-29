#pragma once
#include <vector>
#include <string>

namespace DesignPatterns::Behavioral::Iterator
{
    class ShoppingList
    {
        std::vector<std::string> cart;

    public:
        void push(std::string item_name);
        std::string pop();
        std::vector<std::string> get_cart();
    };
}