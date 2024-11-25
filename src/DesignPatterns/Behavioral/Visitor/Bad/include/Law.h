#pragma once
#include "Client.h"

namespace DesignPatterns::Behavioral::Visitor
{
    class Law : public Client
    {
    public:
        Law(std::string name, std::string email) : Client(name, email) {};

        void send_email() override;
    };
}