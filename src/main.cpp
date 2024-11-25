#include <iostream>
#include <memory>
#include <vector>
#include "Law.h"
#include "Restaurant.h"
#include "Retail.h"

using namespace DesignPatterns::Behavioral::Visitor;

int main(int, char **)
{
    std::vector<std::shared_ptr<Client>> clients =
    {
        std::make_shared<Law>("pat", "pat.email"),
        std::make_shared<Restaurant>("pat", "pat_res.email"),
        std::make_shared<Retail>("pat", "pat_ret.email"),

    };

    for(const auto &client : clients )
    {
        client->send_email();
    }
}