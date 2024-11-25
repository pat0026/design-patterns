#include "HttpRequest.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    std::string HttpRequest::get_username()
    {
        return username;
    }

    std::string HttpRequest::get_password()
    {
        return password;
    }
}