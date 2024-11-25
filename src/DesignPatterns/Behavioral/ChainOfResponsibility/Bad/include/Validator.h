#pragma once
#include <string>
#include <memory>
#include "HttpRequest.h"

namespace DesignPatterns::Behavioral::ChainOfResponsibility
{
    class Validator
    {
    public:
        void validate(const std::shared_ptr<HttpRequest> &request);      
    };
}