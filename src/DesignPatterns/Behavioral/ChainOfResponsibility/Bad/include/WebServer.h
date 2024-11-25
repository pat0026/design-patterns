#pragma once
#include <memory>
#include "HttpRequest.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    class WebServer
    {
    public:
        void handle(const std::shared_ptr<HttpRequest> &request);
    };
}