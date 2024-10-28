#include <string>
#include <iostream>
#include "EmailSender.h"

namespace S
{
    void EmailSender::SendEmail(std::string email, std::string message)
    {
        std::cout << "Sending email to " << email << ": " << message << std::endl;
    }
}