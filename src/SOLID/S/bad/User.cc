#pragma once
#include "User.h"
#include "EmailSender.h"
#include <string>

namespace S
{
    void User::set_username(std::string username)
    {
        this->username = username;
    }

    void User::set_email(std::string email)
    {
        this->email = email;
    }

    void User::Register()
    {
        // Register user logic

        // Send email
        EmailSender emailSender = EmailSender();

        emailSender.SendEmail(email, "Welcome to our platform");
    }
}