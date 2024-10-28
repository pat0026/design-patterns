#pragma once

#include <string>

namespace S
{
    class User
    {
        std::string username;
        std::string email;

    public:
        void set_username(std::string username);
        void set_email(std::string email);
        void Register();
    };
}