#include <iostream>
#include <vector>
#include <memory>

#include "Tea.h"
#include "Coffee.h"

using namespace DesignPatterns::Behavioral::Template;

int main(int, char **)
{
    Tea tea;
    tea.make_beverage();
    Coffee coffee;
    coffee.make_beverage();
}