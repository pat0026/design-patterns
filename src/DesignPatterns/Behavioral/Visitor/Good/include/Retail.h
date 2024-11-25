#pragma once
#include "Client.h"
#include "Visitor.h"

namespace DesignPatterns::Behavioral::Visitor
{
    class Client;
    class Visitor;

    class Retail : public Client
    {
    public:
        Retail(std::string name, std::string email) : Client(name, email) {};

        void accept(std::shared_ptr<Visitor> visitor) override;
    };
}