#pragma once
#include <vector>
#include <string>
#include <memory>

#include "IIterator.h"

namespace DesignPatterns::Behavioral::Iterator
{
    class ShoppingList
    {
        std::vector<std::string> cart;

    public:
        class ShoppingListIterator;
        void push(std::string item_name);
        std::string pop();
        std::unique_ptr<IIterator<std::string>> ShoppingList::create_iterator();
    };

    class ShoppingList::ShoppingListIterator : public IIterator<std::string>
    {
        ShoppingList *cart_ptr;
        int index = 0;

    public:
        ShoppingListIterator(ShoppingList *cart_ptr) : cart_ptr(cart_ptr) {};
        std::string current() const override;
        void next() override;
        bool has_next() const override;
    };

}