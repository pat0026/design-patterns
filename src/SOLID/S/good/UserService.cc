
#include <iostream>
#include "UserService.h"
#include "EmailSender.h"

namespace S
{

    void UserService::Register(User user)
    {
        EmailSender emailSender = EmailSender();
        emailSender.SendEmail(user.get_email(), "Hi there!");
    }
}
