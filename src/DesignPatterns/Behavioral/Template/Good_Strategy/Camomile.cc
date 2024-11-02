#include <iostream>
#include <string>
#include <algorithm>
#include "Camomile.h"

namespace DesignPatterns::Behavioral::Template
{

    void Camomile::brew()
    {
        std::cout << "Brewing camomile for 3 minutes" << std::endl;
        ;
    }
    void Camomile::add_condiments()
    {
        if (customer_wants_condiments())
            std::cout << "Adding something to camomile" << std::endl;
        ;
    }
    bool Camomile::customer_wants_condiments()
    {
        std::string answer;
        std::cout << "Would you like something with your camomile? (y/n)";
        std::getline(std::cin, answer);

        std::transform(answer.begin(), answer.end(), answer.begin(), std::tolower);

        if (answer == "y")
            return true;

        return false;
    }

    void Camomile::prepare()
    {
        brew();
        add_condiments();
    }
}