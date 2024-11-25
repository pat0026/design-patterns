#include "Authenticator.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    bool Authenticator::authenticate(const std::shared_ptr<HttpRequest> &request)
    {
        std::string username = request->get_username();
        std::string password = request->get_password();
        return username == "pat" && password == "123";
    }
}