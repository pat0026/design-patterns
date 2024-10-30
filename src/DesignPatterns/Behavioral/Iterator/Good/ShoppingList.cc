#pragma once
#include <vector>
#include <string>
#include <memory>

#include "IIterator.h"
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

    std::unique_ptr<IIterator<std::string>> ShoppingList::create_iterator()
    {
        return std::make_unique<ShoppingListIterator>(this);
    }

    std::string ShoppingList::ShoppingListIterator::current() const
    {
        return cart_ptr->cart[index];
    }

    void ShoppingList::ShoppingListIterator::next()
    {
        ++index;
    }

    bool ShoppingList::ShoppingListIterator::has_next() const
    {
        return index < cart_ptr->cart.size();
    }
}
