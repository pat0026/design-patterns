#pragma once
#include <string>

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    class HttpRequest
    {
        std::string username;
        std::string password;

    public:
        std::string validated_username;
        std::string validated_password;

        HttpRequest(std::string username, std::string password) : username(username), password(password) {};
        std::string get_username();
        std::string get_password();
    };
}