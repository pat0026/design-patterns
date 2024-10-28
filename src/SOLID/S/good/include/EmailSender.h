#pragma once

#include <string>

namespace S
{
    class EmailSender
    {
    public:
        void SendEmail(std::string email, std::string message);
    };
}