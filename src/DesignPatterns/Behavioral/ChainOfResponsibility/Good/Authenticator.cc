#include <iostream>
#include "Authenticator.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    bool Authenticator::do_handle(const std::shared_ptr<HttpRequest> &request)
    {
        std::cout << "Authenticating" << std::endl;
        std::string username = request->get_username();
        std::string password = request->get_password();

        return !(username == "pat" && password == "123");
    }
}