#include "ShoppingList.h"

namespace DesignPatterns::Behavioral::Iterator 
{
    void ShoppingList::push(std::string item_name)
    {
        cart.push_back(item_name);
    }

    std::string ShoppingList::pop()
    {
        std::string item = cart.back();
        cart.pop_back();
        return item;
    }

    std::vector<std::string> ShoppingList::get_cart()
    {
        return cart;
    }
}