#pragma once
#include <string>
#include <memory>
#include "HttpRequest.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    class Authenticator
    {
    public:
        bool authenticate(const std::shared_ptr<HttpRequest> &request);      
    };
}