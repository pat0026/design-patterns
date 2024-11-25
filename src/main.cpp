#include <iostream>
#include <memory>
#include "WebServer.h"
#include "Validator.h"
#include "Logger.h"
#include "Authenticator.h"

using namespace DesignPatterns::Behavioral::ChainOfResponsibility;

int main(int, char **)
{
    std::shared_ptr<HttpRequest> request = std::make_shared<HttpRequest>("pat", "123");
    std::shared_ptr<Authenticator> authenticator = std::make_shared<Authenticator>();
    std::shared_ptr<Validator> validator = std::make_shared<Validator>();
    std::shared_ptr<Logger> logger = std::make_shared<Logger>();
    std::unique_ptr<WebServer> server = std::make_unique<WebServer>(validator);
    validator->set_next(authenticator)->set_next(logger);
    server->handle(request);
}