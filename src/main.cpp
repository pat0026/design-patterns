#include <iostream>
#include <memory>
#include "WebServer.h"

using namespace DesignPatterns::Behavioral::ChainOfResponsibility;

int main(int, char **)
{
    std::shared_ptr<HttpRequest> request = std::make_shared<HttpRequest>("pat", "123");
    std::unique_ptr<WebServer> server = std::make_unique<WebServer>();
    server->handle(request);
}