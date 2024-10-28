#pragma once

#include <string>

namespace S
{
    class User
    {
        std::string username;
        std::string email;

    public:
        User(std::string username, std::string email) : username(username), email(email) {};
        std::string get_username();
        std::string get_email();
    };
}