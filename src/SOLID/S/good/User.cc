#pragma once
#include "User.h"
#include <string>

namespace S
{
    std::string User::get_username()
    {
        return username;
    }
    std::string User::get_email()
    {
        return email;
    }
}