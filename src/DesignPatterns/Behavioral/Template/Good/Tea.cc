#include <iostream>
#include <string>
#include <algorithm>

#include "Tea.h"

namespace DesignPatterns::Behavioral::Template
{
    void Tea::brew()
    {
        std::cout << "Brewing tea for 3 minutes" << std::endl;
        ;
    }

    void Tea::add_condiments()
    {
        if (customer_wants_condiments())
            std::cout << "Adding lemon to tea" << std::endl;
        ;
    }

    bool Tea::customer_wants_condiments()
    {
        std::string answer;
        std::cout << "Would you like lemon with your tea? (y/n)";
        std::getline(std::cin, answer);

        std::transform(answer.begin(), answer.end(), answer.begin(), std::tolower);

        if (answer == "y")
            return true;

        return false;
    }
}
