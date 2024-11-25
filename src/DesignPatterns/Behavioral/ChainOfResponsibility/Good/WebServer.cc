#include "WebServer.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    void WebServer::handle(const std::shared_ptr<HttpRequest> &request)
    {
        handler->handle(request);
    }
}