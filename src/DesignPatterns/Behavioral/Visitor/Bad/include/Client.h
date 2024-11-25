#pragma once

#include <string>

namespace DesignPatterns::Behavioral::Visitor
{
    class Client
    {
    protected: 
        std::string name;
        std::string email;

    public:
        Client(std::string name, std::string email) : name(name), email(email) {};
        virtual void send_email() = 0;
        virtual ~Client() = default;
    };
}