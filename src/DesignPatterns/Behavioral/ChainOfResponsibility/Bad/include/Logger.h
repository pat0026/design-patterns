#pragma once
#include <string>
#include <memory>
#include "HttpRequest.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    class Logger
    {
    public:
        void log(const std::shared_ptr<HttpRequest> &request);      
    };
}