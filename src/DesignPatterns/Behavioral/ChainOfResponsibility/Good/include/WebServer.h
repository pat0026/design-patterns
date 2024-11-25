#pragma once
#include "Handler.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    class WebServer
    {
        std::shared_ptr<Handler> handler;

    public:
        WebServer(std::shared_ptr<Handler> handler) : handler(handler) {};
        void handle(const std::shared_ptr<HttpRequest> &request);
    };
}