#pragma once
#include "Client.h"

namespace DesignPatterns::Behavioral::Visitor
{
    class Restaurant : public Client
    {
    public:
        Restaurant(std::string name, std::string email) : Client(name, email) {};

        void send_email() override;
    };
}