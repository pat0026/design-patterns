#pragma once
#include <memory>
#include <string>

namespace DesignPatterns::Behavioral::Visitor
{
    class Visitor;
    
    class Client
    {
    protected:
        std::string name;
        std::string email;

    public:
        Client(std::string name, std::string email) : name(name), email(email) {};
        virtual ~Client() = default;

        std::string get_email();
        virtual void accept(std::shared_ptr<Visitor> visitor) = 0;
    };
}