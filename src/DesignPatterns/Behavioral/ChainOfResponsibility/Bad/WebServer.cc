#include "WebServer.h"
#include "Validator.h"
#include "Authenticator.h"
#include "Logger.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    void WebServer::handle(const std::shared_ptr<HttpRequest> &request)
    {
        std::unique_ptr<Validator> validator = std::make_unique<Validator>();
        validator->validate(request);

        std::unique_ptr<Authenticator> authenticator = std::make_unique<Authenticator>();
        bool authenticated = authenticator->authenticate(request);
        
        std::unique_ptr<Logger> logger = std::make_unique<Logger>();
        logger->log(request);
    }
}