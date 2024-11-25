#pragma once
#include "Client.h"

namespace DesignPatterns::Behavioral::Visitor
{
    class Retail : public Client
    {
    public:
        Retail(std::string name, std::string email) : Client(name, email) {};

        void send_email() override;
    };
}