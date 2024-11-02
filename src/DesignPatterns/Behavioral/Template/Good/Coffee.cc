#include <iostream>
#include <string>
#include <algorithm>
#include "Coffee.h"

namespace DesignPatterns::Behavioral::Template
{
    void Coffee::brew()
    {
        std::cout << "Brewing coffee for 5 minutes" << std::endl;
        ;
    }

    void Coffee::add_condiments()
    {
        if (customer_wants_condiments())
            std::cout << "Adding cream to coffee" << std::endl;
        ;
    }
    
    bool Coffee::customer_wants_condiments()
    {
        std::string answer;
        std::cout << "Would you like cream with your coffee? (y/n)";
        std::getline(std::cin, answer);

        std::transform(answer.begin(), answer.end(), answer.begin(), std::tolower);

        if (answer == "y")
            return true;

        return false;
    }
}